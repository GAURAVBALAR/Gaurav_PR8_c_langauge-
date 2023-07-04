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
