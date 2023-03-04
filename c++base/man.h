#ifndef MAN_H
#define MAN_H

#include <string>
#include <iostream>
using namespace std;

class man {
	private:
		int age;
		string name;
	
	public:
		int get_age();
		
		string get_name();
		
		void set_age(int a);
		
		void set_name(string n);
		
		void say_hello() {
			cout << "hello hello how low" << endl;
		}
	
};

#endif
