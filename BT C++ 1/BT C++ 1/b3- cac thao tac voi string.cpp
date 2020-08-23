#include <string>
#include <iostream>
using namespace std;

void Lay_chieu_dai_chuoi(string s1) {
	cout << " Chieu dai chuoi s1: " << s1.length() << endl;
}
void Lay_1_ki_tu_bat_ki(string s1) {
	cout << " Lay ki tu tai vi tri thu 3 trong chuoi s1: " << s1[2] << endl;
	//or s1.at(2)
}
void Noi_2_chuoi(string s1, string s3) {
	cout << " Noi hai chuoi s1 va s3: " << s1 + " " + s3 << endl;
	// or string s = s1.append(s3);
}
void So_sanh_chuoi(string s1, string s2) { // so sánh theo từng kí tự
	if (s1 > s2) {
		cout << " s1 dung sau s2 trong tu dien"<< endl;
	}
	else if (s1 < s2) {
		cout << " s1 dung truoc s2 trong tu dien" << endl;
	}
	else {
		cout << " s1 va s2 giong nhau" << endl;
	}
}
void Tim_kiem_trong_chuoi(string s1,string s2,string s3) {
	cout << " Vi tri dau tien cua chuoi s2 trong s1 la: " << s1.find(s2) << endl;
	cout << " Vi tri dau tien cua chuoi s3 trong s1 la: " << s1.find(s3) << endl;
}
void Doi_chieu(string s1, string s2) {
	int a = s1.compare(s2);
	cout << " Ket qua la 0 neu s1 va s2 giong nhau: " << a << endl;
}
void Xoa_chuoi(string s1) {
	cout << " Do dai s1 khi chua xoa noi dung: " << s1.length() << endl;
	s1.clear();
	cout << " Do dai s1 sau khi xoa noi dung: " << s1.length() << endl;
}
void Chuyen_string_sang_char(string s1) {
	const char* arr = s1.c_str();
	int a = strlen(arr);
	cout << " Mang char: ";
	for (size_t i = 0; i < a; i++) {
		cout << arr[i];
	}
	cout << endl;
}
void Kiem_tra_xau_rong(string s1) {
	string s = ""; // đây là 1 xâu rỗng
	cout << " Neu la xau rong tra ve gia tri 1, con khong thi tra ve gia tri 0" << endl;
	cout << " Kiem tra xau s1 co rong khong: " << s1.empty() << endl;
	cout << " Ta co xau rong s, gio kiem tra: " << s.empty() << endl;
}
void Xoa_1_doan_ki_tu(string s1) {
	cout << " s1 sau khi xoa 10 ki tu tu vi tri thu 4: " << s1.erase(4, 10) << endl;
	//xoá 10 kí tự từ vị trí thứ 4
}
void Chen_chuoi(string s1, string s2) {
	cout << " Chen s2 vao vi tri thu 4 trong s1: " << s1.insert(4, s2) << endl;
}
void Tach_ra_chuoi_con(string s1) {
	cout << " Lay 10 ki tu tu vi tri thu 5 trong s1 la: " << s1.substr(5) << endl;
}
int main() {
	string s1 = "tran huy canh";
	string s2 = "canh";
	string s3 = "xin chao";
	
	cout << "chuoi s1: tran huy canh" << endl
		<< "chuoi s2: canh" << endl
		<< "chuoi s3: xin chao" << endl << endl;

	cout << "1.LAY CHIEU DAI CHUOI: " << endl;
	Lay_chieu_dai_chuoi(s1);
	cout << endl;

	cout << "2.LAY 1 KI TU BAT KI: " << endl;
	Lay_1_ki_tu_bat_ki(s1);
	cout << endl;

	cout << "3.NOI 2 CHUOI: " << endl;
	Noi_2_chuoi(s1, s3);
	cout << endl;

	cout << "4.SO SANH 2 CHUOI: " << endl;
	So_sanh_chuoi(s1, s2);
	cout << endl;

	cout << "5.TIM KIEM TRONG CHUOI: " << endl;
	Tim_kiem_trong_chuoi(s1, s2, s3);
	cout << endl;

	cout << "6.DOI CHIEU 2 CHUOI: " << endl;
	Doi_chieu(s1, s2);
	cout << endl;

	cout << "7.XOA CHUOI: " << endl;
	Xoa_chuoi(s1);
	cout << endl;

	cout << "8.CHUYEN CHUOI DANG STRING SANG CHAR: " << endl;
	Chuyen_string_sang_char(s1);
	cout << endl;

	cout << "9.KIEM TRA XAU RONG: " << endl;
	Kiem_tra_xau_rong(s1);
	cout << endl;

	cout << "10.XOA 1 DOAN KI TU TRONG CHUOI: " << endl;
	Xoa_1_doan_ki_tu(s1);
	cout << endl;

	cout << "11.CHEN KI TU VAO CHUOI: " << endl;
	Chen_chuoi(s1, s2);
	cout << endl;

	cout << "12.TACH KI TU TU CHUOI: " << endl;
	Tach_ra_chuoi_con(s1);
	cout << endl;

	return 0;
}