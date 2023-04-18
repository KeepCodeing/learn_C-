#include <iostream>
using namespace std;

class demo {
	public:
		virtual void say()=0;
};

class child: public demo {
	
};

template<class T>
class box {
	public:
		T data;
		box() {
			
		}
		box(T data) {
			this->data = data;
		}
		void say() {
			cout << data << endl;
		}
};

int main() {
//	child * ch = new child;
	box<int> b1 = box<int>(1145);
	box<char *> b2 = box<char *>("hello world");
	
	b1.say();
	b2.say();
	
	return 0;
}
