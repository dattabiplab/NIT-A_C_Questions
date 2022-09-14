//Write a C program to find all roots of a quadratic equation.

#include <iostream>
#include<cmath>
using namespace std;

int main(){
	float a,b,c,d,x1,x2,r1,r2;
	cout<<"Enter The Value of a, b, c(ax^2 + bx + c =0): ";
	cin>> a >> b >> c;
	d=(b*b)-(4*a*c);
	if(d>0){
		x1=((-b)-sqrt(d))/(2*a);
		x2=((-b)+sqrt(d))/(2*a);
		cout<<"The Roots of the Equation are Real & Distinct."<<endl;
		cout<<"The Roots of x are "<<x1<<" and "<<x2<<".";
	}
	else if(d==0){
		x1=(-b)/(2*a);
		cout<<"The Roots of the Equation are Real & Equal."<<endl;
		cout<<"The Roots of x are "<<x1<<" and "<<x1<<".";
	}
	else if(d<0){
		r1=(-b)/(2*a);
		r2=(sqrt(-d))/(2*a);
		cout<<"The Roots of the Equation are Imaginary."<<endl;
		cout<<"The Roots of x are "<<r1<<" - "<<r2<<"i and "<<r1<<" + "<<r2<<"i.";
	}
	else{
		cout<<"Invalid Input";
	}
	return 0;
}