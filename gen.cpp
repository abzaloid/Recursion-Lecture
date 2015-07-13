#include <iostream>

using namespace std;

int a[1000];

void gen(int n, int k) {

	if (k == n + 1) {
		for (int i = 1; i <= n; i++)
			cout << a[i];
		cout << endl;
		return;
	}

	a[k] = 0; gen(n, k + 1);
	a[k] = 1; gen(n, k + 1);
}

int main () {

	int n;

	cin >> n;

	gen(n, 1);

	return 0;
}