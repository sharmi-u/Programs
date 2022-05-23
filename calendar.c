#include<stdio.h>
#include<string.h>
int main(){
	int n,i=0,j=0,k=0,monvar,h=0,month,year,y1,yearvalue,final;
	char w[10],d[10],m[10],y[10000],lo[100];
	gets(w);
	for(i=0;w[i]!='.';i++,j++)
	d[j]=w[i];
	d[j]='\0';
	for(j=++i,i=0;w[j]!='.';j++,i++)
	m[i]=w[j];
	m[i]='\0';
	for(k=++j,i=0;w[k]!='\0';k++,i++)
	y[i]=w[k];
	y[i]='\0';
		printf("Date:%s\n",d);
		printf("Month:%s\n",m);
		printf("Year:%s\n",y);
		month=atoi(m);
			   if(month==1){
				monvar=0;
			}   else if(month==2){
			   	monvar=3;
			}   else if(month==3){
				monvar=3;
			}	else if(month==4){
				monvar=6;
			}	else if(month==5){
				monvar=1;
			}	else if(month==6){
				monvar=4;
			}	else if(month==7){
				monvar=6;
			}	else if(month==8){
				monvar=2;
			}	else if(month==9){
				monvar=5;
			}	else if(month==10 ){
				monvar=0;
			}	else if(month==11){
				monvar=3;
			}	else if(month==12){
				monvar=5;
			}
			y1=atoi(y);
		if(atoi(y)>=1600 && atoi(y)<=1699){
			yearvalue=6;
		}
		else if(atoi(y)>=1700 && atoi(y)<=1799){
			yearvalue=4;
		}
		else if(atoi(y)>=1800 && atoi(y)<=1899){
			yearvalue=2;
		}
		else if(atoi(y)>=1900 && atoi(y)<=1999){
			yearvalue=0;
		}
		else if(atoi(y)>=2000 && atoi(y)<=2099){
			yearvalue=6;
		}
		for(i=2,j=0;i<strlen(y);i++,j++){
			lo[j]=y[i];
		}
		year=atoi(lo)/4;
		
			h=atoi(d)+monvar+atoi(lo)+year+yearvalue;
			final=h%7;
			if((y1%4 ==0) && ((y1 % 400 == 0) || (y1%100!=0)))
			{
			if(month==1 || month==2){
				final=final-1;
			}
			else{
				final=final+0;
			}
			}
			else{
				final=final;
			}
			if(final == 0){
				printf("Sunday");
			}
			else if(final ==1){
				printf("Monday");
			}
		    else if(final==2){
				printf("Tuesday");
			}
			else if(final==3){
				printf("Wednesday");
			}
			else if(final==4){
				printf("Thursday");
			}
			else if(final==5){
				printf("Friday");
			}
			else if(final==6 || final == -1){
				printf("Saturday");
			}
		}
