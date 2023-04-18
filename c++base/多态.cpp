#include <iostream>
using namespace std;

class father {
	public:

		char x;

		father(): x('X') {
		}

		virtual void say() {
			cout << "father says " << x << endl;
		}
};

class son: public father {
	public:
		char y;
		son(): y('Y') {
		}

		void say() {
			cout << "son says " << y << endl;
		}
};

class child: public son {
	public:
		char z;
		child(): z('Z') {
		}

		void say() {
			cout << "child says " << z << endl;
		}
};

int main() {
	father *f = new son;
	son *s = new son();
	
//	f = s;

//	f = static_cast<son *>(s);
//	// 调用子类方法
	f->say();
//	((son *)f)->say();

	return 0;
}
