#include <iostream>
#include <vector>
using namespace std;

void quicksort(vector<int > &vec, int left, int right) {
	if (left >= right) return;

	int mid = vec[left];

	int i = left, j = right;

	while (i < j) {
		while (j > i && vec[j] >= mid) j--;
		while (i < j && vec[i] <= mid) i++;

		swap(vec[i], vec[j]);
	}

	swap(vec[left], vec[i]);

	quicksort(vec, left, i - 1);
	quicksort(vec, i + 1, right);
}

int main() {
	vector<int > vec{1, 3, 5, 7, 9, 2, 4, 6, 8, 10};
//	for (int i = 10; i > 0; i--) {
//		vec.push_back(i);
//	}

//	for (int i = 0; i < 10; i++) {
//		vec.push_back(i);
//	}

	quicksort(vec, 0, vec.size() - 1);

	for (auto i: vec) {
		cout << i << endl;
	}

	return 0;
}
