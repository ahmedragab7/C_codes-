#include <conio.h>
#include <stdio.h>
void main(void){
 char ch;
 clrscr();
 flushall();
 printf("please press a key :\n");
 ch=getch();
 if(ch!=NULL)
  printf("\nit is a normal key %d",ch);

 else{
  ch=getch();
  printf("\nit is an extended key : %d",ch);
 }
 getch();
}