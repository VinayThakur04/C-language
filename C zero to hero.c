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
