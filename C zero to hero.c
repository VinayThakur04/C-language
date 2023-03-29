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
//WAP to perform the addidion of two matrix
#include<stdio.h>
int main()
{
	int r,c,i,j;
	printf("Enter a value for rows and columns you want: ");
	scanf("%d %d",&r,&c);
	int a[r][c];
	printf("Enter a value for 1st matrix:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
	/*Second matrix input code*/
	int b[r][c];
	printf("Enter a value for 2nd matrix:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&b[i][j]);
		}
	}
	/*Addition of two matrix*/
	int sum[r][c];
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			sum[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("Final matrix after addition:\n");
	/*printing of final matrix*/
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d\t",sum[i][j]);
		}
		/*for printing in matrix form we use \n for nxt line printing*/
		printf("\n");
	}
	return 0;
}
//WAP to perform the substriction of two matrix
#include<stdio.h>
int main()
{
	int r,c,i,j;
	printf("Enter a value for rows and columns you want: ");
	scanf("%d %d",&r,&c);
	int a[r][c];
	printf("Enter a value for 1st matrix:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
	/*Second matrix input code*/
	int b[r][c];
	printf("Enter a value for 2nd matrix:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&b[i][j]);
		}
	}
	/*Substriction of two matrix*/
	int sub[r][c];
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			sub[i][j]=a[i][j]-b[i][j];
		}
	}
	printf("Final matrix after substriction:\n");
	/*printing of final matrix*/
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d\t",sub[i][j]);
		}
		/*for printing in matrix form we use \n for nxt line printing*/
		printf("\n");
	}
	return 0;
}
//WAP to perform the multiplication of two matrix
#include<stdio.h>
int main()
{
	int r,c,i,j,k;
	printf("Enter a value for rows and columns you want: ");
	scanf("%d %d",&r,&c);
	int a[r][c];
	printf("Enter a value for 1st matrix:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
	/*Second matrix input code*/
	int b[r][c];
	printf("Enter a value for 2nd matrix:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&b[i][j]);
		}
	}
	/*Multiplication of two matrix*/
	int mul[r][c];
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			mul[i][j]=0;    
			for(k=0;k<c;k++)    
			{    
			mul[i][j]+=a[i][k]*b[k][j];    
			}
		}
	}
	printf("Final matrix after multiplication:\n");
	/*printing of final matrix*/
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d\t",mul[i][j]);
		}
		/*for printing in matrix form we use \n for nxt line printing*/
		printf("\n");
	}
	return 0;
}

//WAP to find the sum of diagonal elements of matrix.
int main(){
	int r,c,i,j,sum=0;
	printf("Enter the value of rows and columns: ");
	scanf("%d %d",&r,&c);
	int a[r][c];
	printf("Enter the values for matrix: \n");
	for (i=0;i<r;i++){
		for (j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
	//printing of addition of sum of diagonal elements of matrix
	for (i=0;i<r;i++){
		for (j=0;j<c;j++){
			
			printf("%d\t",a[i][j]);
			}
			printf("\n");
		}
	//Sum of diagonals and printing
	for (i=0;i<r;i++){
		for (j=0;j<c;j++){
			if(i==j)
			sum=sum+a[i][j];
			}
		}
	printf("Sum of Diagonal elemants:%d",sum);
	return 0;
}
//WAP tp print transpose of matrix
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
		
	printf("Output of transpose matrix\n");
	for (i=0;i<r;i++){
		for (j=0;j<c;j++){
			
			printf("%d\t",a[j][i]);
			}
			printf("\n");
		}
	return 0;
}

//create an array of size  dynamically, and read the values from stdin. Iterate the array
//calculating the sum of all elements. Print the sum and free the memory where the array is 
//stored c programming.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n; // variable to hold the size of the array
    int *arr; // pointer to hold the address of the dynamically allocated array
    int sum = 0; // variable to hold the sum of the array elements

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    arr = (int*) malloc(n * sizeof(int)); // dynamically allocate the array

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("The sum of the array elements is %d\n", sum);

    free(arr); // free the dynamically allocated memory

    return 0;
}
//WAP to print stars in right angled triangle pattern!
#include<stdio.h>
int main(){
	int j,i,a;
	printf("enter the number for right angled triangle: ");
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		for(j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
//WAP to print stars in inverted right angled triangle pattern!
#include<stdio.h>
int main(){
	int j,i,a;
	printf("enter the number for right angled triangle: ");
	scanf("%d",&a);
	for(i=a;i>0;i--){
		for(j=i;j>0;j--){
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
//WAP to use break statement!
#include<stdio.h>
int main(){
	int j,i,a;
	printf("enter the number: ");
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		printf("%d\n",i);
		if(i==10){
			break;
		}
	}
	return 0;
}
//WAP to use continue statement!
#include<stdio.h>
int main(){
	int j,i,a,b;
	printf("enter the number for i: ");
	scanf("%d",&a);
	printf("\nenter the number for j: ");
	scanf("%d",&b);
	for(i=1;i<a;i++){
		for(j=1;j<b;j++){
			if(j==2){
				continue;
			}
			printf("%d\n",j);
		}
	}
	return 0;
}
//WAP to use goto statement!
#include<stdio.h>
int main(){
	int i;
	for(i=1;i<5;i++){
		if(i==2){
		goto there;
		}
		printf("%d\n",i);
	}
	there:
		printf("two\n");
		for (i=1;i<=10;i++){
			printf("2 * %d = %d\n",i,2*i);
		}
	return 0;
}
//WAP to use function to print integer value of character!
#include<stdio.h>
int func(char ascii){
	return ((int)ascii);
}
int main(){
	int ascii;
	char ch;
	printf("Enter any ascii value in character=");
	scanf("%c",&ascii);
	ch=func(ascii);
	printf("The character is = %d",ch);
	return 0;
}
//WAP to use function to print character of for given integer!
#include<stdio.h>
char func(int ascii){
	return ((char)ascii);
}
int main(){
	int ascii;
	char ch;
	printf("Enter any ascii value in decimal=");
	scanf("%d",&ascii);
	ch=func(ascii);
	printf("The character is = %c",ch);
	return 0;
}
//Write a function to print max of four numbers!
#include<stdio.h>
	int max_of_four_numbers(int a,int b,int c,int d){
	int max = a;
	if(b > max)
	max = b;
	if(c > max)
	max = c;
	if(d > max)
	max = d;
	return max;	
	}
	int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four_numbers(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
//You have been given 3 integers - l, r and k. Find how many numbers between l and r
 //(both inclusive) are divisible by k. You do not need to print these numbers, you 
 //just have to find their count.
 #include<stdio.h>
int main(){
	int l,r,k,i,num=0;
	scanf("%d %d %d",&l,&r,&k);
	for(i=l;i<=r;i++){
		if(i%k == 0){
			num++;
		}
		else
			continue;	
	}
	printf("%d",num);
	return 0;
}
/*In this HackerRank Bitwise operators in the c programming problem solution, In this challenge,
 you will use logical bitwise operators. All data is stored in its binary representation. The logical 
 operators, and C language, use 1 to represent true and 0 to represent false. The logical operators 
 compare bits in two numbers and return true or false, 0 or 1, for each bit compared.*/
 #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.
void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int maxAnd = 0, maxOr = 0, maxXor = 0, i, j;
  for(i=1; i<=n; i++){
      for(j=i+1; j<=n; j++){
          if(((i&j) > maxAnd) && ((i&j) < k)){
              maxAnd = i&j;
          }
          if(((i|j) > maxOr) && ((i|j) < k)){
              maxOr = i|j;
          }
          if(((i^j) > maxXor) && ((i^j) < k)){
              maxXor = i^j;
          }
      }
  }
  printf("%d\n%d\n%d\n",maxAnd, maxOr, maxXor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
//WAP to convert one datatype to another datatype automatically!
#include<stdio.h>
int main(){
	float average, total;
	int counter;
	printf("Enter the float value for total: \n");
	scanf("%f",&total);
	printf("Enter the integer value for counter: \n");
	scanf("%d",&counter);
	average = total / counter;
	printf("The average of number is: %f",average);
	return 0;
}
//WAP to convert data type to another datatype forcefully!
#include<stdio.h>
int main(){
	int average, total;
	float counter;
	printf("Enter the integer value for total: \n");
	scanf("%d",&total);
	printf("Enter the float value for counter: \n");
	scanf("%f",&counter);
	average = total / (int)counter;
	printf("The average of number is: %d",average);
	return 0;
}
//WAP to count string in n times!
#include<stdio.h>
#include<string.h>
int sollution(char s[], char k){
	int count = 0,i;
	for(i=0;i<strlen(s);i++){
		if(s[i]==k){
			count++;
		}
	}
	return count;
}
int main(){
	int t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		char s[100000],k;
		scanf("%s\n%c",&s,&k);
		int result = sollution(s,k);
		printf("%d\n",result);
	}
	return 0;
}

//FUNCTION STARTED!

/*In number theory, a palindromic prime number is a positive integer where the number
 is both palindrome number as well as prime number. You are given an integer n. 
 Print "YES" (without quotes) if the given number is palindromic prime number, 
 print "NO" (without quotes) otherwise in c language.*/
 #include <stdio.h>

// Function to check if a number is prime
int isPrime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

// Function to check if a number is palindromic
int isPalindrome(int n) {
    int temp = n, reversed = 0;
    while (temp > 0) {
        reversed = (reversed * 10) + (temp % 10);
        temp /= 10;
    }
    return (n == reversed);
}

// Main function
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPrime(n) && isPalindrome(n)) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }

    return 0;
}
//WAP to perform multiplication
#include<stdio.h>
int square(int y)//function prototype | defination
{
	return y * y;
}
int sum(int y){
	return y + y;
}
int main(){
	int x;
	for(x=1;x<=10;++x){
		printf("%d ",square(x));//function call
		printf("%d\n",sum(x));
	}
	return 0;
}
//WAP to change the value of number and perform multiplication!
#include<stdio.h>
int cubebyreferance(int *n){
	*n = *n * *n * *n;
	return *n;
}
int main(){
	int number;
	printf("Enter the number: ");
	scanf("%d",&number);
	printf("The original value of number is %d\n",number);
	cubebyreferance(&number);
	printf("The new value of number is %d", number);
	return 0;
}
//WAP to perform the addition of two number by call by referance function
int sumbyref(int *x , int *y){
	*x = *x + *y;
	return *x;
}
int main(){
	int a , b;
	printf("Enter the 1st number: ");
	scanf("%d",&a);
	printf("Enter the 2nd number: ");
	scanf("%d",&b);
	printf("The entered number is %d and %d\n",a ,b);
	sumbyref(&a , &b);
	printf("The new value of number is %d", a);
	return 0;
}
//WAP to use function loop
#include<stdio.h>
int fact(int x){
	if(x==0){
		return 1;
	}
	else{
		return x*fact(x-1);
	}
}
int main(){
	int n,result;
	printf("Enter number: ");
	scanf("%d",&n);
	result = fact(n);
	printf("%d",result);
	return 0;
}
//WAP to use auto memory location
#include<stdio.h>
void func1(){
	auto int a=10; //local variable of function()
	printf("\n a=%d",a);
}
void func2(){
	auto int a = 20;//local variable of fumction2()
	printf("\n a=%d",a);
}
int main(){
	auto int a = 30;
	func1();
	func2();
	printf("\n a=%d",a);
	return 0;
}
//WAP to use auto and static variable!
#include<stdio.h>
void function(){
	int a =10;
	static int b =10;
	printf("\n Value of a:%d, Value of b:%d",a,b);
	a++;
	b++;
}
int main(){
	function();
	function();
	function();
	return 0;
}
//WAP to use external variable
#include<stdio.h>
void first(){
	extern int x;
	printf("\nx=%d",x);
	x+=10;
}
int main(){
	extern int x;
	printf("\nx=%d",x);
	first();
	printf("\nx=%d",x);
	return 0;
}
int x=10;
//WAP to use external programme in this programme (part 1)
#include<stdio.h>
#include"extern2.c" //global variable
int x=30;
int main(){
	print();
	printf("%d",x);
	return 0;
}
//External programme (part 2)
void print(){
	extern int x;
	printf("%d\n",x);
	x+=10;
}
//WAP to print a table of any number using global variable , find weather the num is even or odd using local variable and find weather the num is negative or postive using block scoped variable!
int num;
int main(){
	printf("Enter a number: ");
	scanf("%d",&num);
	
	//table of any number using global variable
	for(int i=1;i<=10;i++){
		printf("%d X %d = %d\n",num,i,num*i);
	}
	
	//weather the num is even or odd using local variable
	if(num%2==0){
		printf("Even\n");
	}
	else{
		printf("Odd\n");
	}

	//block scoped
	{
	if(num>0){
		printf("Positive");
	}
	else if(num<0){
		printf("Negative");
	}
	else{
		printf("Zero");
	}
	}
	
	return 0;
}
//find the nth term
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
  //Write your code here.
    if(n==1){
        return a;
    }
    else if(n==2){
        return b;
    }
    else if(n==3){
        return c;
    }
    else{
        return find_nth_term(n-1,a,b,c) + find_nth_term(n-2,a,b,c) + find_nth_term(n-3,a,b,c);
    }
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}
//Printing array
#include<stdio.h>
int main(){
	int a[100],n,i;
	printf("\nEnter number of elements:");
	scanf("%d",&n);
	printf("\n Enter array elemants:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	printf("\nEntered array elements are:\n");
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
	return 0;
}
//printing base address of an array
#include<stdio.h>
int main(){
	int a[5]={1,2,3,4,5};
	int i;
	printf("\n Printing base address of the array:");
	printf("\n%u %u %u",&a[0],a,&a);
	printf("\n Printing addresses of all array elements:");
	for(i=0;i<5;i++){
		printf("\n%u",&a[i]);
	}
	return 0;
}
//find max and min numbers
#include<stdio.h>
int main(){
	int a[10],n,i,max,min;
	printf("Enter number of elements: \n");
	scanf("%d",&n);
	printf("Enter array elements: \n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	min = a[0];
	for(i=1;i<n;i++){
		if(a[i]<min){
		min = a[i];}
	}
	
	max = a[0];
	for(i=1;i<n;i++){
		if(a[i]>max){
		max = a[i];
		}
}
	printf("Min:%d , Max:%d",min,max);
	return 0;
}
//WAP function to to call by reference!
#include<stdio.h>
void reference(int x[],int size){
	int i;
	for(i=0;i<size;i++){
		printf("%d",x[i]);
	}
}

int main(){
	int arr[100],n;
	int i;
	printf("Enter n: \n");
	scanf("%d",&n);
	printf("Enter array elements: ");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("\nElements by reference:");
	reference(arr,n);
	return 0;
}
//WAP function to to call by value!
#include<stdio.h>
void value(int x[]){
	printf("\n%d",x);
}

int main(){
	int arr[100],n;
	int i;
	printf("Enter n: \n");
	scanf("%d",&n);
	printf("Enter array elements: ");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("\npassing Elements by value:");
	for(i=0;i<n;i++){
		value(arr[i]);
	}
	return 0;
}
//WAP to insert an element from a given position in 1D array
#include<stdio.h>
int main(){
	int array[100],position,c,n,value;
	printf("Enter number of elements in array:\n");
	scanf("%d",&n);
	printf("Enter %d elements:\n",n);
	for(c=0;c<n;c++){
		scanf("%d",&array[c]);
	}
	printf("Enter the location where you wish to insert an element:\n");
	scanf("%d",&position);
	
	printf("Enter the value to be inserted:");
	scanf("%d",&value);
	
	for(c=n-1;c>=position - 1;c--){
		array[c+1]=array[c];
	}
	array[position-1]=value;
	
	printf("Resultant array is:\n");
	for(c=0;c <= n;c++){
		printf("%d\n",array[c]);
	}
	return 0;
}
//WAP to find to delete an element from a given position in 1D array
#include<stdio.h>
int main(){
	int array[100],position,c,n,value;
	printf("Enter number of elements in array:\n");
	scanf("%d",&n);
	printf("Enter %d elements:\n",n);
	for(c=0;c<n;c++){
		scanf("%d",&array[c]);
	}
	printf("Enter the location where you wish to delete from an array:\n");
	scanf("%d",&position);
	for(c=position-1;c<n-1;c++){
		array[c]=array[c+1];
	}
	printf("Resultant array is:\n");
	for(c=0;c<n-1;c++){
		printf("%d\n",array[c]);
	}
	return 0;
}
//WAP to ask the user to perform  insertion and deletion operation in 1D array using switch case
#include<stdio.h>
int main(){
	int array[100],position,c,n,value,w;
	printf("Enter number of elements in array:\n");
	scanf("%d",&n);
	printf("Enter %d elements:\n",n);
	for(c=0;c<n;c++){
		scanf("%d",&array[c]);
	}
	
	printf("Which operation you want to do press 1 for Insertion and 2 for Deletion: \n");
	scanf("%d",&w);
	switch(w){
		case 1:
			printf("Enter the location where you wish to insert an element:\n");
			scanf("%d",&position);
	
			printf("Enter the value to be inserted:");
			scanf("%d",&value);
	
			for(c=n-1;c>=position - 1;c--){
			array[c+1]=array[c];
			}
			array[position-1]=value;
	
			printf("Resultant array is:\n");
			for(c=0;c <= n;c++){
				printf("%d\n",array[c]);}
		break;
		case 2:
			printf("Enter the location where you wish to delete from an array:\n");
			scanf("%d",&position);
			for(c=position-1;c<n-1;c++){
				array[c]=array[c+1];
			}
			printf("Resultant array is:\n");
			for(c=0;c<n-1;c++){
			printf("%d\n",array[c]);
			}
		break;
	}
	return 0;
}

//WAP to find the position of user inputed number in array using linear search!
#include<stdio.h>
int main(){
	int a[50],n,key;
	int i,loc = -1;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	printf("Enter %d elements:\n",n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter integer value to search inarray");
	scanf("%d",&key);
	
	for(i=0;i<n;i++){
		if(a[i]==key){
			loc=i;
			break;
		}
	}
	if(loc!=-1){
		printf("Element is present in %d position",loc+1);
	}
	else
	printf("Element not Found");
	return 0;
}
//WAP to find the position of user inputed number in array using Binary search!
#include<stdio.h>
int main(){
	int a[50],n,key,beg,last,mid;
	int i,loc = -1;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	printf("Enter %d elements:\n",n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	beg=0;
	last = n-1;
	printf("Enter integer value to search in sorted array: ");
	scanf("%d",&key);
	while(beg<=last){
		mid=(beg + last)/2;
		if(a[mid]==key){
			loc = mid;
			break;
		}
	else if(a[mid]>key){
		last = mid-1;
	}
	else if(a[mid]<key){
		beg = mid+1;
	}
	}
	if(loc!=-1){
		printf("Element is present in %d position",loc+1);
	}
	else
	printf("Element not Found");
	
	return 0;
}
//WAP to bobble short the input number from the user!
#include<stdio.h>
int main(){
	int a[100],hold,i,j,n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	printf("Enter %d elements:\n",n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Data items in original order");
	for(i=0;i<n;i++){
		printf("%d",a[i]);
	}
	
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1;j++){
			if(a[j]>a[j+1]){
				hold = a[j];
				a[j]=a[j+1];
				a[j+1]=hold;
			}
			}
	}
	printf("\nData items are in accending form:");
		for(i=0;i<n;i++){
		printf("%d,",a[i]);
	}
	return 0;
}
//WAP to ask the user to enter any random numbers then apply bobble shot to arrange it and then perform binary search on it!
#include<stdio.h>
int main(){
	int a[100],hold,i,j,n,key,beg,last,mid,loc = -1;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	printf("Enter %d elements:\n",n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Data items in original order");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1;j++){
			if(a[j]>a[j+1]){
				hold = a[j];
				a[j]=a[j+1];
				a[j+1]=hold;
			}
			}
	}
	printf("\nData items are in accending form:");
		for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	beg=0;
	last = n-1;
	printf("\nEnter integer value to search in sorted array: ");
	scanf("%d",&key);
	while(beg<=last){
		mid=(beg + last)/2;
		if(a[mid]==key){
			loc = mid;
			break;
		}
	else if(a[mid]>key){
		last = mid-1;
	}
	else if(a[mid]<key){
		beg = mid+1;
	}
	}
	if(loc!=-1){
		printf("Element is present in %d position",loc+1);
	}
	else
	printf("Element not Found");
	return 0;
}
//WAP to perform sorting ,linear search and binary with switch case!
#include<stdio.h>
int main(){
	int a[100],hold,i,j,n,key,beg,last,mid,loc = -1,w;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	printf("Enter %d elements:\n",n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Data items in original order");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\nEnter 1 for Linear Search and 2 for Binary Search: ");
	scanf("%d",&w);
switch(w){
		case 1:
			printf("Enter integer value to search inarray");
	scanf("%d",&key);
	
	for(i=0;i<n;i++){
		if(a[i]==key){
			loc=i;
			break;
		}
}
	if(loc!=-1){
		printf("Element is present in %d position",loc+1);
	}
	else
	printf("Element not Found");
		break;
		case 2:
			for(i=0;i<n-1;i++){
		for(j=0;j<n-1;j++){
			if(a[j]>a[j+1]){
				hold = a[j];
				a[j]=a[j+1];
				a[j+1]=hold;
			}
			}
	}
	printf("\nData items are in accending form:");
		for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	beg=0;
	last = n-1;
	printf("\nEnter integer value to search in sorted array: ");
	scanf("%d",&key);
	while(beg<=last){
		mid=(beg + last)/2;
		if(a[mid]==key){
			loc = mid;
			break;
		}
	else if(a[mid]>key){
		last = mid-1;
	}
	else if(a[mid]<key){
		beg = mid+1;
	}
	}
	if(loc!=-1){
		printf("Element is present in %d position",loc+1);
	}
	else
	printf("Element not Found");
		break;
	}
	
	return 0;
}