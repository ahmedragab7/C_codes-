
#include <stdio.h>
#include<conio.h>
#define left 0x4B
#define right 0x4D
#define Home 0x47
#define enter 0xD
#define delet 83
#define X 10
#define Y 15
#define esc 27
# define back_sp 0x8
#define ensert 0x52

void insert(char character,int pos,char *arr,char *pl,char *pstart);
void my_print(int pos,char *arr,char *pl,char *pstart) ;
void del(int pos,char *arr,char *pl,char *pstart);
void back_s(int pos,char *arr,char *pl,char *pstart);
void insert2(char character,int pos,char *arr,char *pl,char *pstart);


void main (){
 char *arr;
 int i;
 int exit=0;
 char *pstart=arr;
 char *pl=arr;
 char *pcur=arr;
 char ch;
 int my_insert=0;
 int pos=0;
 arr=(char *)malloc(21*sizeof(char *));
// pl+=5;
for(i=0;i<21;++i){
  arr[i]=NULL;
 }

 gotoxy(X,Y);
do{

ch=getch();
if(ch!=NULL){
 //normal
 switch(ch){
  case esc:
  exit=1;
  break;
  case enter:
  gotoxy(1,1);
  printf("your line is :%s",arr);
  getch();
  break;
  case back_sp:
  if((pos)>0){
  back_s(pos,arr,pl,pstart);
  pl--;
  pos--;
  }
  break;
  default:

  if(my_insert==0){
  if(pl-pstart<20){
  insert(ch,pos,arr,pl,pstart);pos++;pl++;}
  }
  else{if(pos<pl-pstart){insert2(ch,pos,arr,pl,pstart);pos++;}
  if(pos<21&&pos>(pl-pstart)-1){insert2(ch,pos,arr,pl,pstart);pos++;pl++;}
  }



 }
}

else{
ch=getch();
switch(ch){
 case left:
 if(pos>0){pos--;pcur--;}
 break;
 case right:
 if(pos<(pl-pstart)){pos++;pcur++;}
 break;
 case delet:
 if((pos)>0 && pos<pl-pstart){
 del(pos,arr,pl,pstart);
 pl--;
 //pos--;
  }
 break;
 case ensert:
 if(my_insert==0){my_insert=1;}
 else{my_insert=0;}
  break;

}
}
my_print(pos,arr,pl,pstart);
}
while (!exit);
}

void my_print(int pos,char *arr,char *pl,char *pstart) {

int length=pl-pstart;

int i=0;
clrscr();
gotoxy(X,Y);
 for(i=0;i<=length;i++){
 printf("%c",arr[i]);

 }
gotoxy(34,Y);
printf("%d",pos);
gotoxy((X+pos),Y);
}


void insert(char character,int pos,char *arr,char *pl,char *pstart){
int length=pl-pstart;
if(length<20){
int i;
//printf("the length:%d",length);

for(i=length+1;i>pos;i--){
 arr[i]=arr[i-1];
}
arr[pos]=character;
}
}

void del(int pos,char *arr,char *pl,char *pstart){
int length=(pl-pstart)+1;
int i;
for(i=pos;i<=length;i++){
arr[i]=arr[i+1];
}
}

void back_s(int pos,char *arr,char *pl,char *pstart){
int length=(pl-pstart)+1;
int i;
for(i=pos;i<=length;i++){
arr[i-1]=arr[i];
}

}
void insert2(char character,int pos,char *arr,char *pl,char *pstart){
arr[pos]=character;


}
