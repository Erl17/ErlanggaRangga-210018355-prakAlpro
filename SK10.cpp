#include <iostream>
#include <string.h>
using namespace std;

class node{
  public :
    string nama;
    int nim;
    node *mhs;
};

int main(){  
    cout<<"Data Peserta Paramatika yang Masuk Final\n\n";
    node *satu;
    satu =new node;
    satu->nama="Aditya";
    satu->nim=2100018341;
    satu->mhs=NULL;
    cout<<"Data Mahasiswa Satu: \n";
    cout<<"Nama : "<<satu->nama<<endl;
    cout<<"Nim  : "<<satu->nim<<endl;
    cout<<endl;
  
    node *dua;
    dua=new node;
    dua->nama="Rijalul";
    dua->nim=2100018336;
    dua->mhs=NULL;
    cout<<"Data Mahasiswa Dua: \n";
    cout<<"Nama : "<<dua->nama<<endl;
    cout<<"Nim  : "<<dua->nim<<endl;
    cout<<endl;
  
    node *tiga;
    tiga =new node;
    tiga->nama="Erlangga";
    tiga->nim=2100018355;
    tiga->mhs=NULL;
    cout<<"Data Mahasiswa Tiga: \n";
    cout<<"Nama : "<<tiga->nama<<endl;
    cout<<"Nim  : "<<tiga->nim<<endl;
    cout<<endl;
  
    node *empat;
    empat =new node;
    empat->nama="Riki";
    empat->nim=2100018349;
    empat->mhs=NULL;
    cout<<"Data Mahasiswa Empat: \n";
    cout<<"Nama : "<<empat->nama<<endl;
    cout<<"Nim  : "<<empat->nim<<endl;
    cout<<endl;
  
    node *lima;
    lima =new node;
    lima->nama="Irul";
    lima->nim=2100018346;
    lima->mhs=NULL;
    cout<<"Data Mahasiswa Lima: \n";
    cout<<"Nama : "<<lima->nama<<endl;
    cout<<"Nim  : "<<lima->nim<<endl;
  
  return 0;
}
