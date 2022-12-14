#include <stdio.h>

<<<<<<< HEAD
=======
// 2nd method
// void factorial(int num){
// 	printf("Factorial of %d are: \n",num);
// 	int n=num,ans=1;
// 	while(num!=0){
// 		ans*=num;
// 		num--;
// 	}
// 	printf("Factorial of %d is: %d\n",n,ans);
// }
// int main(){
// 	printf("Enter a Number: \n");
// 	int num;
// 	scanf("%d",&num);
// 	factor(num);
// 	factorial(num);
// }

// 1st method
>>>>>>> 175c2f8a395c06216fca78efe742a24724ac6be3
int main()
{
	int n, pdt = 1;
	printf("Enter a Number: ");
	scanf("%d", &n);
	if (n == 0)
		printf("%d", n + 1);
	else
	{
		for (int i = 1; i <= n; ++i)
			pdt *= i;
		printf("%d", pdt);
	}
	return 0;
}