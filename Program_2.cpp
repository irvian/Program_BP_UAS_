#include<iostream>
#include<conio.h>
using namespace std;
int main() {
	int panjang,lebar;
	float luas;
	
	cout<<"Input Panjang"<<endl;
	cin>>panjang;
	
	
	cout<<"Input Lebar"<<endl;
	cin>>lebar;
	
	luas = panjang*lebar;
	
	cout<<"\nLuas Persegi Panjang";
	cout<<"\nPanjang ="<<panjang;
	cout<<"\nlebar ="<<lebar;
	
	getch();
}
