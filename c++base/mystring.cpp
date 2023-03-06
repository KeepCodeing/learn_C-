#include "mystring.h"
#include <cstring>
#include <iostream>
using namespace std;

// 注意初始化的方式，这里static不是类型，是修饰符，所以不能写成 static type var这种形式
mystring *mystring::self = NULL;

// 构造函数，如果makestring有默认参数就用它创建新字符串，否则就用set_str
mystring::mystring(): str(NULL) {

}

// 只有第一次创建self会走到这里，所以直接分配空间就行了 
mystring::mystring(const char *str) {
	const int len = strlen(str);
	this->str = new char[len + 1];
	strcpy(this->str, str);
	this->str[len] = '\0';
}

mystring::~mystring() {
	delete []str;
}

// 创建字符串，单例的核心所在，通过一个静态变量self判断是否存在实例
mystring *mystring::makestring(const char *str) {
	// self如果为null，就创建一个，后续创建不为null就直接复用 
	if (self == NULL) self = new mystring(str);
	return self;
}

// 如果第一次调用不指定字符串，那就手动使用方法设置 
void mystring::set_str(const char *str) {
	if (self) {
		const int len = strlen(str);
		const int nowLen = strlen(this->str);
		
		// 如果空间不够就重新分配，否则复用
		if (nowLen < len) {
			delete []this->str;
			this->str = new char[len + 1];
			strcpy(this->str, str);
			this->str[len] = '\0';
		} else {
			strcpy(this->str, str);
		}
	}
}

const char *mystring::get_str() {
	return str;
}

void mystring::release() {
	if (self != NULL) {
		delete self;
		self = NULL;
	}
}
