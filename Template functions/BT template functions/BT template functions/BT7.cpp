#include <iostream>
using namespace std;
#define M 4
#define N 4
template<class T> T findMininRow(T a[M][N], size_t row) {
	T min = a[row][0];
	for (size_t i = 1; i < M; i++) {
		if (a[row][i] < min) {
			min = a[row][i];
		}
	}
	return min;
}
int main()
{
	int a[M][N] = {
		{ 1,2,6,3 },
		{ 4,-6,5,2 },
		{ 2,-8,6,0 },
		{ 1,7,9,6 }
	};
	cout << "GT min cua hang thu 2 trong ma tran la: " << findMininRow(a, 1) << endl;
	return 0;
}