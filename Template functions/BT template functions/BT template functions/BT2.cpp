#include <iostream>
using namespace std;

template<class T> T findMAX(T *a, size_t b) {
	T max = a[0];
	for (int i = 1; i < b; i++) {
		if (a[i] > max) {
			max = a[i];
		}
	}
	return max;
}

int main()
{
	int x[5] = { 1,3,5,7,8 };
	float y[5] = { 3.24f,43.5f,4.6f,6.3f,6.4f };
	char z[5] = { 'A','T','G','f','r' };

	cout << "GT max cua mang kieu int: " << findMAX(x, 5) << endl
		<< "GT max cua mang kieu float: " << findMAX(y, sizeof(y) / sizeof(float)) << endl
		<< "GT max cua mang kieu char: " << findMAX(z, sizeof(z) / sizeof(char)) << endl;
	return 0;
}