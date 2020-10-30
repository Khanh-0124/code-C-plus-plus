
#include <iostream>
#include <string>
using namespace std;

const char BangMa[] = { // bang ma chuyen doi 
	'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H',
	'I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'
};
void Chuyen_Tu_He_10(int a, int b) {
	char A[1000];
	if (a == 0) {
		cout << "So nguyen " << a << " chuyen sang he " << b << " la: 0" << endl;
	}
	else
	{
		int i = 0;
		while (a != 0) {
			int so_du = a%b;
			a /= b;
			A[i++] = BangMa[so_du];
		}
		A[i] = '\0';
		cout << "So nguyen " << a << " chuyen sang he " << b << " la: ";
		for (int i = strlen(A) - 1; i >= 0; i--) {
			cout << A[i];
		}
		cout << endl;
	}

}
int main()
{
	int a, b;
	cout << "Nhap so nguyen a: ";
	cin >> a;
	do {
		cout << "Nhap he co so can chuyen doi sang: ";
		cin >> b;
	} while (b < 2 || b > 36);
	Chuyen_Tu_He_10(a, b);
	return 0;
}
