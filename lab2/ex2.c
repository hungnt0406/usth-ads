#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct Car{
    char *id;
    int capacity;
    struct Car *nextCar;
}Car;

typedef struct Train{
    int size;
    struct Car *firstCar;
}Train;

Car *initialCar(char *id,int capacity){
    Car *new_car = (Car *)malloc(sizeof(Car));
    new_car->id = (char *)malloc(strlen(id)+1);
    strcpy(new_car->id,id);
    new_car->capacity = capacity;
    return new_car;
}

void initTrain(Train *train){
train->size = 0;
train->firstCar = NULL;
}
 
int isEmpty(Train *train){
    return train->size == 0 ? 1 : 0;
}

void insertFirstCar(Car *car, Train *train){//////you have to initalize a car then you can insert it
    if(isEmpty(train)){
        train->size ++;
        train->firstCar = car;
    }
}

void insertCar(Car *newcar, Car *previousCar,Train *train){//////you have to initalize a car then you can insert it
    newcar->nextCar = previousCar->nextCar;
    previousCar->nextCar = newcar;
    train->size ++;
}

void removeCar(Car *removed_car,Car *previoustCar, Train *train){
    if(previoustCar== NULL && train->firstCar == removed_car){
        train->firstCar = removed_car->nextCar;
   }
    else{
        previoustCar->nextCar = removed_car->nextCar;
   }
    train->size --;
    free(removed_car->id);
    free(removed_car);
}

void displayTrain(Car *firstCar){//////display all car from the inserted car
    Car *temp = firstCar;
    while(temp != NULL){
        printf("car id : %s, capacity is: %d\n",temp->id,temp->capacity);
        temp = temp->nextCar;
    }
    
}

int main (){
    Train train1 ;
    initTrain(&train1);
    Car *car1 = initialCar("car1",3);
    Car *car2 = initialCar("car2",4);
    // printf("%d",car1->capacity);
    insertFirstCar(car1,&train1);
    insertCar(car2,car1,&train1);
    removeCar(car1,NULL,&train1);
    displayTrain(car2);
    return 0;

}



