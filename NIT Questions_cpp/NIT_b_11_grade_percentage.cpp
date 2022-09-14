//Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer.
// Calculate percentage and grade according to following:
// Percentage >= 90% : Grade A
// Percentage >= 80% : Grade B
// Percentage >= 70% : Grade C
// Percentage >= 60% : Grade D
// Percentage >= 40% : Grade E
// Percentage < 40% : Grade F

#include <iostream>
using namespace std;

int main(){
	float p,c,m,b,cm,t,per;
	cout<<"Enter Marks of Mathematics out of 100: ";
	cin>>m;
	cout<<"Enter Marks of Physics out of 100: ";
	cin>>p;
	cout<<"Enter Marks of Chemistry out of 100: ";
	cin>>c;
	cout<<"Enter Marks of Biology out of 100: ";
	cin>>b;
	cout<<"Enter Marks of Computer out of 100: ";
	cin>>cm;
	t=p+c+m+b+cm;
	per=t/5;             //per=(t/500)*100
	if(per>=90){
		cout<<"Your Percentage is "<<per<<"% and Your Grade is A" ;
	}
	else if(per>=80){
		cout<<"Your Percentage is "<<per<<"% and Your Grade is B" ;
	}
	else if(per>=70){
		cout<<"Your Percentage is "<<per<<"% and Your Grade is C" ;
	}
	else if(per>=60){
		cout<<"Your Percentage is "<<per<<"% and Your Grade is D" ;
	}
	else if(per>=40){
		cout<<"Your Percentage is "<<per<<"% and Your Grade is E" ;
	}
	else if(per<40){
		cout<<"Your Percentage is "<<per<<"% and Your Grade is F" ;
	}
	else {
		cout<<"Invalid Input" ;
	}
	return 0;
}