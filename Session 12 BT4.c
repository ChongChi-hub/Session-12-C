#include <stdio.h>

int findMax(int arr[], int size){
    int max = arr[0];
    for(int i = 1; i < size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}
int main()
{
    int myArr[] = {3, 5, 7, 2, 17, -1, 4};
    int size = sizeof(myArr) / sizeof(myArr[0]);
    int max = findMax(myArr, size);
    printf("So lon nhat trong mang la: %d\n", max);
    return 0;
}

