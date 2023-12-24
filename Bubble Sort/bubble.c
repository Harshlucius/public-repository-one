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