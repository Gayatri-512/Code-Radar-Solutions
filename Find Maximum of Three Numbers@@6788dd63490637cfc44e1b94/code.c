#include <stdio.h>
int main() {
    int a, b,c,max;
    scanf("%d %d %d",&a,&b,&c);
    max=a;
    if (b>max){
        max=b;
    }
    else if(c>max){
        max=c;
    }printf("Maximum is: %d\n", max); 
    return 0;
}