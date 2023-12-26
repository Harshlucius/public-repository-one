#include<stdio.h>
int main(){
    char a[25];
    int size = printf("enter the value of the string : ");
    scanf("%s", &a);
    int i=0;
    char b[size];
    while(i<size){
        b[size]=a[i];
        i++;
    }
    for (i=0;i<=size;i++){
        printf("%c", b[i]);
    }
}