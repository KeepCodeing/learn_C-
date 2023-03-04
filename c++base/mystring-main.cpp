#include <iostream>
#include "mystring.h"
using namespace std;

int main() {
	// 对应直接传入字符串，调用有参构造 
	mystring *str1 = mystring::makestring("hello world");
	cout << str1->get_str() << endl;
	
	// 对应不传入字符串，使用方法构造
	mystring *str2 = mystring::makestring();
	str2->set_str("hello C++") ;
	cout << str2->get_str() << endl;
	
	// 最后因为是单例模式，所以每次使用时实际是一个mystring对象（str1和str2），这就会导致同时设置再
	// 输出前者会被覆盖
	
	// 然后是清空self，任何一个实例调用都行，实际上不太明白这样做的目的...
	str2->release();
	
	mystring *str3 = mystring::makestring("karam police");
	cout << str3->get_str() << endl; 
	
	return 0;
}
