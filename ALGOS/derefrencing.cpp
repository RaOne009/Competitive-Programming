#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int a = 10;
	int *aptr = &a;

	cout << aptr << "  " << &a << "  " << *(&a) << "  " << *(aptr) << "  " << &(*aptr) << " " << *(&a);

	return 0;
}
// * always gives the value stored on the add.
// & it gives the add.