#ifndef MYSTRING_H
#define MYSTRING_H

class mystring {
	private:
		char *str;
		static mystring *self;

		// ����ģʽ�ĺ���˼�룺ͨ�����ù��캯��+ʹ�þ�̬�������ȫ��ʵ��
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
