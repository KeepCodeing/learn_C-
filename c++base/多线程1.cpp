#include <iostream>
#include<thread>
using namespace std;
using namespace std::this_thread;

void say_hello(int num) {
	cout << "hello world" << ' ' << num << endl;
}

int main() {
	thread t(say_hello, 1), t2(say_hello, 2);
	
    // ˳��ִ�У�������̵߳ȴ�ǰ���߳�ִ�������ִ��
	t.join();
	t2.join();
    
    // ����ִ�У����������������������߳�����ִ�У����˳��ȷ��
//    t.detach();
//    t2.detach();

	return 0;
}
