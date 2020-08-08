#include "Person.h"
#include <string>
#include <iostream>
using namespace std;


Person::Person() {
	this->code = 0;
	this->lastname = "";
	this->midname = "";
	this->firstname = "";
	this->age = 0;
	this->address = "";
	this->gender = "";
	this->phonenumber = "";
}
int Person::id = 100;
Person::Person(int id, string lastname, string midname, string firstname,
	           int age, string address, string gender, string phonenumber) {
	setid(id);
	setlastname(lastname);
	setmidname(midname);
	setfirstname(firstname);
	setage(age);
	setaddress(address);
	setgender(gender);
	setphonenumber(phonenumber);
}
void Person::setid(int id) {
	this->code = (id >= 100) ? id : Person::id++;
}
void Person::setlastname(string lastname) {
	this->lastname = lastname;
}
void Person::setmidname(string midname) {
	this->midname = midname;
}
void Person::setfirstname(string firstname) {
	this->firstname = firstname;
}
void Person::setage(int age) {
	this->age = age;
}
void Person::setaddress(string address) {
	this->address = address;
}
void Person::setgender(string gender) {
	this->gender = gender;
}
void Person::setphonenumber(string phonenumber) {
	this->phonenumber = phonenumber;
}
int Person::getid() {
	return this->code;
}
string Person::getlastname() {
	return this->lastname;
}
string Person::getmidname() {
	return this->midname;
}
string Person::getfirstname() {
	return this->firstname;
}
int Person::getage() {
	return this->age;
}
string Person::getaddress() {
	return this->address;
}
string Person::getgender() {
	return this->gender;
}
string Person::getphonenumber() {
	return this->phonenumber;
}
void Person::showinf() {
	cout << "-----------INFO-----------" << endl;
	cout << "code: " << getid() << endl
		<< "last name: " << getlastname() << endl
		<< "mid name: " << getmidname() << endl
		<< "first name: " << getfirstname() << endl
		<< "age: " << getage() << endl
		<< "adsress: " << getaddress() << endl
		<< "gender: " << getgender() << endl
		<< "phone number: " << getphonenumber() << endl;
	cout << "--------------------------" << endl;
}
string Person::fullname() {
	return getlastname() + " " + getmidname() + " " + getfirstname();
}