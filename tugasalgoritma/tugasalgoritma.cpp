#include <iostream>
using namespace std;

int a[20];
int n;

void input() {
	while (true) {
		cout << "masukkan banyaknya element array = ";
		cin >> n;
		if (n <= 20)
			break;
		else {
			cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";
	}
}
	cout << endl;
	cout << "===========" << endl;
	cout << "Masukkan Elemen Array" << endl;
	cout << "===========" << endl;

	for (int i = 0; i < n; i++) {
		cout << "Data ke berapa-" << (i + 1) << ": ";