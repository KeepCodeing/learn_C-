#include <iostream>
#include "man.h"

using namespace std;

int main() {
	char a[] = "abc";
	man m = man(a);
	man m2 = m;
	
	m.say_hello();
	m.set_age(10);
	
	m2.set_address("hhh");
	
	cout << m.get_address() << endl;
	cout << m2.get_address() << endl;
	
	const man m3 = man("asdf");
	cout << m3.get_age() << endl;
	return 0;
}
