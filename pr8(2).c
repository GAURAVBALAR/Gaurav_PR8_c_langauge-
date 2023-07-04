/*
Write a Program to find cubes of all elements from a given 2D array using Pointer with UDF.
For example,
Input:
Enter array's size: 2

Enter array elements:
a[0][0] = 3
a[0][1] = 2
a[1][0] = 5
a[1][1] = 4

Output:
Cubes of all elements:
9   4
25 64
*/

#include<stdio.h>

int arr(int i,int j){
	
int a[i][j];
	int n,m;
	for(n=0;n<i;n++){
		for(m=0;m<j;m++){
			printf("Enter the Elments of Array :a[%d][%d] => ",n,m);
			scanf("%d",&a[n][m]);
		}
	}
	int *b;
	for(n=0;n<i;n++){
		for(m=0;m<j;m++){
		a[n][m]=a[n][m]*a[n][m]*a[n][m];
		b=&a[n][m];
		printf("Cube of Element IS : %d\n",*b);	
		}
		
	}
	return b;
}

int main(){
	int i,j;
printf("Enter the size of Rows :");
	scanf("%d",&i);
	printf("Enter the size of Column :");
	scanf("%d",&j);
	arr(i,j);
	return 0;
}
