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
		}

		demo& operator =(demo &d) {
			return *this;
		}
		
		~demo() {
			delete []str;
		}
};

int main1() {
//	funcspace::pointer = &add;
//
//	cout << funcspace::pointer(1, 20) << endl;
	int *p = NULL;
	int num = 10;

	p = &num;

	int *(&pn) = p;

	*pn = 114;

	cout << *pn << endl;

	const int &ttt = 10;
	
	int &&abc = 10;

	return 0;
}

//int main() {
//	char a[] = "abc";
//	man m = man(a);
//	man m2 = m;
//
//	m.say_hello();
//	m.set_age(10);
//
//	m2.set_address("hhh");
//
//	cout << m.get_address() << endl;
//	cout << m2.get_address() << endl;
//
//	const man m3 = man("asdf");
//	cout << m3.get_age() << endl;
//	return 0;
//}
