#include "mystring.h"
#include <cstring>
#include <iostream>
using namespace std;

// ע���ʼ���ķ�ʽ������static�������ͣ������η������Բ���д�� static type var������ʽ
mystring *mystring::self = NULL;

// ���캯�������makestring��Ĭ�ϲ����������������ַ������������set_str
mystring::mystring(): str(NULL) {

}

// ֻ�е�һ�δ���self���ߵ��������ֱ�ӷ���ռ������ 
mystring::mystring(const char *str) {
	const int len = strlen(str);
	this->str = new char[len + 1];
	strcpy(this->str, str);
	this->str[len] = '\0';
}

mystring::~mystring() {
	delete []str;
}

// �����ַ����������ĺ������ڣ�ͨ��һ����̬����self�ж��Ƿ����ʵ��
mystring *mystring::makestring(const char *str) {
	// self���Ϊnull���ʹ���һ��������������Ϊnull��ֱ�Ӹ��� 
	if (self == NULL) self = new mystring(str);
	return self;
}

// �����һ�ε��ò�ָ���ַ������Ǿ��ֶ�ʹ�÷������� 
void mystring::set_str(const char *str) {
	if (self) {
		const int len = strlen(str);
		const int nowLen = strlen(this->str);
		
		// ����ռ䲻�������·��䣬������
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
