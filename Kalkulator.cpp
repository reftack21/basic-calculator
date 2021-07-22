#include <iostream>
using namespace std;

int main () {
	
	float a, b, hasil;
	char operasi;
	
	cout << "KALKULATOR" << endl;
	cout << "Masukan Nilai Pertama: " << endl;
	cin >> a;
	cout << "Pilih Operasi Penghitungan: +, -, *, / " << endl;
	cin >> operasi;
	cout << "Masukan Nilai Kedua: " << endl;
	cin >> b;
	
	if ( operasi == '+') {
		hasil = a + b;
		cout << a << "+" << b << " = " << hasil << endl;
	} else if ( operasi == '-') {
		hasil = a - b;
		cout << a << "-" << b << "=" << hasil << endl;
	} else if ( operasi == '*') {
		hasil = a * b;
		cout << a << "*" << b << "=" << hasil << endl;
    } else if ( operasi == '/') {
		hasil = a / b;
		cout << a << "/" << b << "=" << hasil << endl;
    } else {
    	cout << "Operasi Tidak Valid" << endl;
	}
	
	

	
	cin.get();
	return 0;
}
