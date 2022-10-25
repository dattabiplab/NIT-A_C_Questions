// factor of a Number using a For Loop
#include <stdio.h>

// 2nd method
// void factor(int num){
// 	printf("Factor of %d are: \n",num);
// 	for(int i=1;i<=num;i++){
// 		if(num%i==0) printf("%d\t",i);
// 	}
// 	printf("\n");
// }
// int main(){
// 	printf("Enter a Number: \n");
// 	int num;
// 	scanf("%d",&num);
// 	factor(num);
// }

// 1st method
int main()
{
	int n = 100;
	printf("Factors are: \n");
	for (int i = 1; i <= n / 2; i++)
		if (n % i == 0)
			printf("%d\t", i);
	return 0;
}