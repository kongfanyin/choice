#define _CRT_SECURE_NO_WARNINGS 1


#include<string>
#include<fstream>
#include<iostream>
template<typename T>T lesser(T a, T b);
int lesser(int a, int b)
{
	a = a < 0 ? -a: a;
	b = b < 0 ? -b : b;
	return a < b ? a : b;
}
int main(char argc, char** argv)
{
	using namespace std;
	int m = 20, n = -30;
	double x = 15.5, y = 25.9;

	cout << lesser(m, n) << endl;
	cout << lesser(x, y) << endl;
	cout << lesser<>(m, n) << endl;
	cout << lesser<int>(x, y) << endl;
	return 0;
}
template<typename T>T lesser(T a, T b)
{
	return a < b ?  a: b;
}