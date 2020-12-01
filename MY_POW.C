#include<stdio.h>
#include<conio.h>

int my_pow(int x,int y);
int my_recur(int x,int y);
void main(void)
{ int x;
int y;
clrscr();
printf("X^Y\nenter X : ");
scanf("%d",&x);
printf("enter Y :");
scanf("%d",&y);
 printf("\nthe power is:%d",my_pow(x,y));
 printf("\nthe recursive power is:%d",my_recur(x,y));
 getch();
}

int my_pow(int x,int y){
int i;
int res=1;
 for(i=0;i<y;++i){
 res*=x;
 }
 return res;
}


int my_recur(int x,int y)
{ if(y==1)
    return x;
return x*my_recur(x,y-1);

}

