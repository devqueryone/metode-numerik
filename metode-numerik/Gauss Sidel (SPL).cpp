#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

float x1,x2,x3,X1,X2,X3,error1,error2,error3;
float e=0.00001;
int m;

void garis () {
	cout<<"\n\t";
	for (int i=0; i<=100; i++) {
		cout<<"-";
	}
}
void garis1 () {
	cout<<"\n\t\t\t\t\t\t\t\t";
	for (int i=0; i<=44; i++) {
		cout<<"-";
	}
}
void rumus(){
	garis ();
	cout<<setiosflags(ios::left);
	cout<<"\n\t\t\t\t\t\t\t\t|	   G a l a t  R e l a t i f \t    |";
	garis1 ();
	cout<<setw (15)<<"\n\tIterasi	   x1_k+1	  x2_k+1	x3_k+1		X1_K		X2_K		X3_K\n";
	garis ();
	do{
	x1=( 3.23 + 0.1*(X2) -2*(X3)) / 0.3;
	x2=( -4.3 + 0.3*(x1) - 9*(X3)) / 2 ;
	x3=( 18.4 - 0.4*(x1)+ 0.1*(x2)) / 23;
	
		error1 =(x1 - X1)/x1;
		if (error1<0) {
			error1=error1*(-1);
		}
		error2 =(x2 - X2)/x2;
		if (error2<0) {
			error2=error2*(-1);
	   }
		error3 =(x3 - X3)/x3;
		if (error3<0) {
			error3=error3*(-1);
		}	
		cout<<setiosflags(ios::left);
			cout<<"\n\t"<<setw(10)<<m<<setw(15)<<x1<<setw(15)<<x2<<setw(15)<<x3<<setw(15)<<error1<<setw(15)<<error2<<setw(15)<<error3;
			garis ();
			X1=x1;
			X2=x2;
			X3=x3;
		m+=1;
}
	while((error1>e)|| (error2>e )|| (error3>e));
	cout<<"\n\n\t\t\t\t\t\t   ITERASI SELESAI";
	cout<<"\n\n\t\t\t\t\t\t THANKS YOU VERY MUCH";
}

int main()
{
	cout<<"\n\n\t\t|===========================|\n";
	cout<<"\t\t|	METODE JACOBI	    |";
	cout<<"\n\t\t|===========================|\n\n";
	cout<<"\tSistem Persamaan Linear"<<"\n";
	cout<<"\t0,3(x1) - 0.1(x2) + 2(x3) = 3,23"<<"\n";
	cout<<"\t-0,3(x1) + 2(x2) + 9(x3) = -4,3"<<"\n";
	cout<<"\t0,4(x1) - 0,1(x2) + 23(x3) = 18,4"<<"\n";
	cout<<"\tDengan epsilon = 0.00001 "<<"\n\n";
	cout<<"\tMasukkan Nilai Awal : \n";
	cout<<"\tMasukkan Nilai x1 awal : ";
	cin >>X1;
	cout<<"\n\tMasukkan Nilai x2 awal : ";
	cin >>X2;
	cout<<"\n\tMasukkan Nilai x3 awal : ";
	cin >>X3;
	
	rumus();
	
	
return 0;
}
