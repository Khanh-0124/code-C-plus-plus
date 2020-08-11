#include <iostream>
using namespace std;

template<class T> double findValueMedium(T *a, size_t b) {
	T sum = 0;
	for (int i = 0; i < b; i++) {
		sum += a[i];
	}
	if (b > 0) {
		return (1.0) * sum / b;
	}
	else {
		return 0;
	}
}
int main()
{
	int x[5] = { 1,3,5,7,8 };
	float y[5] = { 3.24f,43.5f,4.6f,6.3f,6.4f };
	
	cout << "GT Trung binh cua mang kieu int: " << findValueMedium(x, 5) << endl
		<< "GT Trung binh cua mang kieu float: " << findValueMedium(y, sizeof(y) / sizeof(float)) << endl;
		
	return 0;
}