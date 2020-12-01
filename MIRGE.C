#include <stdio.h>
#include <conio.h>

void merge(int *arr,int *L,int l_counter,int *R,int r_counter);
void mergeSort(int *arr,int n);
void my_print(int *arr,int n);


void main(){
int arr[7]={4,55,1,8,3,76};
mergeSort(arr,5);
my_print(arr,5);
getch();
}
void merge(int *arr,int *L,int l_counter,int *R,int r_counter){
 int i=0;int j=0;int k=0;
 while(i<l_counter && j<r_counter){
  if(L[i]<R[j]){arr[k++]=L[i++];}
  else arr[k++]=R[j++];
 }
 while(i<l_counter) arr[k++] =L[i++];
 while(j<r_counter) arr[k++] =R[j++];

}
void mergeSort(int *arr,int n){
int mid,i,*L,*R;
if(n<2) return;
mid=n/2;
L=(int *)malloc(mid*sizeof(int));
R=(int *)malloc((n-mid)*sizeof(int));
for(i=0;i<mid;i++){L[i]=arr[i];}
for(i=mid;i<n;i++){R[i-mid]=arr[i];}
mergeSort(L,mid);
mergeSort(R,n-mid);
merge(arr,L,mid,R,n-mid);
free(L);
free(R);
}

void my_print(int *arr,int n){
int i;
clrscr();
for (i=0;i<n;i++){printf("%d --> ",arr[i]);}
}