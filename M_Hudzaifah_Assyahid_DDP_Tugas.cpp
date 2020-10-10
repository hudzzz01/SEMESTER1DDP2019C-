/* Membuat Program untuk memproses array 1 dimensi dan terdiri dari 2 Prosedur dan 2 Fungsi yaitu 
	a. isiNilai (int a, int n )
	b. CetakNilai (int a, int n )
	c. isFound (int a, int n, int x)
	d. cariIndexArray (int a, int nilai, int n)
M Hudzaifah Assyahid
Tanggal 26 Oktober 2019
*/

#include <iostream>
using namespace std;

void isiNilai (int a[], int n);
void cetakNilai (int a[], int n);
bool isFound (int a[], int n, int x );
int cariIndexArray (int a[], int n, int x);


int main ()
{
	
	int x, n, nilai; 
	int cariAngka = 0, index = 0;
	
	bool isKetemu = true;
	
	cout << "Program Array 1 Dimensi dengan Prosedur dan Fungsi. \n \n";
	
	cout << "Masukan Jumlah Array : ";
	cin >> n;
	
	int a[n];
	isiNilai (a, n);
	
	
	cout << "Masukan Nilai yang ingin dicari : ";
	cin >> x;
	isKetemu = isFound (a, n, x);
	
	cout << "\n \n";
	if (isKetemu == true)
	{
		cout << "Nilai " << x << " ada di dalam array.\n " << endl;
	}
	else 
	{
		cout << "Nilai " << x << " tidak ada dalam array.\n " << endl;
		
	
	}
	
	cariAngka = cariIndexArray (a, n, x);
	cetakNilai (a, n);
	
	return 0;
}

void isiNilai (int a[], int n)
{
	
	for (int i = 0 ; i < n; i++)
	{
		cout << "Masukan Nilai ke " << i << " : ";
		cin >> a[i];
		
	}
	cout << "\n \n";
	
}
void cetakNilai (int a[], int n)
{
	for (int i = 0; i < n ; i ++)
	{
		cout << "Index [" << i <<  "]" << " = " << a[i] << endl;
	}
	cout << endl;
}

bool isFound (int a[], int n, int x)
{
	bool sa = false;
	
	for (int i = 0 ; i < n; i++)
	{
		if (x == a[i])
		{
			sa = true;
		}
	}
	return sa;
}

int cariIndexArray (int a[], int n, int x)
{
	
	int cariAngka, index;
	for (int i = 0; i < n; i++)
	{
		if (x == a[i])
		{
			cariAngka = x;
			index = i;
		}
	}
	
	if (x == cariAngka)
	{
		cout <<"\nNilai " << x << " ditemukan di index [" << index <<"]\n" << endl;
	}
	else
	{
		cout << endl;
		cout << "Nilai adalah -99\n" << endl;
	}
	return cariAngka;
}
