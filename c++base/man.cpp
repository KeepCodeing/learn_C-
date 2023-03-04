#include "man.h"

// 下面这些简单代码都很可能被编译器优化成inline形式
int man::get_age() {
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
