#include <stdio.h>
#include <conio.h>
#define Enter 13
#define upp   72
#define down  0x50


struct empl{
char name[10];
int age;
int ID;
float sal;
};

struct empl entry(){
struct empl employee;
float salery;
clrscr();
printf("\nenter the Employee's name :");
scanf("%s",employee.name);
printf("\nenter the age of the employee :");
scanf("%d",&(employee.age));
printf("\nenter his ID: ");
scanf("%d",&(employee.ID));
printf("\nenter his salery: ");
scanf("%f",&salery);
employee.sal=salery;
//printf("\n\nData : %f",sal[counter]);
return employee;
}

void data(struct empl arr[10],int counter){
int i;
for(i=0;i<counter;++i){
printf("\n\nstudent number %d data:\name:%s\nage:%d\nID:%d\nsalery:%f",i,arr[i].name,arr[i].age,arr[i].ID,arr[i].sal);
}
}



void my_print(int pos)
{
char minu[4][25]={"add_employee","display_employee","display_by_endex","exit"};

int i;
 //clrscr();
 for(i=0;i<4;i++){
 if (i==pos)
 textattr(0x70);
 gotoxy(1,3+(2*i));
 cprintf("%s",minu[i]);
 textattr(0x07);
 }
}


void main(void){
int counter=0;

struct empl arr[10];

int i;
int pos=0;
int my_end=0;
char ch;
clrscr();
while(my_end!=1){
flushall();
ch=getch();
if(ch!=NULL){
if (ch==27){my_end=1;}
if (ch==Enter){
switch(pos){
case 0:
arr[counter]= entry();
counter++;
clrscr();
break;
case 1:
clrscr();
my_print(pos);
data(arr,counter);
break;
case 3:
my_end=1;
}
}
}

else{
ch=getch();
switch (ch){
case upp:
pos=pos-1; if(pos<0){pos=3;}
break;
case down:
pos++; if(pos>3){pos=0;}
break;
}
}
my_print(pos);
}

getch();

}