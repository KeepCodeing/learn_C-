#include <iostream>
#define N 10
#define N 20

using namespace std;


class A{
	char a;
	int b;
	char c;
};


class B{
	char a;
	char c;
	int b;
};


int main(){
	cout<<sizeof(A)<<endl;
	cout<<sizeof(B)<<endl;	
} 
