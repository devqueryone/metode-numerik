#include <iostream>
#include <math.h>
using namespace std;

float x1,x2,x3,X1,X2,X3,error1,error2,error3;
float e=0.00001;
int m;


void rumus(){
	do{
	cout<<"\n\n	iterasi ke-"<<m<<"!"<<"\n\n";
	x1=( 3.23 + 0.1*(X2) -2*(X3)) / 0.3;
	x2=( -4.3 + 0.3*(X1) - 9*(X3)) / 2 ;
	x3=( 18.4 - 0.4*(X1)+ 0.1*(X2)) / 23;
	
	cout<<"\t	Nilai	x1 	   = "<< x1 <<"\n";
	cout<<"\t	Nilai	x2 	   = "<< x2 <<"\n";
	cout<<"\t	Nilai	x3 	   = "<< x3 <<"\n";
		
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
		
			cout<<"\n\t\t---------------------------------------\n";
			cout<<"\t	Galat Relatif	x1 = "<<error1<<"\n";
			cout<<"\t	Galat Relatif	x2 = "<<error2<<"\n";
			cout<<"\t	Galat Relatif	x3 = "<<error3<<"\n";
			
			X1=x1;
			X2=x2;
			X3=x3;
		m+=1;
}
	while((error1>e)|| (error2>e )|| (error3>e));
	cout<<"\n\n\t\t ITERASI SELESAI";
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
