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
template<class T> T findMAX2(T *a, size_t b) {
	T max = findMAX(a, b);
	T max2 = max;
	for (int i = 0; i < b; i++) {
		if (a[i] < max2) {
			max2 = a[i];
			break;
		}
	}
	for (int i = 0; i < b; i++) {
		if (a[i] > max2 && a[i] != max) {
			max2 = a[i];
		}
	}
	return max2;
}
int main()
{
	int x[5] = { 1,3,5,7,8 };
	float y[5] = { 3.24f,43.5f,4.6f,6.3f,6.4f };
	char z[5] = { 'A','T','G','f','r' };

	int imax = findMAX(x, sizeof(x) / sizeof(int));
	int imax2 = findMAX2(x, sizeof(x) / sizeof(int));
	if (imax == imax2) {
		cout << "Trong mang kieu int khong co gt max thu 2" << endl;
	} else {
		cout << "GT max thu 2 cua mang kieu int: " << imax2 << endl;
	}

	float fmax = findMAX(y, sizeof(y) / sizeof(float));
	float fmax2 = findMAX2(y, sizeof(y) / sizeof(float));
	if (fmax == fmax2) {
		cout << "Trong mang kieu float khong co gt max thu 2" << endl;
	}
	else {
		cout << "GT max thu 2 cua mang kieu float: " << fmax2 << endl;
	}

	char cmax = findMAX(z, sizeof(z) / sizeof(char));
	char cmax2 = findMAX2(z, sizeof(z) / sizeof(char));
	if (cmax == cmax2) {
		cout << "Trong mang kieu char khong co gt max thu 2" << endl;
	}
	else {
		cout << "GT max thu 2 cua mang kieu char: " << cmax2 << endl;
	}
	return 0;
}