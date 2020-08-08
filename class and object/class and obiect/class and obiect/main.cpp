#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

void getPerson(Person *ps, int n) {
	string last, mid, first, addr, gender, phone;
	int age;
	cout << "Nhap thong tin:" << endl;
	for (int i = 0; i < n; i++) {
		cout << "last name: ";
		cin >> last;
		cout << "mid name: ";
		cin.ignore();
		getline(cin, mid);
		cout << "first name: ";
		cin >> first;
		cout << "age: ";
		cin >> age;
		cout << "address: ";
		cin.ignore();
		getline(cin, addr);
		cout << "gender: ";
		cin >> gender;
		cout << "phone number: ";
		cin >> phone;
		Person p(0, last, mid, first, age, addr, gender, phone);
		ps[i] = p;
		cout << endl;
	}
}
void showPerson(Person* ps, int n) {
	for (int i = 0; i < n; i++) {
		ps[i].showinf();
	}
}
int main() {
	Person* ps;
	int n;
	do {
		cout << " Nhap so luong cac Person can them: ";
		cin >> n;
	} while (n <= 0);
	ps = new Person[n];
	getPerson(ps, n);
	showPerson(ps, n);
	return 0;
}