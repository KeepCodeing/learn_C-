#include <iostream>
using namespace std;

class Test {
	public:
		void say() {
			cout << "hello world" << endl;
		}
};

int main() {

	auto fun = mem_fun(&Test::say);
	
	Test *t = new Test();
	
	fun(t);
	return 0;
}
