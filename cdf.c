#include<stdio.h>
int main(){
    int a;
    float b;
    char c;
    double d;
    long long e;
    scanf("%d %f %c %lf %llf",&a,&b,&c,&d,&e);
    printf("%d\n",a);
    printf("%f\n",b);
    printf("%c\n",c);
    printf("%lf\n",d);
    printf("%llf",e);
    return 0;
}