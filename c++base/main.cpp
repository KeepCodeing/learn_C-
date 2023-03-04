#include <iostream>
#include "man.h"

using namespace std;

int main() {
	man m = man();
	m.say_hello();
	m.set_age(10);
	
	cout << m.get_age() << endl;
	return 0;
}
