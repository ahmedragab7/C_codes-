#include <stdio.h>
#include<conio.h>
#include<string.h>

struct employees{
char name[10];
int ID;
int salery;
};

int linear(struct employees *arr,int size,int id);
int binary(struct employees *arr,char *name,int size);




void main (){
int ser,ind;
char nam_search[10];
struct employees arr[3];
int i,choose;
clrscr();
for (i=0;i<3;++i){
 printf("\nenter the name :");
 gets(arr[i].name);
 arr[i].ID=(i+(5*i)+7);
 arr[i].salery=(i*(20+i)+200);
 printf("%s has ID:%d and his salery:%d",arr[i].name,arr[i].ID,arr[i].salery);
}
printf("\n enter 1 if you want to search with name or 2 if with ID :");
scanf("%d",&choose);
if(choose==1){
flushall();
//printf("\nenter the ID to search for the name :");
printf("\nenter the name to search for it :");
//scanf("%d",&ser);
gets(nam_search);
//ind=linear(arr,3,ser);
ind=binary(arr,nam_search,3);
//printf("\nthe employee's name is: %s",arr[ind].name);
printf("\nthe index is : %d ",ind);
}
else{
printf("\nenter the ID to search for the name :");
//printf("\nenter the name to search for it :");
scanf("%d",&ser);
//gets(nam_search);
ind=linear(arr,3,ser);
//ind=binary(arr,nam_search,3);
printf("\nthe employee's name is: %s",arr[ind].name);
//printf("\nthe index is : %d ",ind);

}
getch();
}



int linear(struct employees *arr,int size,int id){
int i;
for(i=0;i<size;++i){
if(arr[i].ID==id){return i;}
}
return 0;
}

int binary(struct employees *arr,char *name,int size){
int lo=0,hi=size-1,mid=(hi+lo)/2;
while(hi>=lo){
mid=(hi+lo)/2;
if((strcmp(arr[mid].name,name))>0){
 hi=mid-1;
}
else if((strcmp(arr[mid].name,name))<0){lo=mid+1;}
else{return mid;}
//printf("\n%d :%d",mid,(strcmp(arr[mid].name,name)));
}
return -1;
}