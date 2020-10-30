#include<iostream>
using namespace std;

void Nhapmang(int mang[], int &n) {
	do {
		cout << "Nhap so phan cua mang: ";
	cin >> n;
	} while(n < 2);
	
	cout << "Nhap cac phan tu cua mang: " << endl;
	for(int i = 0; i < n; i++) {
		cout << " mang[" << i << "] = ";
		cin >> mang[i];
	}
}
void Hienthi(int mang[], int n) {
	for(int i = 0; i < n; i++) {
		cout << "\t" << mang[i];
	}
	cout << endl;
}
void Sapxeptang(int mang[], int n) {
	for(int i = 0; i < n; i++) {
		for(int j = n-1; j > i; j--) {
			if(mang[j] < mang[j-1]) {
				int a = mang[j];
				mang[j] = mang[j-1];
				mang[j-1] = a;
			}
		}
	}
}
void Xoaphantu(int mang[], int &n) {
	int k;
	do {
		cout << "Nhap vi tri phan tu can xoa: ";
		cin >> k;
	} while(k < 0 || n <= k);
	
	for(int i = k; i < n-1; i++) {
		mang[i] = mang[i+1];
	}
	n--;
}
int Vitrichen(int mang[], int n, int k) {
	for(int i = 0; i < n; i++) {
		if(mang[i] >= k) {
			return i;
		}
	}
	return n;
}
void Chenphantu(int mang[], int &n) {
	int k;
	cout << "Nhap phan tu can chen: ";
	cin >> k;
	int a = Vitrichen(mang, n, k);
	for(int i = n; i > a; i--) {
		mang[i] = mang[i-1];
	}
	mang[a] = k;
	n++;
}
int main() {
	int mang[100];
	int n;
	Nhapmang(mang, n);
	cout << "Mang da nhap: ";
	Hienthi(mang, n);
	
	Sapxeptang(mang, n);
	cout << "Mang sap xep tang dan: ";
	Hienthi(mang, n);
	
	Xoaphantu(mang, n);
	cout << "Mang sau khi xoa: ";
	Hienthi(mang, n);
	
	Chenphantu(mang, n);
	cout << "Mang sau khi chen ma khong mat tinh sap xep: ";
	Hienthi(mang, n);
	
	cout << endl;
}
