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
	// 입력값
	unsigned int a,b,gcd,lcm;
	cout << "입력값 첫번째:";
	cin >> a;
	cout << "입력값 두번째:";
	cin >> b;

	if (a > b) {
		unsigned int t;
		t = b;
		b = a;
		a = t;
	}

	// 최대 공약수
	gcd = Euclidean(a, b);
	// 최소 공배수
	lcm = a*b/gcd;

	cout << "Euclidean." <<endl;
	cout << "최대 공약수 gcd:" << gcd <<endl;
	cout << "최소 공배수 lcm:" << lcm <<endl;

	return 0;
}