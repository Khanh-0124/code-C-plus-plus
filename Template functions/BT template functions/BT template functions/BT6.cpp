#include <iostream>
using namespace std;
#define M 4
#define N 4
template<class T> T findMaxinColum(T a[M][N], size_t col) {
	T max = a[0][col];
	for (size_t i = 1; i < M; i++) {
		if (a[i][col] > max) {
			max = a[i][col];
		}
	}
	return max;
}
int main()
{
	int a[M][N] = {
		{1,2,6,3},
		{4,-6,5,2},
		{2,-8,6,0},
		{1,7,9,6}
	};
	cout << "GT max cua cot thu 2 trong ma tran la: " << findMaxinColum(a, 1) << endl;
	return 0;
}