#include<stdio.h>

void display(int a[],int n){
    for(int i =n - 1;i>=0;i--){
        printf("%d",a[i]);
    }
}

void binary(float n,int k){
    int integer_part = n;
    float decimal_part = n - integer_part;
    int i = 0;
    int remainder[100];
    int quotient = integer_part;
    while(quotient != 0){
        remainder[i] = quotient % 2;
        quotient = quotient / 2; 
        i++;
    }
    display(remainder,i);
    printf(",");
    int integral_part;
    float decimal2_part = decimal_part;
    for(int i = 0;i<=k-1;i++){
        if(integral_part =1 && decimal2_part > 1){
            decimal2_part = decimal2_part-1;
            integral_part = decimal2_part*2;
            printf("%d",integral_part);
        }
        else{
            integral_part = decimal2_part * 2;
            decimal2_part = decimal2_part * 2;
            printf("%d",integral_part);
        }
    }
    
}



int main(){
    float a = 4.47;
    binary(a,4);
    return 0;
}