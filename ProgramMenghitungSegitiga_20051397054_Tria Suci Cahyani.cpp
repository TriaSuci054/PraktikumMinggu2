#include<iostream>
#include <conio.h>

using namespace std;
int main ()
{
int a;
float tinggi,alas,siku_siku,tinggi_siku_siku,sisi_miring;
float Luas,Keliling,Panjang_Sisi_Miring;
char kembali;
	
do{
cout<<" Nama = Tria Suci Cahyani"<<endl;
cout<<" NIM = 20051397054"<<endl;;
cout<<" Kelas = 2020B"<<endl;
cout<<endl;
cout<<" SEGITIGA SIKU-SIKU "<<endl;
cout<<" 1. Luas "<<endl;
cout<<" 2. Keliling"<<endl;
cout<<" 3. Panjang Sisi Miring"<<endl;
cout<<" 4. Keluar "<<endl;
cout<<endl;
cout<<"Masukkan Pilihan Anda = ";cin>>a;
switch(a)
{
			case 1:
			cout<<" Masukkan Alas Segitiga ";cin>>alas;
			cout<<" Masukkan Tinggi Segitiga ";cin>>tinggi;
			cout<<" Masukkan Sisi Miring Segitiga ";cin>>sisi_miring;
			Luas = (alas*tinggi)/2;
			cout<<" Maka Luasnya ="<<Luas<<endl;
			break;
			
			case 2:
			cout<<" Masukkan Alas Segitiga ";cin>>alas;
			cout<<" Masukkan Tinggi Segitiga ";cin>>tinggi;
			cout<<" Masukkan Sisi Miring Segitiga ";cin>>sisi_miring;
			Keliling = alas+tinggi+sisi_miring;
			cout<<" Maka Kelilingnya ="<<Keliling<<endl;
			break;
			
			case 3:
			cout<<" Masukkan Siku Siku ";cin>>siku_siku;
			cout<<" Masukkan Tinggi Siku Siku ";cin>>tinggi_siku_siku;
			Panjang_Sisi_Miring = siku_siku+tinggi_siku_siku;
			cout<<" Maka Panjang Sisi Miring ="<<Panjang_Sisi_Miring<<endl;
			break;
		}
		cout<<endl;
		cout<<" Kembali Ke Menu (y/n)?";cin>>kembali;
	}while (kembali == 'y');
	
}
