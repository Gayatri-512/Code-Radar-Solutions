#include <stdio.h>
int main() {
    int a ,b , great;
    scanf("%d %d",&a,&b);
    great = a;
    if (b>a){
        great=b;
        printf("%d",great);
    }
    else {
        printf("%d",great);
    }
    return 0;
}