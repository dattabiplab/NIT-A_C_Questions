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