#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main(){
	int pesan,aygeprek,aygoreng,udgoreng,cumgoreng,aybakar;
	double hrga=0;
	char jwb;
	do {
	cout<<"MENU MAKANAN"<<endl;
	cout<<"1. Ayam geprek\t: Rp.21.000"<<endl;
	cout<<"2. Ayam goreng\t: Rp.17.000"<<endl;
	cout<<"3. Udang goreng\t: Rp.19.000"<<endl;
	cout<<"4. Cumi goreng\t: Rp.20.000"<<endl;
	cout<<"5. Ayam bakar\t: Rp.25.000"<<endl;
	cout<<"Pesanan anda (nomor menu): ";cin>>pesan;
	if (pesan==1) {
		cout<<"Jumlah ayam geprek : ";cin>>aygeprek;
		hrga+=aygeprek*21000;}
	else if (pesan==2) {
		cout<<"Jumlah ayam goreng : ";cin>>aygoreng;
		hrga+=aygoreng*17000;}
	else if (pesan==3) {
		cout<<"Jumlah udang goreng : ";cin>>udgoreng;
		hrga+=udgoreng*19000;}
	else if (pesan==4) {
		cout<<"Jumlah cumi goreng : ";cin>>cumgoreng;
		hrga+=cumgoreng*20000;}
	else if (pesan==5) {
		cout<<"Jumlah ayam bakar : ";cin>>aybakar;
		hrga+=aybakar*25000;}
	cout<<"\n\nApakah ingin mesan lagi (Y/T) ";cin>>jwb;
	} while (jwb=='Y');
	
	double ongkir=0;
	int jarak;
	cout<<"Jasa Delivery Order? (Y/T): ";cin>>jwb;
	if (jwb=='Y'){
		cout<<"Jarak rumah (KM): ";cin>>jarak;
	if(jarak<=3){
		ongkir=15000;
		}
	else if(jarak>3){
		ongkir=25000;
		}
	}
	
	double diskon;
	system("cls");
	cout<<"-STRUK PEMBAYARAN-"<<endl;
	cout<<"-----------------------------"<<endl;
	cout<<"Jumlah Pembelian : Rp "<<hrga;
	cout<<"\nBiaya Ongkir : Rp "<<ongkir;
	if(hrga>150000){
		cout<<"\nPotongan ongkir Rp 8000"<<endl;
		ongkir-=8000;
		cout<<"Diskon 35%"<<endl;
		diskon=hrga*35/100;}
	else if(hrga>50000){
		cout<<"\nPotongan ongkir Rp 5000"<<endl;
		ongkir-=5000;
		cout<<"Diskon 15%"<<endl;
		diskon=hrga*15/100;}
	else if(hrga>25000){
		cout<<"\nPotongan ongkir Rp 3000"<<endl;
		ongkir-=3000;}
	double uang,kembali=0,total;
	total=hrga-diskon+ongkir;
	cout<<"-----------------------------"<<endl;
	cout<<"Total harga     = "<<total<<endl;
	cout<<"Uang dibayarkan  = ";cin>>uang;
	cout<<"-----------------------------"<<endl;
	kembali=uang-total;
	cout<<"Kembalian        = "<<kembali;
	return 0;
}
