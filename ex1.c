#include<stdio.h>
typedef struct {
    int size;
    int digits[1000];
} UnboundedInteger;


void initialize(UnboundedInteger *number,int sign){
    number-> digits[0] = sign;
    number->size = 1;
}

void addNew(UnboundedInteger *number, int number_added, int position){
    if(position == 0 || position >number -> size ||position > 1000){
        printf("please enter a correct position!!!!\n");
        return ;
    }
    for(int i = position+1; i <= number->size - 1;i++){
        number -> digits[i] = number -> digits[i-1];
    }
    number -> digits[position] = number_added;
    number -> size++;
}

void removeElement(UnboundedInteger *number,int position){
    if(position == 0 || position >number -> size ||position > 1000){
        printf("please enter a correct position!!!!\n");
        return ;
    }
    for(int i = position; i < number->size; i++){
        number->digits[i] = number->digits[i+1];
    }
    number->size--;
}

int sumOfElement(UnboundedInteger *number){
    int sum =0;
    for (int i = 1; i <number->size; i++){
        sum = sum + number->digits[i];
    }
    return sum;
}

void display(UnboundedInteger *number){
    if(number -> digits[0] == 0){
        printf("-");
    }
    for(int i = 1; i < number -> size;i++){
        printf("%d",number -> digits[i]);
    }
}



int main(){
    UnboundedInteger number;
    initialize(&number,0);
    addNew(&number,2,1);
    addNew(&number,3,2);
    removeElement(&number,4);
    int sum = sumOfElement(&number);
    display(&number);
    printf("\n%d",sum);
    return 0;
}