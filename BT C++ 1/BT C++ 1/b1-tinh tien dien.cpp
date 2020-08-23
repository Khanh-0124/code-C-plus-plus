
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <windows.h>
using namespace std;

struct Infor {
	string fullname;
	int powernumber;
	unsigned long long money;
};
struct Infor nhapds() {
	struct Infor ps;
	cout << "Full name: ";
	cin.ignore();
	getline(cin, ps.fullname);
	cout << "Power number: ";
	cin >> ps.powernumber;
	
	size_t bac1 = 550, bac2 = 900, bac3 = 1210, bac4 = 1340, bac5 = 1500, bac6 = 2000;
	if (ps.powernumber <= 100) {
		ps.money = ps.powernumber*bac1;
	}
	else if (ps.powernumber > 100 && ps.powernumber <= 150) {
		ps.money = 100 * bac1 + (ps.powernumber - 100)*bac2;
	}
	else if (ps.powernumber > 150 && ps.powernumber <= 200) {
		ps.money = 100 * bac1 + 50 * bac2 + (ps.powernumber - 150)*bac3;
	}
	else if (ps.powernumber > 200 & ps.powernumber <= 250) {
		ps.money = 100 * bac1 + 50 * bac2 + 50 * bac3 + (ps.powernumber - 200)*bac4;
	}
	else if (ps.powernumber > 250 && ps.powernumber <= 300) {
		ps.money = 100 * bac1 + 50 * bac2 + 50 * bac3 + 50 * bac4 + (ps.powernumber - 250)*bac5;
	}
	else {
		ps.money = 100 * bac1 + 50 * bac2 + 50 * bac3 + 50 * bac4 + 50 + (ps.powernumber - 300)*bac6;
	}
	return ps;
}
void Price_List() {
	cout << setw(8) << left << " TT" << setw(20) << left << "So dien su dung" 
		<< setw(20) << left << "Gia ban(dong/so)" << endl;
	cout << setw(8) << left << " Bac 1" << setw(20) << left << "0-100" << setw(20) << left << "550" << endl
		<< setw(8) << left << " Bac 2" << setw(20) << left << "101-150" << setw(20) << left << "900" << endl
		<< setw(8) << left << " Bac 3" << setw(20) << left << "151-200" << setw(20) << left << "1210" << endl
		<< setw(8) << left << " Bac 4" << setw(20) << left << "201-250" << setw(20) << left << "1340" << endl
		<< setw(8) << left << " Bac 5" << setw(20) << left << "251-300" << setw(20) << left << "1500" << endl
		<< setw(8) << left << " Bac 6" << setw(20) << left << ">301" << setw(20) << left << "2000" << endl;
	cout << "----------------------------------------------" << endl;
}
void Title_List() {
	cout << setw(7) << left << "STT" << setw(20) << left << "TEN CHU HO"
		<< setw(20) << left << "SO DIEN THANG NAY"
		<< setw(20) << left << "TIEN DIEN THANG NAY" << endl;
}
void Show_Infor(Infor *dskh, size_t n) {
	cout << "----------------------------------------------" << endl;
	cout << "Bang thanh toan tien dien cua cac chu ho:" << endl << endl;
	Title_List();
	for (size_t i = 0; i < n; i++) {
		struct Infor ps = dskh[i];
		cout << setw(7) << left << i + 1 << setw(20) << left << ps.fullname
			<< setw(20) << left << ps.powernumber
			<< setw(20) << left << ps.money << endl;
	}
	cout << "----------------------------------------------" << endl;
}
void Classify(Infor *dskh, size_t slkh) {
	int a = 0;
	cout << "Cac khach hang su dung dien <= 100 so: ";
	for (size_t i = 0; i < slkh; i++)
	{
		if (dskh[i].powernumber <= 100) {
			cout << dskh[i].fullname << ", ";
			a++;
		}
	}
	if (a == 0) cout << "khong co ai";
	cout << endl;

	a = 0;
	cout << "Cac khach hang su dung dien tu 101-300 so: ";
	for (size_t i = 0; i < slkh; i++)
	{
		if (dskh[i].powernumber <= 300 && dskh[i].powernumber >100) {
			cout << dskh[i].fullname << ", ";
			a++;
		}
	}
	if (a == 0) cout << "khong co ai";
	cout << endl;
	
	a = 0;
	cout << "Cac khach hang su dung dien > 300 so: ";
	for (size_t i = 0; i < slkh; i++)
	{
		if (dskh[i].powernumber > 300) {
			cout << dskh[i].fullname << ", ";
			a++;
		}
	}
	if (a == 0) cout << "khong co ai";
	cout << endl;
	cout << "----------------------------------------------" << endl;
}
void Write_file(Infor *dskh, size_t slkh) {
	fstream FILE("DANH_SACH_TIEN_DIEN.txt",ios::out);
	cout << "Bat dau ghi du lieu vao file DANH_SACH_TIEN_DIEN.txt" << endl;   // làm màu chút
	cout << "Vui long cho chut nhen...... ^_^" << endl;

	FILE << "Bang thanh toan tien dien cua cac chu ho:" << endl << endl;
	FILE << setw(7) << left << "STT" << setw(20) << left << "TEN CHU HO"
		<< setw(20) << left << "SO DIEN THANG NAY"
		<< setw(20) << left << "TIEN DIEN THANG NAY" << endl;
	for (size_t i = 0; i < slkh; i++)
	{
		struct Infor ps = dskh[i];
		FILE << setw(7) << left << i + 1 << setw(20) << left << ps.fullname
			<< setw(20) << left << ps.powernumber
			<< setw(20) << left << ps.money << endl;
	}
	FILE << "----------------------------------------------" << endl;

	int a = 0;
	FILE << "Cac khach hang su dung dien <= 100 so: ";
	for (size_t i = 0; i < slkh; i++)
	{
		if (dskh[i].powernumber <= 100) {
			FILE << dskh[i].fullname << ", ";
			a++;
		}
	}
	if (a == 0) FILE << "khong co ai";
	FILE << endl;

	a = 0;
	FILE << "Cac khach hang su dung dien tu 101-300 so: ";
	for (size_t i = 0; i < slkh; i++)
	{
		if (dskh[i].powernumber <= 300 && dskh[i].powernumber >100) {
			FILE << dskh[i].fullname << ", ";
			a++;
		}
	}
	if (a == 0) FILE << "khong co ai";
	FILE << endl;

	a = 0;
	FILE << "Cac khach hang su dung dien > 300 so: ";
	for (size_t i = 0; i < slkh; i++)
	{
		if (dskh[i].powernumber > 300) {
			FILE << dskh[i].fullname << ", ";
			a++;
		}
	}
	if (a == 0) FILE << "khong co ai";
	FILE << endl;
	FILE << "----------------------------------------------" << endl;

	FILE.close();
	Sleep(5000);
	cout << "Da hoan tat ghi du lieu." << endl;
	cout << "----------------------------------------------" << endl;
}
int main()
{
	cout << "Ta co bang gia tien dien nhu sau:" << endl;
	Price_List();

	Infor *dskh;
	size_t slkh;
	do {
		cout << "Nhap so luong khach hang: ";
		cin >> slkh;
	} while (slkh <= 0);
	dskh = new Infor[slkh];

	cout << "Nhap danh sach khach hang: " << endl;
	for (size_t i = 0; i < slkh; i++) {
		cout << i + 1 << endl;
		dskh[i] = nhapds();
		cout << endl;
	}
	Show_Infor(dskh, slkh);

	Classify(dskh, slkh);

	Write_file(dskh, slkh);

	cout << endl;
	return 0;
}