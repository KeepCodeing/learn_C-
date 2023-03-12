#include <iostream>
using namespace std;

class demo {
	private:
		int n;
	public:
		explicit demo(int n) {
			this->n = n;
		}

		operator int() {
			return n;
		}
};


int main() {
	demo d = (demo)10;

	int t = d;
	cout << t << endl;
//	demo t = 10;
	return 0;
}
