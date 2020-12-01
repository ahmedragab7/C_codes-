#include <stdio.h>
#include <conio.h>
#include <string.h>


void my_print(int *arr,int size){
int i;
clrscr();
for(i=1;i<=size;++i){printf("%d-->",arr[i]);}

}


void my_copy(char *s1,char *s2){
int i;
for(i=0;i<=strlen(s2);i++){
 s1[i]=s2[i];
}

}


void my_swap(char *arr,int fr,int sec){
char *temp_arr;
my_copy(temp_arr,&arr[fr]);
my_copy(&arr[fr],&arr[sec]);
my_copy(&arr[sec],temp_arr);
printf("%s",arr[sec]);
getch();

}



void my_swap_int(int *arr,int fr,int sec){
int temp=arr[fr];
arr[fr]=arr[sec];
arr[sec]=temp;

}




void buble_sort(char *arr,int size){
int i;
int sorted=0;
int j=0;
while(!sorted){
 sorted=1;
 for(i=0;i<size-j;++i){
  if(strcmp(&arr[i],&arr[i+1])>0){my_swap(arr,i,i+1);sorted=0;}

 }
 j++;
}


}


void buble_sort_int(int *arr,int size){
int i;
int sorted=0;
int j=0;
while(!sorted){
 sorted=1;
 for(i=0;i<size-j;++i){
  if(arr[i]>arr[i+1]){my_swap_int(arr,i,i+1);sorted=0;}

 }
 j++;
}
}






void main (){

 //char arr[3][10]={"spike","ahmed","tom"};
 //char *arr_ptr=arr;
 int arr[]={32,4,1,8,99,11};

 buble_sort_int(arr,6);
 my_print(arr,6);
 getch();

}
