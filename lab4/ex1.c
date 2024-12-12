#include<stdio.h>
int sumOfDigits(int n){
    int sum_of_digit =0;
    while(n != 0){
        int digit = n%10;
        sum_of_digit = sum_of_digit + digit;
        n=n/10;
    }
    return sum_of_digit;
}

int main(){
    int a = 9512;
    printf("%d",sumOfDigits(a));
    return 0;
}