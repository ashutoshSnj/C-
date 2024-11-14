#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    printf("Enter the size of array = ");
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

int j=num-1;
for(int i=0;i<num/2;i++,j--){
    int temp;
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
