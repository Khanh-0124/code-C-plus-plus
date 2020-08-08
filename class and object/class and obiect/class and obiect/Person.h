#pragma once
#include <string>
using namespace std;
class Person {
private:
	static int id;
	int code;
	string lastname;
	string midname;
	string firstname;
	int age;
	string address;
	string gender;
	string phonenumber;
public:
	Person();
	Person(int, string, string, string, int, string, string, string);

	void setid(int);
	void setlastname(string);
	void setmidname(string);
	void setfirstname(string);
	void setage(int);
	void setaddress(string);
	void setgender(string);
	void setphonenumber(string);

	int getid();
	string getlastname();
	string getmidname();
	string getfirstname();
	int getage();
	string getaddress();
	string getgender();
	string getphonenumber();

	void showinf();
	string fullname();
};


