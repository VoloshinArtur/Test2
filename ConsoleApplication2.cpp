#include<iostream>
using namespace std;
int main() {
	int a, b, c, D;
	cin >> a;
	cin >> b;
	cin >> c;
	D = b * b - 4 * a * c;
	if (D>0)
	{
		cout << "has 2 roots";
	}
	else if (D<0)
	{
		cout << "no root";
	}
	else
	{
		cout << "root = 0";
	}
}