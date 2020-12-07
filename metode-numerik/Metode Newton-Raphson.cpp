#include <iostream>
#include <math.h>
using namespace std;

float error,eror,fx,f_aksenx,x,X;
float e=0.00001;
float akar;
int m;

void rumus(){
	do{
	cout<<"\n\n	iterasi ke-"<<m<<"!"<<"\n\n";
	fx=2*pow(x,4)+7*pow(x,2)-4;
	f_aksenx=8*pow(x,3)+14*x;
	X=x-(fx/f_aksenx);
	
	cout<<"\t	Nilai fx 			= "<< fx <<"\n";
	cout<<"\t	Nilai f'x 			= "<< f_aksenx <<"\n";
	cout<<"\t	Nilai X"<<m+1<<"			= "<<X <<"\n";
		
		error =(X-x);
		if (error<0) {
			error=error*(-1);
		}
			cout<<"\t	Error = "<<X<<"-"<<x<<"\n";
			cout<<"\t	Eror				= "<<error<<"\n";
			x=X;
		m+=1;
}
	while(error>e);
	cout<<"\n! ERROR < EPSILON!"<<"--> "<<error<<" < "<<e;
}

int main()
{
	cout<<"\n\n\t\t|===================================|\n";
	cout<<"\t\t|	METODE NEWTON-RAPHSON	    |";
	cout<<"\n\t\t|===================================|\n\n";
	cout<<"\tTentukan salah satu akar dari f(x) = 2 x^4 + 7 x^2 - 4"<<"\n";
	cout<<"\tDengan epsilon = 0.00001 "<<"\n\n";
	cout<<"\tMasukkan Tebakan Akar Pertama : ";
	cin >>x;
	rumus();
	
	
return 0;
}
