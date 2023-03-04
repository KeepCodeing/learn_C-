#ifndef MYSTRING_H
#define MYSTRING_H

class mystring {
	private:
		char *str;
		static mystring *self;

		// 单例模式的核心思想：通过禁用构造函数+使用静态变量存放全局实例
	public:
		void set_str(const char *str);
		const char *get_str();

		static mystring *makestring(const char *str = NULL);
		void release();
		
		mystring(const mystring &it);

	protected:
		mystring();
		mystring(const char *);
		~mystring();
};

#endif
