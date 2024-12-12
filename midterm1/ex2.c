///do ex1 by using recursive function
#include<stdio.h>
 
void findPythagorean(int arr[],int size,int i,int j,int k){
    if(i >= size -1 ){
        return ;
    }
    if(j > size){
        findPythagorean(arr, size, i+1, i+2,0);
        return;
    }
    if(k > size){
        findPythagorean(arr, size, i, j+1, 0);
        return;
    } 
    int a = arr[i];
    int b = arr[j];
    int c = arr[k];

    if(a*a + b*b == c*c){
        printf("number : %d %d %d",a,b,c);
    }
    findPythagorean( arr, size, i, j, k+1);
}

int main(){
    int a[]={3, 4, 5, 6, 8, 10};
    int size = sizeof(a)/sizeof(a[0]);
    findPythagorean(a,size,0,1,0);
    return 0;
}