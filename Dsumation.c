#include<stdio.h>
int main(){
  long long N,M;
    scanf("%lld %lld",&N,&M);
    printf("%lld",(N%10)+(M%10));
    return 0;
}