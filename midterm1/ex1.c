
////Write a pseudo-code to find all Pythagorean triples from a given array using Iteration. (2pts)
////▪ Implement your proposed algorithm in C/C++. You have to initialize a random array (any
////size ≥ 6, any value) in the main() function.

#include <stdio.h>
void findPythagorean(int arr[],int size){
    int i,j,k;
    for( i = 0;i < size -1 ; i++){
        for( j = i+1; j < size; j++){
            int a = arr[i];
            int b = arr[j];           
            for( k = 0;k < size;k++){
                int c = arr[k];
                if(a*a + b*b == c*c){
                    printf("number : %d %d %d",a,b,c);
                }
            }
        }
    }
}

int main(){
    int a[]={10,6,8};
    int size = sizeof(a)/sizeof(a[0]);
    printf("%d",size);
    //findPythagorean(a,size);
    return 0;
}