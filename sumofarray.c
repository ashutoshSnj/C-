#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 

    int size;
    scanf("%d",&size);
    int *arr=(int*)malloc(sizeof(int)*size);

    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    } 
    int sum=0;
    for(int j=0;j<size;j++){
        sum=sum+arr[j];
    } 
    printf("%d",sum);
    free(arr);
    return 0;
}