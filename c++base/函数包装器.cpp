#include <iostream>
// Ҫʹ�ú�����װ����ʹ�����ͷ�ļ�
#include <functional>
using namespace std;

// ������װ��
template<typename T, typename F>
T wrapper(T i, F fun) {
	cout << "enhanced" << endl;
	return fun(i);
}

int main() {
	// ��װ���﷨:
	// function<����ֵ(�����б�) = [](�����б�) { //������ };
	function<int(int)> func = [](int i) {
		return i * 2;
		// ע����ʵ�����Ǹ����ʽ������ĩβҲ�üӷֺ�
	};

	// ��������
	cout << func(10) << endl;

	// ʹ�ð�װ����ǿ
	cout << wrapper(10, func) << endl;;

	return 0;
}
