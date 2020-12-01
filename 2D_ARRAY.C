#include <stdio.h>
#include <conio.h>
void main (){
 int i,j,N,M;
char **pptr;
clrscr();
 printf("enter the first dimention: ");
 scanf("%d",&N);
 printf("enter the second dimention: ");
 scanf("%d",&M);
 pptr=(char **)malloc(N*sizeof(char *));
 for(i=0;i<N;i++){
  pptr[i]=(char *)malloc(M*sizeof(char));
 }

 for(i=0;i<N;i++){

  printf("  enter the value:");
  scanf("%s",pptr[i]);
  //gets(pptr[i]);
  }


 printf("your array is: ");
  for(i=0;i<N;i++){

   printf("%s",pptr[i]);

  printf("\n");
 }
 getch();

}