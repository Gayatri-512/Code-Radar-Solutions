#include <stdio.h>
int main(
    int n;
    scanf("%d",&n);
    int arr[1000];

    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int lower=0 , higher = 0;
    for(int i=0; i<n; i++){
        if(arr[i]>arr[i+1]){
            lower++;
        }
    }
    for(int i=0; i<n; i++){
        if(arr[i]<arr[i+1]){
            higher++;
        }
    }
    
    
    printf("%d %d",higher,lower);
    
    return 0;
)