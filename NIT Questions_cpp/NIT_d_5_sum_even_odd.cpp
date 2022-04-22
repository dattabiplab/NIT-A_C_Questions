//C Program to print sum of all even & odd numbers up to n

#include <iostream>
using namespace std;

int main(){
	int i,n,even_sum=0,odd_sum=0;
	cout<<"Enter a Number: ";
	cin>>n;
	for(i=0;i<=n;i++){
		if(i%2==0){
			even_sum+=i;
		}
		else{
			odd_sum+=i;
		}
	}
	// for(i=0;i<=n;i++){
	// 	if(i%2!=0){
	// 	}
	// }
	cout<<"Sum of Even Numbers is "<<even_sum<<endl;
	cout<<"Sum of Odd Numbers is "<<odd_sum<<endl;
	return 0;
}