#include <iostream>
using namespace std;
int main() {
	int a, b, n;
	cin >> n;
	a = n / 1000;
	b = n % 1000;
	int s1, s2;
	s1 = a % 10 + (a / 10) % 10 + a / 100;
	s2 = b % 10 + (b / 10) % 10 + b / 100;
	if (s1 == s2) cout << "YES";
	else cout << "NO";
}
	