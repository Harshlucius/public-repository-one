#include<stdio.h>
int print(int *a,int size){
    for(int i=0;i<size;i++){
        printf("%i ",a[i]);
    }
    printf("\n");
}
int sort(int *a,int size){
    int temp=0;
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1;j++){
            if(a[j]<a[j+1]){
                temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
    }
}
int main(){
    int a[]={43,3,2,44,33};
    int size = sizeof(a)/sizeof(a[0]);
    print(a,size);
    sort(a,size);
    print(a,size);
    return 0;
}
// #include<stdio.h>
// void print(int arr[],int size)
// {
//     for(int i=0;i<size;i++){
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }
// void sort(int arr[],int size){
//     int temp;
//     for(int i=0;i<size-1;i++){//4
//         for(int j=0;j<size-1;j++){//4
//            if(arr[j]<arr[j+1]) {
//             temp = arr[j];
//             arr[j]=arr[j+1];
//             arr[j+1] = temp;
//            }
//         }
//     }
// }
// int main(){
//     int arr[] = {5,4,7,1,2};
//     int size = sizeof(arr)/sizeof(arr[3]);//5
//     print(arr,size);
//     sort(arr,size);
//     print(arr,size);
// }

