#include <iostream>
#include <conio.h>

using namespace std;
main ()
{
	int angka;
	cout<<"Menu Makanan"<<endl;
	cout<<"1.Nasi Telur"<<endl;
	cout<<"2.Nasi Goreng"<<endl;
	cout<<"Masukkan Pilhan Anda: ";
	cin>>angka;
	
	if(angka==1)
	{cout<<"Anda memesan nasi telur";}
	else
	if(angka==2)
	{cout<<"And memesan nasi goreng";}
	else
	{cout<<"Pilihan yang Anda masukkan salah";}
	
	getch();
}
