#include <iostream>
#include<thread>
using namespace std;
using namespace std::this_thread;

void say_hello(int num) {
	cout << "hello world" << ' ' << num << endl;
}

int main() {
	thread t(say_hello, 1), t2(say_hello, 2);
	
    // 顺序执行，后面的线程等待前面线程执行完毕再执行
	t.join();
	t2.join();
    
    // 乱序执行，创建两个脱离主函数的线程立即执行，完成顺序不确定
//    t.detach();
//    t2.detach();

	return 0;
}
