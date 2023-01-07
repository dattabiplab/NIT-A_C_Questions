#include <bits/stdc++.h>
using namespace std;

int main()
{
	// 03/12/2022 	SAU

	// FREQUENCY OF ARRAY

	// int arr[7] = {1,1,2,2,3,3,1};
	// int fre[7];
	// for(int i = 0;i<7;i++) fre[i] = 0;
	// for(int i = 0;i<n;i++)
	// {
	// 	count = 1;
	// 	for(int j = i+1; j<n;j++)
	// 	{
	// 		if(arr[i] == arr[j])
	// 		{
	// 			count++;
	// 			fre[j] = -1;
	// 		}
	// 	}
	// 	if(fre[i] != -1) fre[i] = count;
	// }
	// for(int i =0;i<7;i++) cout<<arr[i]<<" ";
	// cout<<endl;
	// for(int i =0;i<7;i++) cout<<fre[i]<<" ";

	// 04/12/22 SAI

	// CHANGING EVEN NUMBERS OF AN ARRAY TO 2
	// int a[6] = {1,2,3,4,5,6};
	// int *p = a;
	// for(int i = 0;i<6;i++)
	// {
	// 	if(*(p+i)%2 == 0) *(p+i) = 2;
	// 	else continue;
	// }
	// for(int i=0;i<6;i++) cout<<a[i]<<" ";
	// 			// OR
	// int a[6] = {1,2,3,4,5,6};
	// int *p = a;
	// int *q = a+6;;
	// for(;*p<6;p++)
	// {
	// 	if(*p%2 == 0) *p = 2;
	// 	else continue;
	// }
	// for(int i=0;i<6;i++) cout<<a[i]<<" ";
	// 	// 2 POINTER APPROACH
	// int a[6] = {1,2,3,4,5,6};
	// int *p = a;
	// int *q = a+6;;
	// for(;p<q;p++)
	// {
	// 	if(*p%2 == 0) *p = 2;
	// 	else continue;
	// }
	// for(int i=0;i<6;i++) cout<<a[i]<<" ";

	// 10/12/2022	SAU
	// FIND MAXIMUM & MINIMUM OF AN ARRAY

	// int arr[6] = {1,4,5,3,2,0};
	// int min = INT_MAX, max = INT_MIN;
	// for(int i = 0;i<6;i++)
	// {
	// 	if(max<arr[i]) max = arr[i];
	// 	if(min>arr[i]) min = arr[i];
	// }
	// cout<<"Maximum: "<<max<<" Minimum: "<<min;

	// FIND 2nd MAXIMUM VALUE
	// int n;cin>>n;
	// int a[n],b[n];
	// for(int i=0;i<n;i++)
	// {
	// 		cin>>a[i];
	// 		b[i] = a[i];
	// }
	// int max = a[0],max1;
	// for(int i=0;i<n;i++)
	// {
	// 	if(a[i]>max)
	// 	{
	// 		max = a[i];
	// 		max1 = i;
	// 	}
	// }
	// b[max1] = 0;
	// int max2 = b[0];
	// for(int i=0;i<n;i++)
	// {
	// 	if(b[i]>max2) max2 = b[i];
	// }
	// cout<<"Max value= "<<max<<" Second Max Value= "<<max2;
	// OR
	// int n;cin>>n;
	// int a[n];
	// for(int i=0;i<n;i++) cin>>a[i];
	// int max = a[0],max2 = INT_MIN;
	// for(int i=0;i<n;i++)
	// {
	// 	if(a[i]>max)
	// 	{
	// 		max2 = max;
	// 		max = a[i];
	// 	}
	// 	if(a[i]>max2 && a[i]<max)	max2 = a[i];
	// }
	// cout<<"Max value= "<<max<<" Second Max Value= "<<max2;

	// PREFIX SUM ARRAY
	// int n;cin>>n;
	// int a[n];
	// for(int i=0;i<n;i++) cin>>a[i];
	// int sum = 0;
	// for(int i = 0;i<n;i++)
	// {
	// 	sum+=a[i];
	// 	a[i] = sum;
	// }
	// for(int i = 0;i<n;i++) cout<<a[i]<<" ";
	// OR
	// int n;cin>>n;
	// int a[n],b[n];
	// for(int i=0;i<n;i++) b[i]=0;
	// for(int i=0;i<n;i++) cin>>a[i];
	// b[0] = a[0];
	// for(int i = 1;i<n;i++)
	// {
	// 	b[i] = a[i] + b[i-1];
	// }
	// for(int i = 0;i<n;i++) cout<<a[i]<<" ";
	// cout<<endl;
	// for(int i = 0;i<n;i++) cout<<b[i]<<" ";

	// MISSING NUMBER
	// int a[] = {1,2,3,4,5,6,8,9,10};
	// int n = sizeof(a)/sizeof(a[0]);
	// int N = n+1,sum=0,missingNum;
	// int sumAllTerms = (N*(N+1))/2;
	// for(int i =0;i<n;i++) sum+=a[i];
	// missingNum = sumAllTerms-sum;
	// cout<<missingNum;

	// TWO SUM

	// int n,key;cin>>n>>key;
	// int a[n];
	// for(int i=0;i<n;i++) cin>>a[i];
	// for(int i = 0;i<n;i++)
	// {
	// 	for(int j = i+1;j<n;j++)
	// 	{
	// 		if(a[i]+a[j] == key)
	// 			cout<<a[i]<<" + "<<a[j]<<endl;
	// 	}
	// }

	// THREE SUM

	// int n,key;cin>>n>>key;
	// int a[n];
	// for(int i=0;i<n;i++) cin>>a[i];
	// for(int i = 0;i<n;i++)
	// {
	// 	for(int j = i+1;j<n;j++)
	// 	{
	// 		for(int k = j+1;k<n;k++)
	// 		{
	// 			if(a[i]+a[j]+a[k] == key)
	// 				cout<<a[i]<<" + "<<a[j]<<" + "<<a[k]<<endl;
	// 		}
	// 	}
	// }

	// 11/12/2022		SAI

	// // FIGHTING THE DARKNESS
	// n = 3 candles
	// arr[] = {1,1,2}
	// 1 unit candle burn for 1 day
	// Maximum no. of days room will be lighted up when all candles are lighted together?

	// // INPUT
	// n = 7
	// arr[] = {4,3,7,8,6,2,1};
	// // OUTPUT
	// {3,7,4,8,2,6,1}
	// arr[0]<arr[1]>arr[2]<arr[3]>arr[4]<.....
	// // CODE
	// int n;cin>>n;
	// int a[n];
	// for(int i=0;i<n;i++) cin>>a[i];
	// bool f = 0;
	// for(int i = 0;i<n-1;i++)
	// {
	// 	if (f==0)
	// 	{
	// 		if(a[i]>a[i+1])
	// 			swap(a[i],a[i+1]);

	// 		f = 1;
	// 	}
	// 	else if (f==1)
	// 	{
	// 		if(a[i]<a[i+1])
	// 			swap(a[i],a[i+1]);

	// 		f = 0;
	// 	}
	// 	// (f==0)?(f=1):(f=0);
	// }
	// for(int i=0;i<n;i++) cout<<a[i]<<" ";

	// 17/12/2022 SAU
	// ROTATION OF AN ARRAY

	// (1) LEFT

	// int i ,n ,k;
	// cin>>n>>k;
	// int a[n];
	// for(int i=0;i<n;i++) cin>>a[i];
	// i = 0;
	// while(i<k)
	// {
	// 	int last = a[0];
	// 	for(int j=0;j<n-1;j++)
	// 	{
	// 		a[j] = a[j+1];
	// 	}
	// 	a[n-1] = last;
	// 	i++;
	// }
	// for(int i=0;i<n;i++) cout<<a[i]<<" ";

	// (2) RIGHT

	// int i ,n ,k;
	// cin>>n>>k;
	// int a[n];
	// for(int i=0;i<n;i++) cin>>a[i];
	// i = 0;
	// while(i<k)
	// {
	// 	int first = a[n-1];
	// 	for(int j=n-1;j>0;j--)
	// 	{
	// 		a[j] = a[j-1];
	// 	}
	// 	a[0] = first;
	// 	i++;
	// }
	// for(int i=0;i<n;i++) cout<<a[i]<<" ";

	// MOVE ALL THE -ve ELEMENTS IN AN UNSORTED ARRAY		time -> O(N) space-> O(1)
	// arr = -1  2 -3 -3 4 -5 5
	// ans = -1 -3 -5  2 4 5		// duplicate elements ignored

	// int s = 0,n = 7, e = n-1;
	// while(s<e)
	// {
	// 	if(arr[s]<0) s++;
	// 	else if(a[e]>0) e--;
	// 	else swap(a[s],a[e]);
	// }
	// for(int i=0;i<n;i++) cout<<arr[i]<<" ";

	// // MAJORITY ELEMENT
	// arr = 5 5 7 7 1 5 5 5 5 3 5 5		//without extra space

	// // BRUTE FORCE
	// array <int,12> a = {5,5,7,7,1,5,5,5,5,3,5,5};
	// array <int,100000> fre;
	// fre.fill(0);
	// int max = INT_MIN,ans;
	// for(int i=0;i<a.size();i++)	fre[a[i]]++;
	// for(int i = 0;i<a.size();i++)
	// {
	// 	if(fre[i] >max)
	// 	{
	// 			max = fre[i];
	// 			ans = i;
	// 	}
	// }
	// cout<<"Majority Element= "<<ans<<"\nCount= "<<max;

	// 22/12/2022 SAI

	// SEGREGATE OF 0 & 1 (seperate 0's and 1 and sort them)
	// int n=7,s=0,e=n-1;
	// int a[n];
	// for(int i=0;i<n;i++) cin>>a[i];
	// while(s<e)
	// {
	// 	if(a[s]==0) s++;
	// 	if(a[s]==1) e--;
	// 	else swap(a[s],a[e]);
	// }
	// for(int i=0;i<n;i++) cout<<a[i]<<" ";
	// 			// OR
	// int n=7,s=0,e=n-1;
	// int a[n];
	// for(int i=0;i<n;i++) cin>>a[i];
	// while(s<e)
	// {
	// 	if(a[s]==0 && a[e]==0) s++;
	// 	if(a[s]==0 && a[e]==1)
	// 	{
	// 		s++;
	// 		e--;
	// 	}
	// 	if(a[s]==1 && a[e]==0)
	// 	{
	// 		swap(a[s],a[e]);
	// 		s++;
	// 		e--;
	// 	}
	// 	if(a[s]==1 && a[e]==1) e--;
	// }
	// for(int i=0;i<n;i++) cout<<a[i]<<" ";

	// // SORT 0's, 1's & 2's
	// int n=7,s=0,m=0,e=n-1;
	// int a[n];
	// for(int i=0;i<n;i++) cin>>a[i];
	// while(m<=e)
	// {
	// 	if(a[m]==1) m++;
	// 	if(a[m]==0)
	// 	{
	// 		swap(a[m],a[s]);
	// 		s++;
	// 		m++;
	// 	}
	// 	if(a[m]==2)
	// 	{
	// 		swap(a[m],a[e]);
	// 		e--;
	// 	}
	// }

	// // SHUFFLE INT
	// arr = 1 2 3 4 5 6
	// ans = 1 4 2 5 3 6
	// int n = 8,s=0,m = n/2;
	// int a[n],ans[n];
	// for(int i=0;i<n;i++) cin>>a[i];
	// for(int i=0;i<n;i+=2)
	// {
	// ans[i] = a[s];
	// ans[i+1] = a[m];
	// s++;
	// m++;
	// }
	// for(int i=0;i<n;i++) cout<<ans[i]<<" ";

	return 0;
}