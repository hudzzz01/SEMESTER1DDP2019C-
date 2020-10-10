//class dan objec manusia
//syahid 07 januari 2020

#include <iostream>
using namespace std;

class Manusia
{
    protected :
    
    string nama;
    int umur;
    
    public :
    
    //getter setter
    //procedure setter
    void setNama(string nama);
    void setUmur(int umur);
    
    //fungsi getter
    string getNama();
    int getUmur();
    
    void display();
    
   
};
void Manusia::setNama (string nama)
{
    this -> nama = nama;
}

void Manusia::setUmur (int umur)
{
    this -> umur = umur;
}

string Manusia::getNama()
{
    return nama;
}

int Manusia::getUmur()
{
    return umur;
}

void Manusia :: display()
{
    cout << endl;
    cout << "namanya adalah " << getNama() << endl;
    cout << "umurnya adalah " << getUmur() << endl;
}




class LakiLaki :public Manusia
{
    private :
    
    string janggut;
    string jakun;
    string batang;
    
    public :
    
    
    void setJanggut(string janggut);
    string getJanggut();
    void setJakun(string jakun);
    string getJakun();
    void setBatang(string batang);
    string getBatang();
    void display();
    
    //konstruktor
    LakiLaki();
    LakiLaki (string nama, int umur , string janggut, string jakun, string batang);
    
    
};

void LakiLaki::setJanggut(string janggut)
{
    this -> janggut = janggut;
}
string LakiLaki::getJanggut()
{
    return janggut;
}
void LakiLaki::setJakun(string jakun)
{
    this->jakun = jakun;
}
string LakiLaki::getJakun()
{
    return jakun;
}
void LakiLaki::setBatang(string batang)
{
    this->batang = batang;
}
string LakiLaki::getBatang()
{
    return batang;
}
void LakiLaki::display()
{
    Manusia::display();
    cout << "\n\nJenggot : \n " << getJanggut() << "\njakun :\n "<< getJakun() << "\nAda batang ? :\n "<< getBatang()<< "\n";
}

//konstruktor
LakiLaki::LakiLaki()
{
    
}
LakiLaki::LakiLaki (string nama, int umur , string janggut, string jakun, string batang)
{
    setNama(nama); setUmur(umur); setJanggut(janggut); setJakun(jakun); setBatang(batang);
}


void inputLakiLaki(LakiLaki man[], int n);
void printLakiLaki (LakiLaki man[], int n);
void cariNamaLakiLaki (LakiLaki man [], int n, string x);

int main()
{
    LakiLaki pinter ("galang",20,"panjang","gaktau","cari tau sendiri");
    
    pinter.display();
    
    cout << "\n\n\n";
    
    int n = 3;
    LakiLaki man[n];
    inputLakiLaki (man,n);
    printLakiLaki (man,n);
    
    string x;
    cout << "\n masukan nama laki-laki yang ingin di cari ";
    cin >> x;
    
    cariNamaLakiLaki (man,n,x);
    
    
    
    
    return 0;
}

void inputLakiLaki(LakiLaki man[], int n)
{
    for(int i = 0; i<n; i++)
    {
        string o,p,q,r,u;
        int s,v;
        
        cout << " \n\n\n laki-laki ke " << i << " \n\n";
        
        
        cout << " masukan nama nya : ";
        cin >> o;
        man[i].setNama(o);
        u = man[i].getNama();
        if(u == o)
        {
            cout << "   data di simpan";
        }
        else
        {
            cout << "   data gagal di simpan";
        }
        
        cout << "\n\n masukan usianya : ";
        cin >> s;
        man[i].setUmur(s);
        v = man[i].getUmur();
        if(v == s)
        {
            cout << "   data di simpan";
        }
        else
        {
            cout << "   data gagal di simpan";
        }
        
        
        cout << "\n\n masukan bentuk janggut nya  : ";
        cin >> p;
        man[i].setJanggut(p);
        u = man[i].getJanggut();
        if(u == p)
        {
            cout << "   data di simpan";
        }
        else
        {
            cout << "   data gagal di simpan";
        }
        
        
        
        cout << "\n\n masukan bentuk jakun nya : ";
        cin >> q;
        man[i].setJakun(q);
        u = man[i].getJakun();
        if(u == q)
        {
            cout << "   data di simpan";
        }
        else
        {
            cout << "   data gagal di simpan";
        }
        
        cout << "\n\n memiliki batang atau tidak : ";
        cin >> r;
        man[i].setBatang(r);
        u = man[i].getBatang();
        if(u == r)
        {
            cout << "   data di simpan";
        }
        else
        {
            cout << "   data gagal di simpan";
        }
        
        
    }
    
}

void printLakiLaki (LakiLaki man[], int n)
{
    for(int i =0; i<n; i++)
    {
        cout << "\n\nhasil data laki-laki ke " << i<< " berikut : \n  ";
        man[i].display();
        cout << "\n";
    }
    
}

void cariNamaLakiLaki (LakiLaki man [], int n, string x)
{
    bool dapet = false;
    int l = 0;
    
    for(int i = 0; i<n; i++)
    {
        if (x == man[i].getNama())
        {
            dapet = true;
            l = i;
            
        }
    }
    
    if (dapet == true )
    {
        cout << x <<" \n\n ketemu di daftar laki-laki ke "<<l<<" ";
    }
    else
    {
        cout << " \n\n tidak ketemu";
    }
    
}

void mengurutkanLakiLakiBubble (LakiLaki man[],int n)
{
    
}

void mengurutkanLakiLakiShort (LakiLaki man[],int n)
{
    
}




