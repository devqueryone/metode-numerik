#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

	float a,b,c,f,f_a,f_b,f_c,interval,lebar;
	float e =2.71828182845905;

void akar() {
	f_a=2*pow(e,a)+2*pow(a,3)-4;
	f_b=2*pow(e,b) +2*pow(b,3)-4;
	c=(a+b)/2;
	f_c=2*pow(e,c) +2*pow(c,3)-4;
	interval=f_a*f_c;
	lebar=a-c;
	lebar=lebar*-1;
}

int main () {
	int i,iterasi;
	
	cout <<"Masukkan Banyak Iterasi... ";
	cin >>iterasi;
	cout <<"Masukkan Nilai a : ";
	cin >>a;
	cout <<"Masukkan Nilai b : ";
	cin >>b;
			akar();
	cout <<"iterasi ke 0\n";
	cout <<"\t\tf(a) \t= "<<f_a<<"\n";
	cout <<"\t\tf(b) \t= "<<f_b<<"\n";
	cout <<"\t\tc \t= "<<c<<"\n";
	cout <<"\t\tf(c) \t= "<<f_c<<"\n";
	cout <<"\t\tinterval = "<<setprecision(5)<<interval<<"\n";
	cout <<"\t\tLebar \t= "<<lebar;
	
	for (i=1;i<=iterasi;i++) {
		cout <<setiosflags(ios::fixed);
		cout<<"\n\niterasi ke "<<i<<"\n\n";
		if (interval>0) {
			a=c;
		}
		else if (interval<0) {
			b=c;
		}
			akar();
			
	cout <<"\t\ta \t= "<<a<<"\n";
	cout <<"\t\tb \t= "<<b<<"\n";
	cout <<"\t\tf(a) \t= "<<setprecision(6)<<f_a<<"\n";
	cout <<"\t\tf(b) \t= "<<setprecision(6)<<f_b<<"\n";
	cout <<"\t\tc \t= "<<c<<"\n";
	cout <<"\t\tf(c) \t= "<<setprecision<<f_c<<"\n";
	cout <<"\t\tinterval = "<<setprecision(10)<<interval<<endl;
	cout <<"\t\tLebar \t= "<<setprecision(7)<<lebar<<std::endl;
	
	}
	       
	return 0;
}
