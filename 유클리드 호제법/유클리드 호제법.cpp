#include <iostream>
#include <cstdio>
#include <cmath>
#include <memory.h>
#include <stack>

using namespace std;

int Euclidean(int a, int b)
{
	cout << a << " , " << b << endl;
	return a % b ? Euclidean(b, a%b) : b;
}

int main()
{
	// �Է°�
	unsigned int a,b,gcd,lcm;
	cout << "�Է°� ù��°:";
	cin >> a;
	cout << "�Է°� �ι�°:";
	cin >> b;

	if (a > b) {
		unsigned int t;
		t = b;
		b = a;
		a = t;
	}

	// �ִ� �����
	gcd = Euclidean(a, b);
	// �ּ� �����
	lcm = a*b/gcd;

	cout << "Euclidean." <<endl;
	cout << "�ִ� ����� gcd:" << gcd <<endl;
	cout << "�ּ� ����� lcm:" << lcm <<endl;

	return 0;
}