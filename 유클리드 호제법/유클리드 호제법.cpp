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
	unsigned int a,b;
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

	cout << "Euclidean:" << Euclidean(a,b) <<endl;	

	return 0;
}