#include<stdio.h>
#include<math.h>

int isPrime(int n){
    if(n<=1){
        return 0;
    }
    else{
        for(int i = 2;i <= sqrt(n);i++){
            if(n%i==0){
                return 0;
            }
        }  
        return 1;
    }
  
}

int isSphenic(int n){
    int count = 0;
    for(int i=2;i <= n;i++){
        if(isPrime(i)&& n % i==0){
            count ++;
            n=n/i;
        }
    }
    if(count == 3 && n==1){
        return 1;
    }
    return 0;
}

int main(){
    int a =66;
    // if(isPrime(a)){
    //     printf("prime");
    // }

    for(int i =0;i<=a;i++){
        if(isSphenic(i)){
            printf("%d  ",i);
        }
    }
    return 0;
}