#include <iostream>
#include <conio.h>

using namespace std;
int main()

{

char x;

int liter, total, bayar, kembali, bensin ,pertamax, solar,

seratusribu, limapuluhribu, duapuluhribu, sepuluhribu, limaribu,

seribu, duaribu, limaratus, duaratus, seratus,sisa1,sisa2,sisa3,

sisa4,sisa5,sisa6,sisa7,sisa8,sisa9,sisa10;

cout<<"============TRANSAKSI SPBU============";cout<<endl<<endl;

cout<<"Silahkan Pilih Jenis BBM";cout<<endl;

cout<<"1. Pertalite";cout<<endl;

cout<<"2. Pertamax";cout<<endl;

cout<<"Masukkan Pilihan Anda (1/2) = ";cin>>x;cout<<endl<<endl;

if (x=='1')

{

cout<<"Harga Bensin Perliter : 7000";cout<<endl;

cout<<"Jumlah Liter          : ";cin>>liter;

cout<<"Masukkan Uang Bayar   : ";cin>>bayar;

bensin=7000;

total=bensin*liter;

kembali=bayar-total;

seratusribu = kembali / 100000;

sisa1 = kembali % 100000;

limapuluhribu = sisa1 / 50000;

sisa2 = sisa1 % 50000;

duapuluhribu = sisa2 / 20000;

sisa3 = sisa2 % 20000;

sepuluhribu = sisa3 / 10000;

sisa4 = sisa3 % 10000;

limaribu = sisa4 / 5000;

sisa5 = sisa4 % 5000;

duaribu = sisa5 / 2000;

sisa6 = sisa5 % 2000;

seribu = sisa6 / 1000;

sisa7 = sisa6 % 1000;

limaratus = sisa7 / 500;

sisa8 = sisa7 % 500;

duaratus = sisa8 / 200;

sisa9 = sisa8 % 200;

seratus = sisa9 / 100;

sisa10 = sisa9 % 100;

cout<<endl<<endl;

cout<<"Total Bayar           : "<<total;cout<<endl;

cout<<"Uang Kembali          : "<<kembali<<endl<<endl;

}

else if (x=='2')

{

cout<<"Harga Pertamax Perliter : 9000";cout<<endl;

cout<<"Jumlah Liter            : ";cin>>liter;

cout<<"Masukkan Uang Bayar     : ";cin>>bayar;

pertamax=9000;

total=pertamax*liter;

kembali=bayar-total;

seratusribu = kembali / 100000;

sisa1 = kembali % 100000;

limapuluhribu = sisa1 / 50000;

sisa2 = sisa1 % 50000;

duapuluhribu = sisa2 / 20000;

sisa3 = sisa2 % 20000;

sepuluhribu = sisa3 / 10000;

sisa4 = sisa3 % 10000;

limaribu = sisa4 / 5000;

sisa5 = sisa4 % 5000;

duaribu = sisa5 / 2000;

sisa6 = sisa5 % 2000;

seribu = sisa6 / 1000;

sisa7 = sisa6 % 1000;

limaratus = sisa7 / 500;

sisa8 = sisa7 % 500;

duaratus = sisa8 / 200;

sisa9 = sisa8 % 200;

seratus = sisa9 / 100;

sisa10 = sisa9 % 100;

cout<<endl<<endl;

cout<<"Total Bayar             : "<<total;cout<<endl;

cout<<"Uang Kembali            : "<<kembali<<endl<<endl;



}

else

cout<<"Maaf, Pilihan Salah. Silahkan Masukkan Pilihan Anda";

getch();

}
