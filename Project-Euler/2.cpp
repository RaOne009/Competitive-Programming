#include <bits/stdc++.h>
using namespace std;
int main() {
	int first = 1, second = 2, next, d = 2;
	while (true) {
		next = first + second;
		if (next >= 4000000) break;
		first = second;
		second = next;
		if (next % 2 == 0) {
			d += next;
		}
	}
	cout << d << "\n";
	return 0;
}




