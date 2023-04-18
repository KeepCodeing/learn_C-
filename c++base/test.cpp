#include <iostream>
#include <string.h>
using namespace std;

void change(char **str) {
	*str = static_cast<char *>(malloc(100));
	
	strcpy(*str, "hello");
	
	*str[6] = '\0';
	
	cout << *str << endl;
	
}

int main() {
//	int a = 20;
//	int *p = &a;
//	*p = 10;
	char *ch = nullptr;
	change(&ch);
	
	cout << ch << endl;
	return 0;
}
