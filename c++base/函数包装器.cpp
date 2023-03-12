#include <iostream>
// 要使用函数包装器得使用这个头文件
#include <functional>
using namespace std;

// 声明包装器
template<typename T, typename F>
T wrapper(T i, F fun) {
	cout << "enhanced" << endl;
	return fun(i);
}

int main() {
	// 包装器语法:
	// function<返回值(参数列表) = [](参数列表) { //函数体 };
	function<int(int)> func = [](int i) {
		return i * 2;
		// 注意这实际上是个表达式，所以末尾也得加分号
	};

	// 单独调用
	cout << func(10) << endl;

	// 使用包装器加强
	cout << wrapper(10, func) << endl;;

	return 0;
}
