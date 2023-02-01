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
//Write a programme to use unary operaotr!
#include<stdio.h>
int main()
{
	int a=1,b=1,c;
	c = a++ + b;
	printf("%d,%d,%d",a,b,c);
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
