#include<stdio.h>
#include<math.h>
int sumOfDigits(int n){
    if(n==0){
        return 0;
    }
    return n%10 + sumOfDigits(n/10);
}
int main(){
    int a = 9512;
    int b = a %10000;
    printf("%d",b);
    return 0;
}