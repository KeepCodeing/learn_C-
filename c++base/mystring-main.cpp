#include <iostream>
#include "mystring.h"
using namespace std;

int main() {
	// ��Ӧֱ�Ӵ����ַ����������вι��� 
	mystring *str1 = mystring::makestring("hello world");
	cout << str1->get_str() << endl;
	
	// ��Ӧ�������ַ�����ʹ�÷�������
	mystring *str2 = mystring::makestring();
	str2->set_str("hello C++") ;
	cout << str2->get_str() << endl;
	
	// �����Ϊ�ǵ���ģʽ������ÿ��ʹ��ʱʵ����һ��mystring����str1��str2������ͻᵼ��ͬʱ������
	// ���ǰ�߻ᱻ����
	
	// Ȼ�������self���κ�һ��ʵ�����ö��У�ʵ���ϲ�̫������������Ŀ��...
	str2->release();
	
	mystring *str3 = mystring::makestring("karam police");
	cout << str3->get_str() << endl; 
	
	return 0;
}
