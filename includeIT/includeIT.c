// 11/06/2022 SAU
/*
DOMAIN
1. SDE
2. Web/Android Development
3. DS -> a)DA b)ML c)DE d)AI+DL

DATA TYPES
1.Primitive
a)char -> 1 byte
b)integer -> 4 byte
c)float -> 4 byte
d)long -> 12 byte
e)double -> 8 byte

32(x86) bit & 64 bit system -> In 1 iteration the processor can process 2^32(range) operations.
		but can't support 2^38+2^40

SIGNED-> +ve or -ve something
UNSIGNED-> only +ve something

NUMBER SYSTEM
1.Binary = 0,1 (2)
2.Decimal = 0-9 (10)
3.Octal = 0-7 (8)
4.Hexadecimal = 0-15 (16)
	->hex
dec -> bin 	-> divide by base number
	->octal
hex ->
bin -> dec 	-> sum of the number + (base value)^power[RHS to LHS]
octal ->

OPERATORS
1.Unary (1 operand) x++
2.Binary (2 operands) x+y
3.Ternary (multiple operands)

OPERATORS
1.Arithmatic +,-,/,*
2.Assignment =,>=,<=
3.Logical &&,||
4.Shifting <<,>>
5.Increment/Decrement ++,--

++a -> pre increment -> Before assigning the value to the variable, the value is incremented by one
a++ -> post increment -> After assigning the value to the variable, the value is incremented.

Q) int a = 2;
a+ ++a;
print(a) -> 6
	[since, precedence of unary>binary hence ++a=3 and a=3 therefore 3+3 = 6]

Q) int a = 052 (since octal)
printf("%d",a) ->42
	[since  052 -> 0*8^2 + 5*8^1 + 2*8^0 = 42
			210]
*/

// 12/06/2022 SAI
/*
WORKING OF A PROGRAM
ROM[Secondary Memory] (where our code is saved, when we click on run our code gets loaded on) -> RAM[Primary Memory] (where our code is being loaded and it sends our code chunck by chunck as "cache memory" to) -> Registor (which takes very small amount of our code and tries to run it by giving it to) -> CPU[0,1] (cpu runs the small chunck of code and return back it to the registor and the cycle goes on)

MEMORY HIERARCHY

P ☝ Registor (kb,byte) ☝S
R ☝ cache (mb)		   ☝P
IC☝ RAM (gb)		   ☝EE
E ☝ Secondary (ROM)	   ☝D
		SIZE --->

In global scope
	default value of int = 0
	default value of char = \0
	default value of float = 0.0
In local scope default value is garbage value

Source Code
	👇 (hello.c)
preprocessor (#)
	👇 (hello.i) [expanded source code]
compiler
	👇 (hello.s) [assembly code]
assembler
	👇 (hello.obj) [objective code]
linker
	👇 (hello.exe) [executive code]
loader
	👇
execution [machine code]

ASCII
a = 97
A = 65
*/

// 19/06/2022 (ONLINE) SAI
/*
OPERATOR
1.UNARY ++ -- + ! ~ (type) * & sizeof (right to left) Associativity
2.BINARY + - * / % << >> < <= > >= == != || (left to right Associativity)[+= -= *= /= = (right to left Associativity) ] () (common brackets)
3.TERNARY ?: (right to left) Associativity

arithmatic  * / % + -
shift  << >>
relational  < <= > >= == !=
bitwise  & ^ |
logical  && ||
assignment  = += -= *= /= %= &= ^= |= <<= >>=
comma  ,

Precedence (power)
1. ()
2. ++ -- + ! ~ (type) * & sizeof
3. * / %
4. + -
5. << 	>>
6. <	<=	>	>=
7. == !=
8. &
9. ^
10. |
11. &&
12. ||
13. =	+=	-=		*=	/=	%=	&=	^=	|=	<<=	>>=
14. , (lowest preference)

int a=10,b=20;
		[by comma loader tries to create a variable by name int of integer type which is not possible (since int is a keyword)]

1 statement = 1 cpu cycle O(1)

int a=7;
int b =2;
float c=a/b;
print(c) -> 3.000000 [since int/int =  int (stored in float)]
if %d -> 0 & if %f -> 3.000000

float a=7;
float b=2;
float c=a/b;
print(c) -> 3.500000 [since float/float = float (stored in float)]

float a=7;
float b=2;
int c=a/b;
print(c) -> 3 [since float/float = float (typecast to int)]

float/int = float = int/float

2    + 3  *   4  /   5 -  6   %   7		or 2+12/5-6%7 	or 2+2-6		or 4-6	or  -2
  [2.1]  [1.1] [1.2]  [2.2] [1.3]  (power)
  * / %  left -> right   + - left -> right

2 == 3 < 2  != 4  > 5 	or 2 == 0 != 0	or 0 !=0 or 0
[2.1] [1.1][2.2][1.2]

Bitwise
x=5 y=6
x	0	0	0	0	0	1	0	1
y	0	0	0	0	0	1	1	0
x&y 0	0	0	0	0	1	0	0 -> 4
x|y 0	0	0	0	0	1	1	1 -> 7
x^y	0	0	0	0	0	0	1	1 -> 3

logical
2         && 3 = 1
(non zero)  (non zero)
2 && 0 = 0
	(zero)
0 && 3 = 0
(zero)
2 || 2 =1
2 || 0 =1
1 || 1 =1
0 || 0 =0

assignment
a = b; [ b's value is saved on a ]
a+=b; [ a+b's value is saved on a]
a<<=b; [a<<b's value is saved on a]
a|=b; [a||b's value is saved on a]

int m,n,p
1. m=n=p=10+2; -> m=n=p=12
2. m+=n=p=10; -> m=m+(n=p=10) -> m=m+(n=(p=10)); -> m=m+.....
if same question part then m= 12+10 =22
if different question then m =    m +10=.....
								(garbage value)

a =10;
+-a = -10
a= -10;
+-a = 10

!0 = 1
!1 = 0
*/

// 23/06/2022 SAU (ONLINE)
/*
I/O (input/output)->formatted, unformatted
					1.printf	1.getchar
					2.scanf		2.getch
								3.getche
								4.gets

FORMATTED
formatted takes 2 arguments
%d -> format specifier
& -> dereferencing operator (address)

printf("%d", printf("%s","hello")); ->hello5
	[1. due to inside %s hello will be printed
	2. due to second %d it will count no. of char present in hello]
scanf("%d", &a); -> address of a

UNFORMATTED

1. getchar()
char c;
c = getchar();
printf("%c",c); -> we can type many(multiple input) value but print(output) only first char

2. getch()
char c;
c =getch();
printf("%c",c); -> we can only type 1 value(input) & program will execute itself directly(no output)

3. getche()
char c;
c = gerche();
printf("%c",c); -> we can only type 1 input & will give same 1 output & program exists

4. gets()
char c[10]; -> not related to size of char we can input
gets(c);
printf("%s", c);

getchar = multiple input, but single output
getch = 1 input & no output
getche = 1 input & 1 output
gets = outputs full string with spaces also

ESCAPE SEQUENCE

\n -> next line
\t -> horizontal tab
\v -> vertical tab
\' -> printf("\' hello\'") -> 'hello'
\" ->
\? -> printf("hello\?") -> to print question mark
\b -> backspace(doesnot print exactly last char) -> printf("hello\b") -> hell
\r -> return carriage(char after \r replaced by front chars if there are 2 chars then 1st 2 char get replaced and print the remaining letters as it is) -> printf("abc\rh") -> hbc [a will be replaced by h and removing will be printed as it is]

int main(){
	printf("\nab");		-> 1st line will be empty
	printf("\bsi");		-> 2nd line ab\bsi -> asi
	printf("\rhai");	-> 3rd line asi\rhai -> hai [a==h, s==a, i==i]
}

FORMAT SPECIFIER
1. %d = int
2. %f = float
3. %c = char
4. %s = string
5. %x = hexadecimal (address)
6. %p = pointer
7. %lf = double
8. %Lf = long double
9. %u = unsigned int
10. %o = octal

int a = 5;
printf("%d" + 1, a); -> d
[if there is operator(+) & numeric value then no. of numeric value after "quotes" will be omitted]
printf("%dha" + 2, a); -> ha
printf("%djhcvjhvc" + 6, a); -> jhvc
printf("%d" - 1,a); -> nothing

int a= 5;
printf("%d\t%p",a,a); -> 	(tab)5 		->		(tab)000....5(in int) (address of a)
printf("%d\t%x",a,a); ->	(tab)5		->		(tab)5 (in hexadecimal) (address of a)

DIFFERENCE
scanf -> will take input(string) until you give space
gets -> it will take input even if you give space

SCOPE
int main(){
	{
		int a = 5;  [a's scope is inside only this {} brackets]
	}
	printf("%d", a); -> a is undefined [outof scope]
}

CORRECT WAY OF INITIALISATION

int hello_99 = 99; ☑
int _ = 99; ☑
int 99 = 1; ✖

CORRECT WAY OF DECLARATION

int a;b;c; ✖
int a, int b, int c; ✖
int a,b,c; ☑

int a = 75;
printf("%c", a); -> F (in ASCII)

int a = 5;
a = 10;
print(a) -> 10 (replaced value of a =5)

int a = 5;
int a = 10;
print(a) -> error [cannot initialize a already initialized varable ]

int a =75;
int b = sizeof(a); -> return size of "a" [x = sizeof(byte)]
printf("%d", b); -> 4
int b = sizeof(a++) -> still give 4

int main(){
	int a = 1;		//a=1
	int b = 1;		//b=1
	int c = ++a || b++;		//2||1 (after checking 'a' it won't go for checking b(since doesnt matter b is 0 or any other no.)) =1 -> c=1
	int d = b-- && --a;		//1 && 1 -> d=1
	printf("%d%d%d%d", d, c, b, a); 	-> 1 1 0 1 (d c b a)
}
	1. a = 2, b = 1[due to or operator it doesnt go beyond ++a]		c = 1
	2. a = 1, b =1 (1--) -> 0 		d = 1
	a = 1,  b = 0,  c = 1,  d = 1
*/

//	16/07/2022 SAUMYADIP
/*
CONTROL STATEMENT
1. if				1.break
2. if - else		2.continue
3. switch			3.goto

SYNTAX OF if
if (condition = True){
	//body
}

int x = 5;
if(x == x);		//[x ==x is true but after statement there is a semicolon hence it is an error]
{ printf("True");}
else
{ printf("False");}

if()
if()		[compiler will goto both 'if' to check seperately for their conditions]

if()
else() 		[compiler will check if condition if its true then it will execute and if its false then it will goto else's condition]


MACROS
#define 	A 			5
	👇		👇 			👇
macros macro name macro variable

variable can be string also
its preferred to keep the macro variable name in capital
there will be no semi colon after the statement

#define NULL 0
int main(){
	if(printf("0")==NULL){			//[printf("0")-> it will print 0 and function executes hence it will give 1]
		printf("inside if");		//hence if(1==0(null)) -> it will goto else part
	}
	else{
		printf("inside else");
	}
} -> 0inside else

if(printf("")==NULL) 	-> 0 == 0 -> it will goto inside if

int i = 0, j = 0;
if(i++ == j++)	printf("%d%d", i--, j--);		-> 1,1
else  printf("%d%d", i, j);

a = 5,3,4,7,6;		[1st value will be stored in a]
b = (5,3,7,6,5,1);	[last value will be stored when they are in brackets]
printf(a);	-> 5
printf(b);	-> 1

WAP to find average of your marks & output as grade
A if avg>90
B if avg(80-90)
C if avg(60-79)
fail if avg<60

WAP to calculate Profit & Loss

WAP to calculate Gross Salary
*/

//	19/07/2022
/*
int a = 5;
int b= a++ + 1;
printf("%d%d",a,b); -> (6,6) //[Loader is taking input chunk by chunk , space between operators is also loaded]

int a = 5;
int b= a+ ++1;
printf("%d%d",a,b); -> logically it will give (5,7) but it gives an error due to (5,7)

int i = 5;
int var = sizeof(i++);
printf("%d%d", i, var);-> (5,4) //[inside sizeof() operator any increment or decrement does not work]

int var;
int num;
num = (var=15, var+35);
printf("%d",num); -> 50 // var=15+35 =50

int var;
int num;
num = var=15, var+35;
printf("%d",num);

int var = (printf("%s\n","Hello"),5);
printf("%d",var); -> 1st line Hello will be printed in 2nd line 5 will be printer since in brackets last element will store in variables

char c = 255;
c = c+101;
printf("%d",c); -> after moving full cycle in 'unsigned char' cycle it will give the anscii int value of the char
printf("%c",c); -> it will give the anscii value of the char

printf("%s","Hello"); -> it will print hello normally
printf("%20s","Hello"); -> it will print hello after (20-5(hello)) spaces

float f = 362.1736;
printf("%0.0f",f); -> after decimal the number written will be the precision of the floating number
printf("%0.10f",f);
printf("%0.2f",f);
printf("%2.2f",f);
printf("%5.2f",f);

int i =5; ☑
int i;	✖ [after declaration we can't declare again]
int i = 6; 	❌ [do]

static int i =5;
static int i;
static int i =6; ❌ [in static we can't change the value of the variable]

int i; -> declaration
i = 5; -> definition / initialisation
*/

// 23/07/2022 sau
/*
if(0) printf("Hello");
else printf("Hi"); -> hi //since zero gives as a false value hence it will go for else case

WAP to check a triangle is equilateral , isoscale or scalene
WAP to check if a number is divisible by 5 and 11
WAP to check a character is vowel or consonant
WAP to check roots of an quadratic equation
*/

// 24/07/2022 sai
/*
int num =8;
printf("%d %d",num<<1,num>>1); -> 16 4 //1st 8 will be shifted to left side //2nd 8 will be shifted to right side

int i =5;
int a = ++i + ++i;
printf("%d",a); ->14=(6(+1)+7)
//if the 2nd operator is pre-increment or pre-decrement then the 1st i will get a +1 or -1 respectively
//incase of post-increment or post-decrement only update will happen +1 or -1 will not happen with 1st value of i

int i =5;
int a = ++i + ++i + ++i;
printf("%d",a);-> 22=(6(+1)+7+8)

int i = 16;
i = !i>15; //-> not i(=16)=> i=0>15 =0
printf("%d",i); -> 0
// 1st precedene 2nd associativity

int i =5;
int a = --i + --i;
printf("%d",a); -> 6=(3(4-1)+3)

int i =5;
int a = --i + --i + --i;
printf("%d",a); -> 8=(3(4-1)+3+2)

int a = 2, b=2, c=0,d=2,m;
m = a++ && b++ && c++ || d++;
printf("%d %d %d %d %d",a,b,c,d,m); -> 3,3,1,3,1
//m = 2 && 2 && 0 ||2
	//= 1 && 0 ||2
	//= 0 || 2 =1

int i = 5;
int a = --i + ++i - i-- + --i;
printf("%d",a); -> 8
// 5(4+1) +5 -5 +3 = 8

int i = 5;
int a = i++ + ++i;
printf("%d",a); -> 13
// 6(5+1) +7

int i = 5;
int a = i-- - --i;
printf("%d",a); -> 1
// 4(5-1) -3

unsigned int num = -4;
printf("%d", ~num); -> 3
// -4 => -100 (in binary)
// ~ -4 => +011 =3

int x =2;
(x & 1)? printf("True"): printf("False"); ->False
//10 & 01 = 0

int x =2;
(x & 2)? printf("True"): printf("False"); ->True

int x =2;
(x | 1)? printf("True"): printf("False"); ->True
// 10 | 01 = 11=3(true)

int x =2;
(x ^ 1)? printf("True"): printf("False"); ->True

int a =7,b=4,c=2;
printf("%d",a|b&c); -> 7
//7|4&2 = 7|4 = 7
// 100 & 10 = 100 =4
// 111 | 100 = 111 =7

int a = NULL - true;
printf("%d",a); -> -1 (nothing -1)

printf("%d", 3*2--); -> error
//since 2--(2=2-1) is not valid and alse 3*2-- is not stored on any actual stroage  since dont have any variable

int a =1,b=3,c;
c = b<<a;
b = c * (b *(++a)--);
a = a>>b;
printf("%d",b); -> 36 (logically)

int i =10;
i++;
i*i;
printf("%d",i); -> 11

#define x =
int a;
a x 5; //replaces x by 5
printf("%d",a); -> 5
*/

// 31/07/2022 SAI
/*
int i =5;
int b;
b = --i + ++i - --i + ++i + ++i - --i;
printf("%d",b); ->12
//b = 5(4+1) + 5 - 4 + 5 + 6 -5 = 12

int i =5;
int b;
b = i++ + i-- + i-- - i++ + --i - i++;
printf("%d",b); ->12
//b = 5 + 6 + 5 + 5 - 4 + 4 - 4 = 12

int i =5;
int b;
b = ++i + ++i + ++i + ++i;
printf("%d",b); ->31
//b = 7(6+1) + 7 + 8 + 9 = 31

int i =5;
int b;
b = ++i + i++;
printf("%d",b); -> (6+1)+6 = 13

int i =5;
int b;
b = ++i + ++i;
printf("%d",b); -> (6+1)+7 = 14

int i =5;
int b;
b = --i + --i;
printf("%d",b); -> (4-1)+3 = 6

int x = 0;
if(x==x) printf("hi");
else printf("hello"); -> hii	//since (0==0) is true hence if part executes

#define FALSE -1
#define null 0
#define TRUE 1
if (null) printf("null");	 //0 hence zero(false)
else if (FALSE) printf("true"); 	//-1 non zero hence true prints
else printf("false"); -> true

int i=0,j=0;
if(i++==j++) printf("%d,%d",i--,j--);
else printf("%d,%d",i,j); -> 1,1

int i=0,j=1,k=0;
if(++k,j,i++) printf("%d,%d,%d",i,j,k); ->nothing will be printed
//if(1,1,0) = (1,0) = (0)  since right to left associativity in brackets

if(condition) something; //1 statement
if(){
	something; (1)
	something; (2)
	something; (3)
} //3 statements

if(true) printf("true"); -> error //since true is nothing no variable no string nothing hence gives error
else printf("false");

if("true") printf("true"); -> true //since here true is a string hence it gives a value in ascii
else printf("false");

if(printf("0")) printf("hi");
else printf("hello");-> 0hi

printf()-> gives error  //since nothing is inside printf

#define false 0
if(printf("0")==false) printf("hi");		//print executes hence gives 1
else printf("hello"); -> 0hello			//1==0 => 0 hence goto else part

int i=5,j=4;
if(!printf("")) printf("%d,%d",i,j); 	//!(null) => !(0) =1 hence if part executes
else printf("%d,%d",i++,++j); ->5,4

int i=5,j=4;
if(!printf(" ")) printf("%d,%d",i,j);		//!(1) since it prints a space =>0 hence else part executes
else printf("%d,%d",i++,++j); -> 5,5 //1 space before 5,5

int i=5,j=5;
if(i==j);
printf("equal");
else printf("not"); -> error //since there is no previous if

if(1){

} is same as if(1);

int i =25;
if(i==25); //true
i=50; // i value changed
if(i==25) i=i+1;  //false
else i =i+1; //else part executed
printf("%d",i); -> 51

DIFFERENT SYNTAX
if(1);
printf("hi");	✔

if(1)
printf("hi");	✔

if(1) printf("hi");
else printf("hello");	✔

if(1);
printf("hi");
else printf("hello");	❌

printf("hi");
else printf("hello");	❌


int i =5,j=6,k=7;
if(i>j==k) printf("%d,%d,%d",i++,++j,--k);
else printf("%d,%d,%d",i,j,k); ->5,6,7
//5>6==7 => (0==7) => 0 hence else part executes

int i=2;
if(i==(1,2)) printf("1");		//i==2 since due to brackets 2 will be assigned since its in last position
else printf("2");->1

int i=2;
if(i==1,2) printf("1");
else printf("2"); ->1
//if(0,2) since i!=1 => if(2) => 2 is non zero hence if part executes

int i=5;
if(i=i-5>4) printf("1");
else printf("2");
//if(i=5-5>4) since precedence of '-' is more => if(i=0>4) =>if(i=0) => if(0) hence else part

int i;
if(scanf("%d",i)) printf("%d",i);
else printf("2"); ->garbage value(logically) //but error due to not presence of '&'

int i;
if(scanf("%d",&i)) printf("%d",i); //scanf executes and gives 1
else printf("2"); -> value of i we enter

if(sizeof(0)) printf("0"); //sizeof(int) =4 hence non zero hence if part executes
else printf("1");-> 0

char c = '\0';
int a = int(c);
if(a) printf("%d",a);
else printf("b"); -> b(logically since typecasting '\0' gives 0 in ASCII)
//but error since typecasting gives error
*/

// 6/08/2022 sai
/*
int a,m;
a = scanf("%d",&m); -> after successfully executing scanf a stores 1
printf("%d",a);-> 1

switch
switch (expression)
{
case value 1:
	statements....
	.....
	break;

case value 2:
	statements....
	.....
	break;

default:
	default statement
	break;
}

Rule:
1) we cant use floating point in switch (expression) part
2) we can use int & char in switch(expression)
3) we can write default in any position, compiler will ignore it until it checks all conditions (cases)
4) nested switch is also possible
5) we can't use ',' operator or || in case values but we can use expression in switch which will either give some int values

eg:-
switch(10){
	case (10):
		switch(2){
			case 2:
				break;
		}
		break;
	case (12):
		break;
}

case 1 3 7 8 10: -> compilation error
case (1,3,7): => case 7: (logically) -> due to (",") operator
int month =7;
	switch (month)
	{
	case (1, 3, 7): ->compiler error ->"," is not allowed in constant expression
		printf("hello");
		break;

	default:
		break;
	}

WAP to print number of days in a Month
WAP to print day (monday,tuesday....)
*/

// 7/08/2022
/*
loops:-
1) entry control => for, while
2) exit control => do while

FOR LOOP:-

syntax:
for (exp 1; exp 2; exp 3)
{
	// body
}
exp 1 = initialisation
exp 2 = condition
exp 3 = increment/ decrement/ update value
//for a "for loop" to work exp1,2,3 nothing is needed

syntaxes:
(1)
int i=1;
for(;i<5;i++) printf("%d\t",i); -> 1 2 3 4

(2)
int i=1;
for(;;i++) printf("%d\t",i); -> 1 2 3 4 5 .... infinity times

(3)
int i=1;
for(;;) printf("%d\t",i); -> 1 1 1 .... infinity times

HOW FOR LOOP WORKS?
for(int i=1;i<=10;i++){						cycle of for loop	//(3)<-(2)<-(4)<-(3)
		(1)  (2)  (4)
	printf("%d",i);
			(3)
}
printf("%d",i); -> 11

int i;
for(i=1;i<=10;i++) printf("%d\t",i); -> 1 2 3 4 5 6 7 8 9 10

(4)
int i;
for(i=1;i<=10;i++); //internally i will increment itself
printf("%d\t",i); -> 11

int i=1;
for(;i<=5;i++)	printf("%d\t",i); -> 1 2 3 4 5

for(int i=0,j=0;i<=5;i++) printf("%d %d\t",i,j); -> 00 10 20 30 40 50

int i,j;
for(i=1,j=0;i<5,j<3;i++) printf("%d %d\t",i,j); -> 10 20 30 40 50 ....infinity times
//when in position of exp 2 there are more then 1 exp with comma separated the last exp will work just like (1,2,3) => 3

i<5,j<3 -> when more than 1 condition is given last condition will run like x=(1,2) =>x =2

int i,j;
for(i=1,j=0;i<5,j<3;j++) printf("%d %d\t",i,j); -> 10 11 12

//to run both condition=> i<5 && j<3 .... in exp3 all update value is not necessary
//to run any condition=> i<5 || j<3 .... in exp3 all update value should be used


//if there is "or ||" condition in exp2 and if we upgrade value of only 1 variable
in exp3 then the program will run for infinite times
//if there is "and && " condition in exp2 and if we upgrade value of only 1 variable
in exp3 then the program will run fine and it will still check all conditions

int i,j;
for(i=1,j=0;j<3 || i<5;j++) printf("%d %d\t",i,j); -> 10 11 12(logically)
//[if exp2 is written oppostite (i<5 || j<3) then (logically) it will give 10 11 12 13 14 15... infinite times ]
//but in both cases it runs for infinite times since we have updated only j's value
//we must have update all variables during "or" case

int i,j;
for(i=1,j=0;i<5 || j<3;j++) printf("%d %d\t",i,j); -> 10 11 12.... infinite times

int i,j;
for(i=1,j=0;i<5 || j<3;i++) printf("%d %d\t",i,j); -> 10 20 30 40.... infinite times

int i,j;
for(i=1,j=0;j<3 || i<5;i++) printf("%d %d\t",i,j); -> 10 20 30 40.... infinite times

int i,j;
for(i=1,j=0;j<3 && i<5;j++) printf("%d %d\t",i,j); -> 10 11 12 [both condition checks]

int i,j;
for(i=1,j=0;j<3 && i<5;i++) printf("%d %d\t",i,j); -> 10 20 30 40 [both condition checks]

int i,j;
for(i=1,j=0;j<3 && i<5;j++) printf("%d %d\t",i,j); -> 10 11 12 //"&&" checks both conditions
printf("\n");
for(i=1,j=0;i<5 && j<3;j++) printf("%d %d\t",i,j); -> 10 11 12
printf("\n");
for(i=1,j=0;i<5 && j<3;i++,j++) printf("%d %d\t",i,j); -> 10 21 32
printf("\n");
for(i=1,j=0;i<5 && j<3;j++,i++) printf("%d %d\t",i,j); -> 10 21 32

//in exp 3 if i++,j++ is given, when there is more than 1 update value last j++ will work like (i++,j++) => j++
but in reality all update variable works

int i,j;
for(i=1,j=0;i<5 && j<3;i++,j++) printf("%d %d\t",i,j); -> 10 21 32 [both i++,j++ works together]

int i,j;
for(i=1,j=0;j<3 && i<5;i++,j++) printf("%d %d\t",i,j); -> 10 21 32 [irrespective of j<3 & i<5 positions]

int i,j;
for(i=1,j=0;j<3 || i<5;i++,j++) printf("%d %d\t",i,j); -> 10 21 32 43 [irrespective of j<3 & i<5 positions both i++,j++ works together]

int i,j,k;
for(i=1,j=0,k=0;i<5 && j<3 && k<4;i++,j++,k++) printf("%d %d %d\t",i,j,k); -> 100 211 322

for(int i=1;i<=10;i++) printf("%d\t",i); -> 1 2 3 4 5 6 7 8 9 10

for(int i=10;i>=1;i--) printf("%d\t",i); -> 10 9 8 7 6 5 4 3 2 1

//multiplication table of any number
int n;
printf("Enter a Number: ");
scanf("%d",&n);
for(int i=1;i<=10;i++) printf("%d x %d = %d\n",n,i,n*i);

//printing a to z alphabets
char ch;
for(ch='A';ch<='Z';ch++) printf("%c\t",ch);

char ch;
for(ch='a';ch<='z';ch++) printf("%c\t",ch);

int ch;
for(ch=65;ch<=90;ch++) printf("%c\t",ch);

//printing even numbers from 1 to 20
printf("Even Numbers are: ");
for(int i=1;i<=20;i++){
		if(i%2==0) printf("%d\t",i);
}

for(int i=2;i<=20;i=i+2) printf("%d\t",i);
*/

// 14/08/2022 SAU

/*
// Reverse a Number using a For Loop
int n =12345;
int reverse=0;
for(int i=n;i!=0;i/=10){
	int lastDigit = i%10;			//lastDigit stores remainder of n
	reverse = reverse*10 + lastDigit;
}
printf("Reverse Number: %d",reverse);

// Sum of Digits using a For Loop
	int n = 12345;
	int sum = 0;
	for (int i = n; i != 0; i /= 10)
	{
		int lastDigit = i % 10;
		sum += lastDigit;
	}
	printf("Sum of Digits: %d", sum);

// Product of Digits using a For Loop
	int n = 12345;
	int pdt = 1;
	for (int i = n; i != 0; i /= 10)
	{
		int lastDigit = i % 10;
		pdt *= lastDigit;
	}
	printf("Product of Digits: %d", pdt);

// Number of Digits using a For Loop
	int n = 12345;
	int count = 0;
	for (int i = n; i != 0; i /= 10)
		count++;
	printf("Number of Digits: %d", count);

// factor of a Number using a For Loop
	int n = 100;
	printf("Factors are: \n");
	for (int i = 1; i <= n / 2; i++)
		if (n % i == 0)
			printf("%d\t", i);		//here the no. itself as a factor will not be printed since range is upto n/2

// Prime or Not using a For Loop
	int n = 19;
	int i;
	for (i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			printf("Non-prime");
			break;
		}
	}
	if (i > n / 2)				//when the for loop will work if any value of i cant divide n
		printf("Prime Number");	//then i's value will become greater then n/2 [do dry run]

// first & last digit of a number using a For Loop
int n = 3445;
int lastDigit = n % 10;
while (n >= 10)			//for n>10 since any no. can belongs to 0 to 9 not more than that
	n /= 10;			//n>=10 is given for no. like 103 when n=103/10 becomes 10 that time
printf("First Digit: %d", n);		 //n>10 will not work hence we will need n>=10
printf("\nLast Digit: %d", lastDigit);
*/

// 19/08/2022 SAU (ONLINE)
/*
for(int i=1,j=1;i<=3,j<=3;i++,j++) printf("%d %d ",i,j); -> 1 1 2 2 3 3

int i=1,j=1;
for(;j;printf("%d%d",i,j)) j=i++<=1; -> 2130
//for(;1;printf(2,1)) since j =1
//j = 1<=1 => j =1 since 1 is equals to 1 and i++ maked i =2 hence printf(2,1)
//loop moves from 4 to 2 again for(;1;printf(3,0)) since j = 1 (again)
//j = 2<=1 => j = 0 and i++ makes i =3 hence printf(3,0)

int i; //(globally)
int t;
for(t=4;scanf("%d",&i);printf("%d\n",i)){
	printf("%d  ",t--); -> (a) 4  6
} //user input is 6 for i from options
options:
(a) 4  6 (b) 6  (c) 4  (d) NOTA
//here the loop will work for infinite times but according the options answer will be (a)
//since here expression 2 is considered as a condition hence it will return 1 after taking user input and
//it will terminate after this (but in reality in doesn't terminate)

int i;
for(i=0;i>9;i++) printf("FOR"); -> nothing
//since i=0>9 hence condition false hence doesn't print anything

char i=0; //takes 0 as int not as a char since we doesn't use '0' quotation
for(;i>=0;i++); //0>=0 hence true
printf("%d\n",i); -> -128
//since the loop will run for i =127 then the loop will work again and the circle of signed char
//will complete and it will move to the negative part of the circle hence i =-128>=0 hence false
//condition hence i will print -128

int i=1,j=1;
for(--i && j++;i<10;i+=2) printf("Loop"); -> LoopLoopLoopLoopLoop
//expression 1 gives = 0 but compiler doesn't depend on initialisation part of for loop
//compiler is depend on condition part (expression 2)
//hence loop will still work and it will print loop for 5 times

int i=1,j=1;
for(0;i<10;i+=2) printf("Loop"); -> LoopLoopLoopLoopLoop

for(5;2;2) printf("hello"); ->hello.... infinite times
//expression 1,2,4 is non zero hence loop will move around expression 2 to 4 hence loop will
//run for infinite times

//printf prints the character inside it and it also returns the number of characters inside it
//scanf takes input from the user and it also returns 1 if it successfully executes the program
//and returns 0 if itsn't able to execute the program

int fun = {printf("C for loop")}; //prints C for loop and stores 10 in var fun
int x =5;
for(x=0;x<=fun;x++) printf("%x",x); -> C for loop0123456789a
//the loop transforms into for(x=0;x<=10;x++) and prints x in hexadecimal form
//hexadecimal form of 10 is a

int fun = {printf("%d ",3)}; //prints 3 and stores 3(count of %d and 1 space is 3) in var fun
int x =5;
for(x=0;x<=fun;x++) printf("%x",x); -> 30123
*/

// 21/08/2022 SAI

/*
int i;
for (; 1;)
	scanf("%d", &i);  -> takes user input infinite times
// since expression 2 is 1 hence always true

// optimised way of showing number of days in a month
#include <stdlib.h> // for abs
int m;
scanf("%d", &m);
m = abs(m); //it will convert user negative values
switch ((m <= 7 && m % 2 != 0) || (m >= 8 && m <= 12 && m % 2 == 0))
{ //m greater then and equals to 1 and smaller than equals to 7 whose modulo gives 1 (hence odd) have 31 days
//or conditon between them
 //m greater then and equals to 8 and smaller than equals to 12 whose modulo gives 0 (hence even) have 30 days
//  not able to tell about february month
case 1:
	printf("31");
	break;
case 0:
	printf("30");
	break;
default:
	printf("Invalid");
	break;
}

// WAP  to create a basic calculator
float a, b;
char operator;
printf("Enter the expression to calculate: ");
scanf("%f%c%f", &a, &operator, & b);
switch (operator)
{
case '+':
	printf("%.f%c%.f = %.f", a, operator, b, a + b);
	break;
case '-':
	printf("%.f%c%.f = %.f", a, operator, b, a - b);
	break;
case '*':
	printf("%.f%c%.f = %.f", a, operator, b, a * b);
	break;
case '/':
	printf("%.f%c%.f = %.f", a, operator, b, a / b);
	break;
default:
	printf("Invalid Input");
	break;
}

// WAP to check user authentication
#include <string.h> //for using strcmp
char userInput[50], password[50], userInputAgain[50], passwordAgain[50];
printf("Enter Username: ");
gets(userInput);
printf("Enter Password: ");
gets(password);
printf("Again Enter Username: ");
gets(userInputAgain);
int value_user = strcmp(userInput, userInputAgain);
// strcmp compares two strings and it returns 0 if both strings are equal
int value_password;
switch (value_user)
{
case 0:
	printf("Again Enter Password: ");
	gets(passwordAgain);
	value_password = strcmp(password, passwordAgain);
	switch (value_password)
	{
	case 0:
		printf("Authenticated");
		break;
	default:
		printf("Wrong User");
		break;
	}
	break;
default:
	printf("Wrong User");
	break;
}
*/

// 27/08/2022 SAU

/*
// Armstrong Numbers for Any number of Digits
#include <math.h>
int dig, num, count = 0;
printf("Enter a Number: ");
scanf("%d", &dig);
num = dig;
while (num != 0)
{
	count++;
	num /= 10;
}
int sum = 0;
num = dig;
while (dig != 0)
{
	sum += floor(pow((dig % 10), count));
	dig /= 10;
}
if (num == sum)
	printf("It's an Armstrong Number");
else
	printf("Not an Armstrong Number");

// Fibonacci Series
int n, n1, n2, n3;
printf("Enter a Number: ");
scanf("%d", &n);
n1 = 0;
n2 = 1;
printf("%d\t%d\t", n1, n2);
for (int i = 2; i < n; ++i)
{
	n3 = n1 + n2;
	n1 = n2;
	n2 = n3;
	printf("%d\t", n3);
}

// Palindrome Digit or Not
int dig;
printf("Enter a Number: ");
scanf("%d", &dig);
int rev = 0;
for (int i = dig; i != 0; i /= 10)
{
	rev = (rev * 10) + (i % 10);
}
if (rev == dig)
	printf("Its Palindrome");
else
	printf("Not Palindrome");

// Factorial of Number
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

// power of a Number
int exp, base;
printf("Enter the Base & its Exponentiation: ");
scanf("%d %d", &base, &exp);
int ans = 1;
for (int i = 1; i <= exp; ++i)
	ans *= base;
printf("%d ^ %d = %d", base, exp, ans);
*/

// 10/09/2022 SAU

/*
int x = -1;
while(x++ == 1) printf("loop"); => nothing (since false condition)

// In while loop if there are multiple conditions consider last condition
// If they are comma seperated then consider last condition after last comma(,)

int i=0;
while(i<4,5){ 		//i<4 = 1 (true condition) =>while(1,5) => while(5){always true} [last condition]
	printf("loop");
	i++;
} => loop....infinite times

int i=0;
while(0,i<4){ //i<4 =1 while(0,1) =>while(1) i++ i++ i++ i++ =>i=4
	printf("loop"); //i<4 = 0 while(0,0) => while(0) while loop terminated
	i++;
} => looplooplooploop

// sizeof(NULL) =4

while(sizeof(NULL)) printf("loop");=>loop....infinite times //[while(4)]

while(!!7) printf("loop");=>loop....infinite times //!(!7) =!0 = 1 while(1)

// Ternary Operator

// exp 1? exp 2: exp 3;
// if exp 1 is true then exp 2 will execute
// else if exp 1 is false then exp 3 will execute

int i=0;
(i>5)?printf("+ve"):printf("-ve");
*/