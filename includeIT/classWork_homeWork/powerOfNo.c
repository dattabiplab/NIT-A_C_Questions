#include <stdio.h>

<<<<<<< HEAD
=======
// 2nd method using function

// void power(int num,int index){
// 	int indice = index,ans =1;
// 	while(index!=0){
// 		ans*=num;
// 		index--;
// 	}
// 	printf("%d to the power %d is %d",num,indice,ans);
// }
// int main(){
// 	printf("Enter Number & its Index: \n");
// 	int num,index;
// 	scanf("%d %d",&num,&index);
// 	power(num,index);
// }

// 1st method normally
>>>>>>> 175c2f8a395c06216fca78efe742a24724ac6be3
int main()
{
	int exp, base;
	printf("Enter the Base & its Exponentiation: ");
	scanf("%d %d", &base, &exp);
	int ans = 1;
	for (int i = 1; i <= exp; ++i)
		ans *= base;
	printf("%d ^ %d = %d", base, exp, ans);
	return 0;
}