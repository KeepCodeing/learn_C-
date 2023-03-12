#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main() {
	array<int, 5> arr = {1, 2, 3, 4, 5};
	array<int, 5> arr1 = {5, 4, 3, 2, 1};
	
	arr.swap(arr1);
	
	for (array<int, 5>::iterator it = arr.begin(); it != arr.end(); ++it) {
		cout << *it << ' ' << endl;
	}
	
	
	
	array<int, 5>::reverse_iterator cbegin, cend;
	cbegin = arr.rbegin();
	cend = arr.rend();
	
	while (cbegin != cend) {
		cout << *cbegin << endl;
		++cbegin;
	}
	
	int res = 0;
	
	for_each(arr.begin(), arr.end(), [&res](int x){
		res += x;
	});
	
	cout << res << endl;
	
	return 0;
}
