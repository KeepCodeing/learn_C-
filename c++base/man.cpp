#include "man.h"

// ������Щ�򵥴��붼�ܿ��ܱ��������Ż���inline��ʽ
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
