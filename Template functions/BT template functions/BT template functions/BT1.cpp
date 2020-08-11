#include <iostream>
using namespace std;

template<class T> T TimMax(T a, T b, T c) {
	T max = a;
	if (b > max) {
		max = b;
	}
	if (c > max) {
		max = c;
	}
	return max;
}
int main()
{
	int X = TimMax<int>(12, 31, -24);
	long Y = TimMax<long>(123456543, 654323456, 345433);
	float Z = TimMax<float>(23.455f, 234.3f, 243.5f);

	cout << "MAX INT: " << X << endl
		<< "MAX LONG: " << Y << endl
		<< "MAX FLOAT: " << Z << endl;
	return 0;
}	
