#include<stdio.h>
#include<conio.h>

void main(void){
int x=0;
clrscr();
printf("the minue is :\n1-temperature\n2-pressure\n3-flow\n4-cancel\n");
while(x!=4){
scanf("%d",&x);
switch (x){
case 1:
printf("temerature");
break;
case 2:
printf("pressure");
break;
case 3:
printf("flow");
break;
}
}
}
