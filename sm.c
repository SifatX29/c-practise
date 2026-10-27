#include<stdio.h>
int main(){
    int x,y;
    scanf("%d",&x);
     scanf("%d",&y);
     if(1<=x && y <= 105){
        printf("%d + %d =%d\n",x,y,x+y);
        printf("x * y=%d\n",x*y);
        printf("x - y=%d\n",x-y);
     } 
     else{
        printf("invalid number");
     }
     return 0;
    }

