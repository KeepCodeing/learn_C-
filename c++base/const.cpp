#include <iostream>
using namespace std;

enum color { red, blue, yellow ,purple };

void test(const int i) {
	cout << i << endl;
}

int add(int i, int j) {
	return i + j;
}

int myadd(int a, int b, int (* &pa)(int, int)) {
	return pa(a, b);
}

int sub(int i, int j) {
	return i - j;
}

void changeadd(int (* &pa)(int, int)) {
	pa = sub;
}

// ����sub���͵�ָ��
int (*& psub(int (*&rp)(int, int)))(int, int) {
//	return *sub;
//	int (*p)(int, int) = ::add;
//	return pa;
	return rp;
}

// �����(*&cr)�ǵô����ţ���Ȼ��Ѻ����&r()����ָ������
void (*& changep(void (*&cr)(int (* &pa)(int, int))))(int (* &pa)(int, int)) {
	return cr;
}


//void (*& changep(void (* &pa)(int (* &pa)(int, int))))(int (* &pa)(int, int)) {
////	pa = sub;
////	return pa;
//	return pa;
//}

int main() {
	int (*p)(int, int) = add;
	int (* &pa)(int, int) = p;
	cout << myadd(10, 20, pa) << endl;
	
	void (*pchan)(int (* &pa)(int, int)) = changeadd;
	int (*ppsub)(int, int) = sub;
	
	
	changeadd(pa);
	cout << pa(10, 20) << endl;
	
	psub(p)(1, 2);
	
	changep(pchan)(ppsub);
	
//    const int a = 10;
//    int b = 20;
//    
//    test(b);
    
    // ������Ϊconst int��int�ǲ�ͬ����
//    int *p = &a;
    
    // ͨ��ǿת��ֵ������������ɹ�
//    int *p = (int *)&a;
//    *p = 20;
//    cout << *p << ' ' << a;

	// ͨ��C++����ʽȥ��const���������������޷��޸ģ�ע����������ţ�
//	int *p = const_cast<int *>(&a);
//    *p = 20;
//    cout << *p << ' ' << a;
//    
//    int *t = new int[10];
//    for (auto dd: t) {
//		
//	}

	color::purple;
	
	int a[] = {1, 2, 3};
//	int &pa = a;
	
    
    return 0;
}
