#include<stdio.h>
#include<conio.h>
#include<string.h>

void my_print(char **arr,int n);
void my_swap(char *arr1,char *arr2);
void selection_sort(char **arr, int n);

void main(){
 char *arr[4]={"ahmed","samy","zeyad","careem"};

     selection_sort(arr,4);

    //my_swap(&arr[1],&arr[3]);
    my_print(arr,3);
      getch();

}


void my_print(char **arr,int n){
int i;
clrscr();
for(i=0;i<=n;i++)
 printf("%s->",arr[i]);
}


void my_swap(char *arr1,char *arr2){
char *temp;
*temp=*arr1;
*arr1=*arr2;
*arr2=*temp;
}


void selection_sort(char **arr,int n){
 int i,j,index=0;
 for(i=0;i<n-1;i++){
 index=i;
  for(j=i+1;j<n;j++){
  if(strcmp(arr[index],arr[j])>0){
  index=j;}
  }
  my_swap(&arr[index],&arr[i]);

 }

}
