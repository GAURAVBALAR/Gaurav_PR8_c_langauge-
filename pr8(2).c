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
