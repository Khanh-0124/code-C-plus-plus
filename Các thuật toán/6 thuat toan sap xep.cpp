#include<bits/stdc++.h>
using namespace std;

void xuat(int a[], int n) {
	for(int i = 0; i < n; i++) {
		cout << " " << a[i];
	}
}
void bubblesort(int a[], int n) {
	for(int i = 0; i < n-1; i++) {
		for(int j = n-1; j > i; j--) {
			if(a[j] < a[j-1]) {
				int temp = a[j];
				a[j] = a[j-1];
				a[j-1] = temp;
			}
		}
	}
}
void selectsort(int a[], int n) {
	for(int i = 0; i < n-1; i++) {
		int m = i;
		for(int j = i+1; j < n; j++) {
			if(a[j] < a[m]) {
				m = j;
			}
		}
		if(m != i) {
			int temp = a[m];
			a[m] = a[i];
			a[i] = temp;
		}
	}
}
void insertsort(int a[], int n) {
	for(int i = 1; i < n; i++) {
		int t = a[i];
		int j = i-1;
		while(j >= 0 && a[j] > t) {
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = t;
	}
}
void quicksort(int a[], int left, int right) {
	if(left < right) {
		int i = left;
		int j = right;
		int k = (left+right)/2;
		int t = a[k];
		while(i <= j) {
			while(a[i] < t) i++;      // nếu sx giảm thì đổi thành >
			while(a[j] > t) j--;	  // nếu sx giảm thì đổi thành <
			if(i <= j) {
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
				i++;
				j--;	
			}
		}
		quicksort(a, left, j);
		quicksort(a, i, right);
	}
}
void swap(int a[], int k, int n) {
	int i = 2*k+1; // i vŕ i+1 lŕ 2 lá of k
	// so sánh 2 lá
	if(a[i] < a[i+1]) i = i+1;
	if(a[k] < a[i] && i < n) {
		int temp = a[k];
		a[k] = a[i];
		a[i] = temp;
		swap(a, i, n); // tiep tuc voi cac nhanh ben duoi la duoc chon
	}
}
void create_heap(int a[], int n) {
	for(int i = n/2-1; i >= 1; i--) {
		swap(a, i, n);
	}
}
void heapsort(int a[], int n) {
	create_heap(a, n);
	for(int i = n-1; i >= 1; i--) {
		int temp = a[0];
		a[0] = a[i];
		a[i] = temp;
		swap(a, 0, i-1); // tiep tuc voi nhanh ben duoi tinh tu nut dau tien la 0
	}
}
void merge(int a[], int left, int mid, int right) {
	int n1 = mid - left + 1;
	int n2 = right - mid;
	int *a1 = new int[n1], 
		*a2 = new int[n2];
	
	for(int i = 0; i < n1; i++) {
		a1[i] = a[left + i];
	}
	for(int i = 0; i < n2; i++) {
		a2[i] = a[mid + i + 1];
	}
	
	int i = 0, j = 0, k = left; // k la bien giam sat, phai bang left
	while(i < n1 && j < n2) {
		a[k++] = (a1[i] < a2[j]) ? a1[i++] : a2[j++];
	}	
	while(i < n1) {
		a[k++] = a1[i++];
	}
	while(j < n2) {
		a[k++] = a2[j++];
	}
}
void mergesort(int a[], int left, int right) {
	if(left < right) {
		int mid = left + (right-left)/2;
		mergesort(a, left, mid);
		mergesort(a, mid+1, right);
		
		merge(a, left, mid, right);
	}
}
int main()
{
	int a[] = {9,8,7,6,5,4,3,2,1,0};
	int n = sizeof(a) / sizeof(int);
	cout << "      ";
	xuat(a, n);
	cout << "\nsort: ";
//	bubblesort(a, n);
//	selectsort(a, n);
//	insertsort(a, n);
//	quicksort(a, 0, n-1);
//	heapsort(a, n);
	mergesort(a, 0, n-1);
	xuat(a, n);
	return 0;
}

