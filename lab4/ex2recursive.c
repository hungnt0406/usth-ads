#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

// Function to check if a number is sphenic
void isSphenic(int current,int num) {
    int temp = current;
    if(current > num) return;
    int count = 0; // To count the number of distinct prime factors
    for(int i = 0;i <= temp;i++){
        if(isPrime(i) && temp % i ==0){
            count ++;
            temp = temp / i;
        }
        if(count == 3 && temp==1){
            printf("%d ",current);
        }
    }
    isSphenic(current+1,num);
}


int main() {
    int a = 66;

    isSphenic(1,66);

    return 0;
}
