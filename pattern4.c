#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	int i,j,n,x,y,m=0;
	char a[20],c[10][10];
	printf("N:");
	gets(a);
	n=strlen(a);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==j){
				c[i][j]=a[m];
				m++;
			}
			else{
				c[i][j]='\0';
			}
		}
	}
	i=n-1;
	m=0;
	for(j=0;j<n;j++){
		c[i][j]=a[m];
		i--;
		m++;
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%c",c[i][j]);
		}
		printf("\n");
	}
	getch();
}

