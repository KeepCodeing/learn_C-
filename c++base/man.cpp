#include "man.h"
#include <cstring>

// 下面这些简单代码都很可能被编译器优化成inline形式
int man::get_age() const {
	return age;
}

string man::get_name() {
	return name;
}

void man::set_age(int a) {
	age = a;
}

void man::set_name(string n) {
	name = n;
}

man::man(const char a[100]) {
//	*address = *a;
	strcpy(address, a);
	
	cout << "constructor" << endl;
}

const char* man::get_address() {
	return address;
}

man::man(const man &it) {
	cout << "copied" << endl;
	strcpy(address, it.address);
}

void man::set_address(const char *a) {
	strcpy(address, a);
}
