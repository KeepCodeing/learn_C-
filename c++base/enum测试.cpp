#include <iostream>
using namespace std;

enum T{ a = 1, b = 2 };

template<typename T> void trans(T && val) {
	
}

void ttt(int && t) {
	
}

int main() {
	cout << sizeof(T) << endl; // 4
	
	T t = T(3);
	T t2 = T(100);
	cout << t << ' ' << t2 << endl;
	
	int x = 10;
	
	trans<int>(10);
	ttt(x);
	
	return 0;
}
