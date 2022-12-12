#include <stdio.h>

// ____________________MID TERM____________________

// void main(){
// 	int x = 10,y=20,z;
// 	if(y>0) if(y<0) x=30;
// 	else x=50;
// 	printf("Value of x=%d",x);
// }

// int main(){
// 	int x,y=3,z,a;
// 	if(x=y%2) z=2;
// 	a=2;
// 	printf("Value of z=%d x=%d",z,x);
// }

// int main(){
// 	int a = 4.9;
// 	switch(a)
// 	{
// 		case 5:
// 		printf("Hello");
// 		break;
// 		default:
// 		printf("All");
// 		case 7:
// 		printf("World");
// 		case 1:
// 		printf("Print");
// 	}
// } 

// void main(){
// 	float f =1.1;
// 	double d = 1.1;
// 	if(f==d){
// 		printf("Hello-Correct");
// 	}
// 	else printf("World-Wrong");
// 	return 0;
// }

// void main(){
// 	int i;
// 	printf("%d",scanf("%d",&i));
// }

// int main(){
// 	printf("main()");demo();
// }
// void demo(){
// 	printf("Hello");
// }

// int i=4;
// void f(){
// 	i++;
// }
// int main(){
// 	int i =5;
// 	i++;
// 	f();
// 	i+=2;
// 	f();
// 	i+=3;
// 	f();
// 	printf("%d",i);
// }

// void main(){
// 	int a =2;
// 	int k=3;
// 	switch(a){
// 		int k=5;
// 		case 1:
// 		printf("\n Output1=%d",++k);
// 		case 2:
// 		printf("\n Output1=%d",++k);
// 		default:
// 		printf("\n Output1=%d",(k+++1)*2);
// 	}
// }


// ____________________END TERM____________________

// void f(int n){
// 	if(n<=1) printf("%d",n);
// 	else{
// 		f(n/2);
// 		printf("%d",n%2);
// 	}
// }
// int main(){
// 	f(173);
// }

// int f1(void);
// int f2(void);
// int f3(void);
// int x = 10;
// int main(){
// 	int x = 1;
// 	x+= f1() + f2() + f3() + f2();
// 	printf("%d",x);
// 	return 0;
// }
// int f1() {int x = 25; x++;return x;}
// int f2() {static int x = 50; x++; return x;}
// int f3() {x*=10; return x;}

// int abc(int a){
// 	return (++a,a++);
// }
// int main(){
// 	printf(" Hello World"+abc(3.5));
// 	return 0;
// }