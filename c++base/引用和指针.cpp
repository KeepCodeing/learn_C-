#include <iostream>

using namespace std;

int * & test() {
	int *a = new int;
	
	*a = 10;
	
	int * &pa = a;
	
//	*pa = 10;
	
	return pa;
}

int main() {
	int * &r = test();
	
	cout << *r << endl;
	cout << *r << endl;
	
	return 0;
}
