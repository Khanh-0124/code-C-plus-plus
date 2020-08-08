#pragma once
#include <string>
#include <iostream>
using namespace std;
class Employee
{
private:
	static int id;
	int code;
	string fullname;
	string address;
	string position;
	string phonenumber;
	long salary;
public:
	void setid(int);
	void setfullname(string);
	void setaddress(string);
	void setposition(string);
	void setphonenumber(string);
	void setsalary(long);

	int getid();
	string getfullname();
	string getaddress();
	string getposition();
	string getphonenumber();
	long getsalary();

	Employee();
	Employee(int, string, string, string, string, long);
	void showinfo();
	long raiseSalary(long);
};

