#include <iostream>
using namespace std;

class demo {
	private:
		char *name;

	public:
		int age;
		static int i;
		
		static void test() {
			cout << "test" << endl;
		}
	
		demo(int a): age(a) {
			
		}

	protected:
		char *address;
};

int demo::i = 0;

class son1: public demo {
	public:
		son1(): demo(1) {
//			cout <<  age << address<< endl;
//			this->demo::age;
			cout << this->demo::i << endl;
			test();
		}
};

class son2: protected demo {
	public:
		son2(): demo(2) {
			cout << this->age << this->address << endl;
		}

		void t() {
			cout << age << address << endl;
		}
};

class son3: private demo {
	public:
		son3(): demo(3) {
			cout << this->age << this->address<< endl;
		}
};

int main() {
	son1 s1 = son1();
//	son2 s2 = son2();
//	son3 s3 = son3();

	son1 *sp = new son1();
	
	cout << sp->demo::i << endl;
	sp->test();
	
//	int i = s1.demo::age;

//	cout << s1.age  << endl;
	
//	s.name;
	return 0;
}
