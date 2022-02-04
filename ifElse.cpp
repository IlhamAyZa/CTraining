#define _CRT_SECURE_NO_WARNINGS // для возможности использования scanf

#include<stdio.h>
using namespace std;

int main()
{
    printf("Assignment 1");
    int a; 
    scanf("%d", &a);
    
    if( a%2 == 0 ){
        printf("Even \n");
    }
    else{
        printf("Odd \n");
    }
    
    printf("Assignment 2");
    int tempNum;
    
    for (int i = 0; i < 5; i++){
        scanf("%d", &tempNum);
        
        if( tempNum%2 == 1 ){
            printf("%d",tempNum);
        }
        else{
        }
    }
}