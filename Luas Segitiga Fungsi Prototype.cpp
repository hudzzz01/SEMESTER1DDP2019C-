/*Membuat Fungsi Luas Segitiga
oleh M Hudzaifah Assyahid 16 Oktober 2019
*/
#include <iostream>
using namespace std;


int hitungLuasSegitiga(int a, int t);

int main()
{
	int a, t;
	cout << "Hasilnya adalah : "<< hitungLuasSegitiga(a,t);
	cin.get();
	return 0;
}

int hitungLuasSegitiga (int a,int t)
{
	int luas;
	cout <<"Masukan Alas : ";
	cin >> a;
	cout <<"Masukan Tinggi : ";
	cin >>t;
	luas = a * t / 2;
	return luas;
}

