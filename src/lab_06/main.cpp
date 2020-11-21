#include <iostream>

using namespace std;

void show(int arr[5][5]);

int main() {
	int tmp;
	int arr[5][5];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			arr[i][j] = j + 1;
		}
	}
	show(arr);
	cout << endl;
	for (int i = 0; i < 5; i++) {
		tmp = arr[i][0];
		for (int j = 0; j < 4; j++) {
			arr[i][j] = arr[i][j+1];
		}
		arr[i][4] = tmp;

	}
	show(arr);

	return 0;
}

void show(int arr[5][5]) {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}

