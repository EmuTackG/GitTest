#include <iostream>
#include "twice.h"

using namespace std;

int main()
{
	int n;

	cout << "input number : ";
	cin >> n;
	cout << endl;
	cout << n << " X 2 = " << twice(n) << endl;

	return 0;
}
