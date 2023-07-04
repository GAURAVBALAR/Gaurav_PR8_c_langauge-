/* Write a Program to find the length of a string using a Pointer.
For example,
Input:
Enter any string: hello world

Output:
The length of a string is: 11
*/



#include<stdio.h>

void main(){
	char s[100];
	//Declaration of string 
	printf("Enter your string :");
	gets(s);
	char *p;
	p=s;
	int count=0;
	//Calculating lenght of string using null point
	while(*p!='\0'){
		count++;
		p++;
	}
	//Length of string
	printf("The Length Of the given String Is : %d",count);	
}
