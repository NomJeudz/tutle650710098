#include <stdio.h>

void main(){
int n,i,j;
  scanf("%d",&n);
int star = 1,space = n/2;
  for(j=0;j<(n/2)+1;j++){
  for(i=0;i<=space;i++){
    printf(" ");
    space--;
  }
  for(i=0;i<star;i++){
    printf("*");
    
  }star+=2;
  printf("\n");
}
  int star = 1,space = n/2;
  for(j=0;j<(n/2)+1;j++){
  for(i=0;i<=space;i++){
    printf(" ");
    space--;
  }
  for(i=0;i<star;i++){
    printf("*");
    
  }star+=2;
  printf("\n");
}
}