# include<stdio.h>
#include <conio.h>
void main(void){
char arr[5];
int i;
 clrscr();
 for(i=0;i<5;i++){
  printf("inter the element number %d :",i);
  flushall();
  scanf("%c",arr[i]);
 }
 for(i=0;i<5;i++){
 printf("%c ",arr[i]);
 }
 getch();
}