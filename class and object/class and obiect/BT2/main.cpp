#include <iostream>
#include <string>
#include "Employee.h"
#include <iomanip>
using namespace std;

void getEmployee(Employee* ps, int n) {
	string full, addr, pos, phone;
	long sal;
	cout << "Nhap thong tin" << endl;
	for (int i = 0; i < n; i++) {
		cout << "full name: ";
		cin.ignore();
		getline(cin, full);
		cout << "address: ";
		getline(cin, addr);
		cout << "position: ";
		getline(cin, pos);
		cout << "phone number: ";
		cin >> phone;
		cout << "salary: ";
		cin >> sal;

		Employee p(0, full, addr, pos, phone, sal);
		ps[i] = p;

		cout << endl;
	}
}
void showEmployee(Employee* ps, int n) {
	for (int i = 0; i < n; i++) {
		ps[i].showinfo();
	}
}
void sortSalary(Employee* ps, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = n - 1; j > i; j--) {
			if (ps[j].getsalary() > ps[j - 1].getsalary()) {
				Employee p = ps[j];
				ps[j] = ps[j - 1];
				ps[j - 1] = p;
			}
		}
	}
}
void RaiseSalary(Employee* ps, int n) {
	long amount;
	do {
		cout << "nhap so tien luong tang len: ";
		cin >> amount;
	} while (amount <= 0);
	for (int i = 0; i < n; i++) {
		ps[i].raiseSalary(amount);
	}
}
int main()
{
	Employee* ps;
	int n;
	do {
		cout << "Nhap so Employee can them: ";
		cin >> n;
	} while (n <= 0);
	ps = new Employee[n];
	getEmployee(ps, n);

	cout << "Danh sach Employee:" << endl;
	cout << setw(15) << left << " CODE" << setw(20) << left << "FULL NAME" << setw(20) << left << "ADDRESS"
		<< setw(20) << left << "POSITION" << setw(20) << left << "PHONE NUMBER" << setw(20) << left << "SALARY" << endl;
	showEmployee(ps, n);

	cout << "Danh sach Employee sap xep theo luong giam dan: " << endl;
	cout << setw(15) << left << " CODE" << setw(20) << left << "FULL NAME" << setw(20) << left << "ADDRESS"
		<< setw(20) << left << "POSITION" << setw(20) << left << "PHONE NUMBER" << setw(20) << left << "SALARY" << endl;
	sortSalary(ps, n);
	showEmployee(ps, n);
	
	RaiseSalary(ps, n);
	cout << "Danh sach Employee sau khi tang luong: " << endl;
	cout << setw(15) << left << " CODE" << setw(20) << left << "FULL NAME" << setw(20) << left << "ADDRESS"
		<< setw(20) << left << "POSITION" << setw(20) << left << "PHONE NUMBER" << setw(20) << left << "SALARY" << endl;
	showEmployee(ps, n);
	return 0;
}