#include <iostream>
using namespace std;

template<class K>
class father {
	public:
		virtual void say() final {
			cout << "father says" << endl;
		}
		
		virtual void hello()  {
			cout << "hello" << endl;	
		}
		
		class {
			int age;
			char *name;
		} temp;
		
		template<class T>
		class tobj {
			
		}; 
		tobj<K> t1;
		tobj<int> t2;
};

class son: public father<int> {
	public:
		// ����������	
//		void say() {
//			
//		}
		// ��ȷ����
		// ע������б���ֵ������ȫ��ͬ������������
		void hello() override {
			cout << "hello" << endl;
		}
};

int main() {
	cout << hex<< endl;
	cout << 100 << endl;
//	father<int> f;
//	
//	f.temp.age;
//	f.t1;
	
	return 0;
}
