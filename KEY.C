#include<stdio.h>
#include<conio.h>
void main(void){
char x;
flushall();
clrscr();
x= getch();
if(x!=NULL){
printf("this is normal key and its code is : %d \n",x);
}
else{
x=getch();
printf("this is extended key with code:%d",x);}

 getch();
}