#include <iostream>
#include <cstring>
#include "man.h"

using namespace std;

namespace funcspace {
	int (*pointer)(int, int);
}

int add(int a, int b) {
	return a + b;
}

class demo {
	private:
	 	char *str;

	public:
		
		demo(const char *s) {
			int len = strlen(s);
			str = new char[len + 1];
			strcpy(str, s);
			str[len] = '\0';
			cout << "construct" << endl;
		}
		
		demo() {
			cout << "construct" << endl;
			str = new char[100];
		}
//		
		void copy_str(char * &&d) {
			int len = strlen(d);
			str = new char[len + 1];
			strcpy(str, d);
			
			str[len] = '\0';
		}
		
		demo(const demo &it) {
			cout << "copied" << endl;
		}
		
		// 不会触发拷贝构造，不知道为什么w，因为GetDemo确实返回的是右值
//		demo(const demo &&it) {
////			cout << "copy" << it.str << endl;
//			cout << *it.get_str() << endl;
//		}

		void test(const demo it) {
//			cout << "test" << it.get_str() << endl;
			cout << &it << endl;
//			cout << it.get_str() << endl;
			strcpy(str, it.get_str());
//			str = it.get_str();
//			cout << &str << endl;
		}

		char * get_str() const {
			return str;
		}
		
		~demo() {
			delete []str;
			cout << "destoryed" << endl;
		}
};


demo GetDemo() {
	demo d1("hello");
	cout << &d1 << endl;
	return d1;
}

void test(demo& m) {
	cout << m.get_str() << endl;
}

int main() {
//	const demo d1("hello");
	// 这样写触发的只是简单的赋值，因为GetDemo返回的是个右值，不会触发
	// 拷贝引用
//	demo d2 = GetDemo();
	
	// 这样写可以触发&it拷贝，因为d1是个左值，但还是没法
	// 触发&&it，可能因为匹配不上拷贝构造
//	demo d2 = d1;
//	cout << d2.get_str() << endl;
	
	// 使用右值引用，传入
	demo d2;
	d2.test(GetDemo());
	cout << d2.get_str() << endl;
	
	test(d2);
	
	return 0;
}
