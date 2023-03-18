#include <stdio.h>

int main(void) {
    int sm, i;
    int billets200 = 0,  billets100 = 0,  billets50 = 0,  billets20 = 0,  billets10 = 0;
    int pieces5 = 0, pieces2 = 0, pieces1 = 0;
    
    printf("Entrer la somme: ");
    scanf("%d", &sm);
    
    i = sm;
    
    if(i >= 200){
        billets200 = i / 200;
        i = i % 200;
    }
    
    if(i >= 100){
        billets100 = i / 100;
        i = i % 100;
    }
    
     if(i >= 50){
        billets50 = i / 50;
        i = i % 50;
    }
    
     if(i >= 20){
        billets20 = i / 20;
        i = i % 20;
    }
    
     if(i >= 10){
        billets10 = i / 10;
        i = i % 10;
    }
    
     if(i >= 5){
        pieces5= i / 5;
        i = i % 5;
    }
    
    if(i >= 2){
        pieces2= i / 2;
        i = i % 2;
    }
    
    if(i >= 1){
        pieces5= i;
    }
    
    printf("Billets 200 dh : %d\n", billets200);
    printf("Billets 100 dh : %d\n", billets100);
    printf("Billets 50 dh : %d\n", billets50);
    printf("Billets 20 dh : %d\n", billets20);
    printf("Billets 10 dh : %d\n", billets10);
    printf("pieces 5 dh : %d\n", pieces5);
    printf("pieces 2 dh : %d\n", pieces2);
    printf("pieces 1 dh : %d\n", pieces1);
    
     return 0;
}

