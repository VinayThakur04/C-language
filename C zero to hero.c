//WAP to print your name without using variable!
#include<stdio.h>
#include<conio.h>
int main()
{
	printf("Vinay Kumar Thakur");
	return 0;
}
//WAP print your biodata like name , registration number , course name , city , state , contact number without using variable!
#include<stdio.h>
#include<conio.h>
int main()
{
	printf("Vinay Kumar Thakur\n");
	printf("00112233\n");
	printf("CSE 101\n");
	printf("Darbhanga\n");
	printf("Bihar\n");
	printf("9999999999\n");
	return 0;
}
// Wap write a program to print the value of int. , float , char. , and double data type variable!
#include<stdio.h>
#include<conio.h>
int main()
{
	int a=5;
	float b=5.14;
	char c='A';
	double d=15.110811;
	printf("%d" , a);
	printf("\n%f" , b);
	printf("\n%c" , c);
	printf("\n%lf" , d);
	return 0;
}
//WAP write a program a to calculate the addition of two number!
#include<stdio.h>
#include<conio.h>
int main()
{
	int a = 5;
	int b = 7;
	int sum = a + b;
	printf("%d", sum);
	return 0;
}
// WAp write a programe to calculate the subtraction , multiplication , and division!
#include<stdio.h>
#include<conio.h>
int main()
{
	int a = 7;
	int b = 5;
	int sub = a - b;
	int mul = a * b;
	int div = a / b;
	printf("%d", sub);
	printf("\n%d",mul);
	printf("\n%d",div);
	return 0;
}
//WAP write a programme to calculate the speed of car!
#include<stdio.h>
#include<conio.h>
void main()
{
	int d = 25;
	int t = 5;
	int s = d/t;
	printf("The speed of Car is %d km/h", s);
}
//WAP write a programme to calculate the speed of car!
#include<stdio.h>
#include<conio.h>
void main()
{
	int d,t,s;
	printf("Enter distance travelled by car in km\n");
	scanf("%d",&d);
	printf("Enter time taken by car in hr\n");
	scanf("%d",&t);
	s = d / t;
	printf("The speed of Car is %d km/h", s);
}
//WAP write a programme to take a number from user and do addition , subtraction , multiplaction , and division!
#include<stdio.h>
#include<conio.h>
int main()
{
	int a , b , add , sub , mul , div;
	printf("Type 1st number");
	scanf("%d", &a);
	printf("Type 2nd number");
	scanf("%d", &b);
	add = a + b;
	sub = a - b;
	mul = a * b;
	div = a / b;
	printf("Addition of Number %d\n",add);
	printf("Subtraction of Number %d\n",sub);
	printf("Multiplication of Number %d\n",mul);
	printf("Division of Number %d\n",div);
	return 0;
}
//WAP write a programme to ask a user to enter a biodata like reg.no , name , city , contact no , and cgpa!
#include<stdio.h>
#include<conio.h>
void main()
{
	char first_name[20];
	char middle_name[20];
	char last_name[20];
	char city[21];
	float cgpa;
	double reg[8],contact[10];
	
	printf("Enter reg.no ");
	scanf("%ls",&reg);
	
	printf("Enter first name ");
	scanf("%s",&first_name);
	
	printf("Enter middle name ");
	scanf("%s",&middle_name);
	
	printf("Enter last name ");
	scanf("%s",&last_name);
	
	printf("Enter city name ");
	scanf("%s",&city);
	
	printf("Enter contact no ");
	scanf("%ls",&contact);
	
	printf("Enter cgpa ");
	scanf("%f",&cgpa);
	
	printf("\nReg.no %ls\n",reg);
	printf("Name %s %s %s\n",first_name,middle_name,last_name);
	printf("City %s\n",city);
	printf("Contact no %ls\n",contact);
	printf("CGPA %.2f\n",cgpa);
	
}
// Use of Arithmetic operator like modulus!
#include<stdio.h>
#include<math.h>
int main()
{
	double x = 5.3,y = 2.0;
	double res = remainder(x, y);
	printf("Value of x is %0.2lf",res);
	return 0;

}
//Write a programme to use unary operaotr!
#include<stdio.h>
int main()
{
	int a=1,b=1,c;
	c = a++ + b;
	printf("%d,%d,%d",a,b,c);
	return 0;
}
//Use of Relational Operator!
#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g,h;
	printf("Enter the value for a ");
	scanf("%d",&a);
	printf("Enter the value for b ");
	scanf("%d",&b);
	c=a<b;
	printf("In (a<b) operation result = %d\n",c);
	d=a>b;
	printf("In (a>b) operation result = %d\n",d);
	e=a>=b;
	printf("In (a>=b) operation result = %d\n",e);
	f=a<=b;
	printf("In (a<=b) operation result = %d\n",f);
	g=a==b;
	printf("In (a==b) operation result = %d\n",g);
	h=a!=b;
	printf("In (a!=b) operation result = %d",h);
	return 0;
}
//Use of Logical operator!
#include<stdio.h>
int main()
{
	int x =1,y=0,z=5;
	int a=x&&y||z++;
	printf("%d",a);
	return 0;
}
//Use of Bitwise Operator!
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the value of a ");
	scanf("%d",&a);
	printf("Enter the value of b ");
	scanf("%d",&b);
	printf("a = %d, b=%d\n",a,b);
	printf("a&b=%d\n",a&b);
	printf("a|b=%d\n",a|b);
	printf("a^b=%d\n",a^b);
	printf("~a=%d\n",a = ~a);
	printf("b<<1=%d\n",b<<1);
	printf("b>>1=%d\n",b>>1);
	return 0;
}
//Use conditional operator , to find given number is even or odd.
#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	scanf("%d",&a);
	a%2==0 ? printf("Even") : printf("Odd");
}
//WAP to find or print the size of integer , character , array of character , float , and double data type!
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,d,e,f;
	char ch;
	char ar[10];
	float fg;
	double dob;
	b = sizeof(a);
	c = sizeof(ch);
	d = sizeof(ar);
	e = sizeof(fg);
	f = sizeof(dob);
	printf("The size of integer data type is %d\n",b);
	printf("The size of character data type is %d\n",c);
	printf("The size of array of character data type is %d\n",d);
	printf("The size of float data type is %d\n",e);
	printf("The size of double data type is %d",f);
	return 0;
}
//WAP to do arithmetic calculations
#include<stdio.h>
#include<conio.h>
int main()
{
	float b = 5 % 3 & 4 + 5 * 6;
	printf("%f",b);
	return 0;
	
}
// WAP write a programe to print Hello, World! in first line and in second line print the sentence that is input from user!
#include<stdio.h>
int main()
{
    char a[100];
    gets(a);  //it take sentence as an input from user
    printf("Hello, World!\n%s",a);
    return 0;
}
// WAP You have to print the character,ch, in the first line. Then print s in next line. In the last line print the sentence, sen!
#include <stdio.h>

int main(){
    char ch;
    char str[50];
    char sentence[100];

    scanf("%c", &ch);
    scanf("%s", str);
    scanf(" %[^\n]s", sentence);

    printf("%c\n", ch);
    printf("%s\n", str);
    printf("%s", sentence);

    return 0;
}
//WAP to find grade of a student marks!
#include<stdio.h>
#include<conio.h>
int main()
{
	float marks;
	printf("Enter the marks ");
	scanf("%f",&marks);
	if (marks > 90 && marks <=100){
		printf("Grade A");
	}
	else if(marks > 80 && marks <= 90){
		printf("Grade B");
	}
	else if(marks > 70 && marks <= 80){
		printf("Grade C");
	}
	else if(marks > 60 && marks <= 70){
		printf("marks D");
	}
	else
		printf("Fail");
	return 0;
	
}
//Given a positive integer denoting , do the following:
//If 1 <=n<=9, print the lowercase English word corresponding to the number (e.g., one for 1, two for 2, etc.).
//Ifn>9 , print Greater than 9.

#include <stdio.h>

int main()
{
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n == 1)
        printf("one");
    else if (n == 2)
        printf("two");
    else if (n == 3)
        printf("three");
    else if (n == 4)
        printf("four");
    else if (n == 5)
        printf("five");
    else if (n == 6)
        printf("six");
    else if (n == 7)
        printf("seven");
    else if (n == 8)
        printf("eight");
    else if (n == 9)
        printf("nine");
    else
        printf("Greater than 9");

    return 0;
}
//using for loop For each integer  in the interval  (given as input) : If 1<= n < <=9, then print the English representation
// of it in lowercase. That is "one" for 1, "two" for 2, and so on.Else if n>9 and it is an even number, then print "even".
//Else if n>9 and it is an odd number, then print "odd".
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
    for(int i=a; i<=b; i++)
    {
        if(i>=1 && i<=9){
            if(i==1)
                printf("one\n");
            else if(i==2)
                printf("two\n");
            else if(i==3)
                printf("three\n");
            else if(i==4)
                printf("four\n");
            else if(i==5)
                printf("five\n");
            else if(i==6)
                printf("six\n");
            else if(i==7)
                printf("seven\n");
            else if(i==8)
                printf("eight\n");
            else
                printf("nine\n");
        }
        else{
            if(i%2==0)
                printf("even\n");
            else
                printf("odd\n");
        }
    }
    return 0;
}
/*
* Converts distances from miles to kilometers.
*/

#include<stdio.h>
#define KMS_PER_MILE 1.609
int main(void)
{
	double miles,kms; //distance in miles
	/* Get the distances in miles. */
	printf("Enter the distances in miles > ");
	scanf("%lf", &miles);
	
	/* Converts the distance to kilometers. */
	kms = KMS_PER_MILE * miles;
	
	/* Display the distance in kilometer. */
	printf("That equals %f kilometers.\n",kms);
	
	return 0;
}
//WAP to find largest number!
#include<stdio.h>
#include<math.h>
int main()
{
	int n1,n2,n3;
	printf("Enter n1 value ");
	scanf("%d",&n1);
	printf("Enter n2 value ");
	scanf("%d",&n2);
	printf("Enter n3 value ");
	scanf("%d",&n3);
	
	// If all numbers are different!
	if(n1>n2 & n1>n3){
		printf("%d",n1);
	}
	else if(n2>n3 & n2>n1){
		printf("%d",n2);
	}
	else if(n3>n1 & n3>n2){
		printf("%d",n3);
	}
	// If two numbers are same!
	else if(n1 == n2 & n1 > n3){
		printf("Two numbers are same which is %d",n1);
	}
	else if(n1 == n3 & n1 > n2){
		printf("Two numbers are same which is %d",n1);
	}
	else if(n2 == n3 & n2 > n1){
		printf("Two numbers are same which is %d",n2);
	}
	// If all numbers are same!
	else
		printf("All numbers are same");

	return 0;
}
//WAP to calculate the square of those numbers only whose least significant digit is 5.
#include<stdio.h>
#include<math.h>
void main()
{
	int s,d;
	printf("\n Enter a Number :");
	scanf("%d",&s);
	d = s%10;
	if(d==5)
	{
		s=s/10;
		printf("\n Square = %d%d",s*s++,d*d);
	}
	else
		printf("\n Invalid Number");
}
//WAP to find out the smallest number out of three variables using nasted if statement!
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter 1st number: ");
	scanf("%d",&a);
	printf("Enter 2nd number: ");
	scanf("%d",&b);
	printf("Enter 3rd number: ");
	scanf("%d",&c);
	if(a<b)
	{
		if(a<c){
			printf("A is smaller than b & c");
		}
		else{
			printf("A is smaller than B but not C");
		}
	}
	else
	printf("A is not smaller than B & C");
}
//WAP to find out smaller number out of three variables using if else!
#include<stdio.h>
int main()
{
	int a,b,c,smaller;
	printf("Enter 1st number: ");
	scanf("%d",&a);
	printf("Enter 2nd number: ");
	scanf("%d",&b);
	printf("Enter 3rd number: ");
	scanf("%d",&c);
	if(a<b && a<c)
	{
		printf("%d",a);
	}
	if(b<a && b<c)
	{
		printf("%d",b);
	}
	if(c<a && c<b)
	{
		printf("%d",c);
	}
	return 0;
	
}
//WAP to print the days of the week using switch statement.
#include<stdio.h>
int main()
{
	int w;
	printf("Enter a number between 0 to 6:");
	scanf("%d",&w);
	switch(w){
		case 0:
			printf("\n Sunday");
		break;
		case 1:
			printf("\n Monday");
		break;
		case 2:
			printf("\n Tuesday");
		break;
		case 3:
			printf("\n Wednesday");
		break;
		case 4:
			printf("\n Thrusday");
		break;
		case 5:
			printf("\n Friday");
		break;
		case 6:
			printf("\n Saturday");
		break;
		default:
			printf("Invalid number");
	}
return 0;
}
//WAP to print fruits name from A to E.
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a number:");
	scanf("%c",&ch);
	switch(ch){
		case 'A':
			printf("\n Apple");
		break;
		case 'B':
			printf("\n Banana");
		break;
		case 'C':
			printf("\n Caimito");
		break;
		case 'D':
			printf("\n Date");
		break;
		case 'E':
			printf("\n Elderberry");
		break;
		default:
			printf("Invalid number");
	}
return 0;
}
// Loop Started

//WAP to print numbers upto n given by user.
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	while (n>0){
		printf("%d\n",n);
		n--;
	}
	return 0;
}
//WAP to print descending numbers upto 10 started by user input.
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	while (n<=10){
		printf("%d\n",n);
		n++;
	}
	return 0;
}
//WAP a program to print the table entered by the user using while loop
#include<stdio.h>
int main()
{
	int a=1,n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	while (a<=10){
		printf("%d * %d = %d\n",n,a,a*n);
		a++;
	}
	return 0;
}
//WAP a program to print the number entered by the user using do while loop
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	do{
		printf("%d\n",n);
		n--;
	}
	while (n>0);
	return 0;
}
//WAP a program to print the table entered by the user using do while loop
#include<stdio.h>
int main()
{
	int a=1,n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	do{
		printf("%d * %d = %d\n",n,a,a*n);
		a++;
	}
	while (a<=10);
	return 0;
}
//WAP a program to print the table entered by the user using for loop
#include<stdio.h>
int main()
{
	int a=1,n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	for(a=1;a<=10;a++){
		printf("%d * %d = %d\n",n,a,a*n);
	}
	return 0;
}
//WAP to find weather the number is even or odd if it is even print the table of that and if it is odd number find the square root of that!
#include<stdio.h>
#include<math.h>
int main()
{
	int n,a=1;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	if (n%2==0){
		printf("Number is even\n");
		while (a<=10){
		printf("%d * %d = %d\n",n,a,a*n);
		a++;
		}
	}
	else
	printf("Number is odd So Square root of %d is %.2f",n,sqrt(n));
	return 0;
}
 //WAP a to calculate the sum of 1st n natural numbers using for loop!
#include<stdio.h>
int main()
{
	int i,n,sum = 0;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum = sum + i;
	}
	printf("The sum of %d natural number is %d",n,sum);
	return 0;
}
//Given a five digit integer, print the sum of its digits.
#include <stdio.h>
#include <math.h>

int main()
{
    int n,sum = 0 , remainder;
    scanf("%d", &n);
    while(n>0){
        remainder = n % 10;
        sum = sum + remainder;
        n = n / 10;
    }
    printf("%d",sum);
    return 0;
}
#include <stdio.h>
 //it is also called as ternary operator
 //one line statement of if-else
 
int main()
{
    int age;
    printf("Enter the value of age: ");
    scanf("%d",&age);
    (age>=18)?printf("can cast vote"):printf("cannot cast vote");
    return 0;
}
//WAP to find the factorial of 1 to n numbers!
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i;
	int pro=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		pro = pro * i;
	}
	printf("%d",pro);
	return 0;
}
//WAP to find the photo is accepted or not for n times!
#include <stdio.h>

int main() {
    int L, N, W, H;
    scanf("%d", &L); // read L from input required size
    scanf("%d",&N);  //N from input numbers of photo

    for (int i = 0; i < N; i++) {
        scanf("%d %d", &W, &H); // read the width and height of the photo from input
        if (W < L || H < L) {
            printf("UPLOAD ANOTHER\n");
        } else if (W == H) {
            printf("ACCEPTED\n");
        } else {
            printf("CROP IT\n");
        }
    }

    return 0;
}
//WAP to ask the user to enter the values of to dimensional array and display them in the form of matrix!
#include<stdio.h>
int main(){
	int r,c,i,j;
	printf("Enter the value of rows and columns: ");
	scanf("%d %d",&r,&c);
	int a[r][c];
	printf("Enter the values for matrix: \n");
	for (i=0;i<r;i++){
		for (j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Output of matrix\n");
	for (i=0;i<r;i++){
		for (j=0;j<c;j++){
			
			printf("%d\t",a[i][j]);
			}
			printf("\n");
		}
	return 0;
}