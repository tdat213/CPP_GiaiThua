

#include <iostream>
using namespace std;

int main() {
	int n, gt = 1;
	cout << "Nhap so:";
	cin >> n;


	for (int i = 1; i <= n; i++) {
		gt *= i;
	}
	cout << "Giai thua " << n << "!=" << gt;


	cout << "\nSU DUNG WHILE\n";
	int j = 1;
	gt = 1;
	while (j <= n) {
		gt *= j;
		j++;
	}
	cout << "Giai thua " << n << "!=" << gt;

	return 0;
}