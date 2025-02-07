#include <stdio.h>
int main() {
    int a ,b , c;
    scanf("%d %d",&a,&b);
    c= a;
    if (a>b){
        c=a;
        printf(c);
    }
    else {
        c=b;
        printf(c);
    }
    return 0;
}