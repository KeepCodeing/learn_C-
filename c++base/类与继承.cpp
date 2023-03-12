#include <iostream>
using namespace std;

class father {
	public:

		char str[100];

		father(): str("father") {
			cout << "father constructor" << endl;
		}

		void say() {
			cout << "father says" << endl;
		}
};

class son: public father {
	public:
		char str[100];
		son(): str("son") {
			cout << "son constructor" << endl;
		}

		void say() {
			cout << "son says" << endl;
		}
};

int main() {
	{
//		father *f = new father;
//		son *s = new son;
//
//		cout << f->str << endl;
//		cout << s->str << endl;
//
//		f->say();
//		s->say();
	}

	{
//		father *f = new son;
//
//		cout << f->str << endl;
//		f->say();
	}

	{
		father *f = new father;
		son *s = static_cast<son *>(f);

		cout << f->str << endl;
		cout << s->str << endl;

		f->say();
		s->say();
	}

	return 0;
}
