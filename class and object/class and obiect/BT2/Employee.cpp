#include "Employee.h"
#include <string>
#include <iomanip>
#include <iostream>
using namespace std;

Employee::Employee() {
	this->code = 0;
	this->fullname = "";
	this->address = "";
	this->position = "";
	this->phonenumber = "";
	this->salary = 0;
}
int Employee::id = 1000;
void Employee::setid(int id) {
	this->code = (id >= 1000) ? id : Employee::id++;
}
void Employee::setfullname(string fullname) {
	this->fullname = fullname;
}
void Employee::setaddress(string address) {
	this->address = address;
}
void Employee::setposition(string position) {
	this->position = position;
}
void Employee::setphonenumber(string phonenumber) {
	this->phonenumber = phonenumber;
}
void Employee::setsalary(long salary) {
	this->salary = salary;
}
int Employee::getid() {
	return this->code;
}
string Employee::getfullname() {
	return this->fullname;
}
string Employee::getaddress() {
	return this->address;
}
string Employee::getposition() {
	return this->position;
}
string Employee::getphonenumber() {
	return this->phonenumber;
}
long Employee::getsalary() {
	return this->salary;
}
Employee::Employee(int id, string fullname, string address,
	         string position, string phonenumber, long salary) {
	setid(id);
	setfullname(fullname);
	setaddress(address);
	setposition(position);
	setphonenumber(phonenumber);
	setsalary(salary);
}
void Employee::showinfo() {
	cout << " " << setw(14) << left << getid()
		<< setw(20) << left << getfullname()
		<< setw(20) << left << getaddress()
		<< setw(20) << left << getposition()
		<< setw(20) << left << getphonenumber()
		<< setw(20) << left << getsalary() << endl;
}
long Employee::raiseSalary(long amount) {
	this->salary += amount;
	return this->salary;
}