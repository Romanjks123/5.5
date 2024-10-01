#include <iostream>
#include <iostream>
#include <cmath>

using namespace std;

int f(int n, int r, int k) { 
	if (n == 0 && r == 0) {
		return 1;
	}
	else if (n<=0 || 0>r || r>n*(k-1)+1) {
		return 0;

		}
	int sum = 0;
	for (int i = 0; i < k; ++i) {
		sum += f(n - 1, r - i,k );
	}

	return sum;

}

int calc_x(int n, int k, int t) {

	int x = 0;
	int m = pow(10, t);

	for (int i = 0; i <= n * (k - 1); ++i) {
		x += f(n, i, k) % m;

	}
	return x;
}

int main() {
	int n, k, t;

	cout << "n= "; cin >> n;
	cout << "k= "; cin >> k;
	cout << "t= "; cin >> t;

	int res = calc_x(n, k, t);

	cout << "x= " << res << endl;

	return 0;
}



