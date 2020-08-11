#include <iostream>
using namespace std;

template<class T> T findMIN(T *a, size_t b) {
	T min = a[0];
	for (int i = 1; i < b; i++) {
		if (a[i] < min) {
			min = a[i];
		}
	}
	return min;
}
template<class T> T findMIN2(T *a, size_t b) {
	T min = findMIN(a, b);
	T min2 = min;
	for (int i = 0; i < b; i++) {
		if (a[i] > min2) {
			min2 = a[i];
			break;
		}
	}
	for (int i = 0; i < b; i++) {
		if (a[i] < min2 && a[i] != min) {
			min2 = a[i];
		}
	}
	return min2;
}
int main()
{
	int x[5] = { 1,3,5,7,8 };
	float y[5] = { 3.24f,43.5f,4.6f,6.3f,6.4f };
	char z[5] = { 'A','T','G','f','r' };

	int imin = findMIN(x, sizeof(x) / sizeof(int));
	int imin2 = findMIN2(x, sizeof(x) / sizeof(int));
	if (imin == imin2) {
		cout << "Trong mang kieu int khong co gt min thu 2" << endl;
	}
	else {
		cout << "GT min thu 2 cua mang kieu int: " << imin2 << endl;
	}

	float fmin = findMIN(y, sizeof(y) / sizeof(float));
	float fmin2 = findMIN2(y, sizeof(y) / sizeof(float));
	if (fmin == fmin2) {
		cout << "Trong mang kieu float khong co gt min thu 2" << endl;
	}
	else {
		cout << "GT min thu 2 cua mang kieu float: " << fmin2 << endl;
	}

	char cmin = findMIN(z, sizeof(z) / sizeof(char));
	char cmin2 = findMIN2(z, sizeof(z) / sizeof(char));
	if (cmin == cmin2) {
		cout << "Trong mang kieu char khong co gt min thu 2" << endl;
	}
	else {
		cout << "GT min thu 2 cua mang kieu char: " << cmin2 << endl;
	}
	return 0;
}