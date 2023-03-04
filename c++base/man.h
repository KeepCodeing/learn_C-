#ifndef MAN_H
#define MAN_H

#include <string>
#include <iostream>
using namespace std;

class man {
	private:
		int age;
		string name;
		
		char address[100];
	
	public:
		man(const man &it); 
		
		man(const char *address);
		
		int get_age() const;
		
		string get_name();
		
		const char *get_address();
		
		void set_age(int a);
		
		void set_name(string n);
		
		void say_hello() {
			cout << "hello hello how low" << endl;
		}
		
		void set_address(const char *);
	
};

#endif
