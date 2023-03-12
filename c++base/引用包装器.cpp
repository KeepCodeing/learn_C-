#include <iostream>
#include <functional>
#include <memory>
#include<thread>
using namespace std;
using namespace std::placeholders;
using namespace std::this_thread;

template<class T>
void add(T arg) {
	arg++;
}

struct demo {
	public:
		void say() {
			cout << "hello world" << endl;
		}
		
		int add(int a) {
			return a + 10;
		}
};

void say_hello() {
	cout << "hello world" << endl;
}

int main() {
//	int cnt = 0;
//	int &rcnt = cnt;
	
//	add(&cnt);
//	add(rcnt);
//	add(reflexpr(cnt));
		
//	cout << cnt << endl;	
//	demo d1;
//	
//	auto say = bind(&demo::say, &d1);
//	say();
//	
//	auto add = bind(&demo::add, &d1, _1);
//	cout << add(10) << endl;
//	
//	int (demo::*t)(int) = &demo::add;
//	auto t2 = &demo::add;

//	int &&t = 1;
//	int *&&p = &t;
//	
//	unique_ptr<int> pi(new int);

	thread t(say_hello), t2(say_hello);
	
	t.join();
	t2.join();

	return 0;
}
