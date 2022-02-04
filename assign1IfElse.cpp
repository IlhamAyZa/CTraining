#include<stdio.h>
#include<string>
using namespace std;

int main()
{
    printf("Assignment 1\n");
    string std;
    printf("Question : %s", &std)
     
    scanf("%d", &a);
    
    if(a == 1){
        printf("1st");
    }
    else if(a == 2){
        printf("2nd");
    }
    else if(a == 3){
        printf("3rd");
    }
    else if(a == 4){
        printf("4th");
    }
    else if(a == 5){
        printf("5th");
    }
    else{
        printf("Wrong number. Enter number less than 6, more than 0");
    }

    printf("\nAssignment 2\n");

    int num, count = 0;
    scanf("%d", &num);
    
    while(num/10 != 0){
        count++;
        num /= 10;
    }
    
    printf("%d\n", num );

    printf("\nAssignment 3\n");

    char[] consonants = {'B','C','D','F','G','H','K','L','M','N','P','Q','R','S','T','V','W','X','Z';
    char[] vowels = {'A','E','I','O','U','Y'};
    char aChar

    scanf("%c", aChar);

    if(consonants.contains(aChar)){
        printf("This is consonant.\n");
    }
    else if (vowels.contains(aChar)){
        printf("This is vowel.\n");
    }

    printf("Assignment 4\n");
    int years;
    
    printf(" : ");
    scanf("%d", &years);
    
    if(0 <= years <= 10){
        printf("1st");
    }
    else if (10 < years <= 16){
        printf("2nd");
    }
    else if(16 < years <= 22){
        printf("3rd");
    }
    else if(22 < years <= 35){
        printf("4th");
    }
    else if(35 < years <= 60){
        printf("5th");
    }
    else if(60 < years <= 80){
        printf("6th");
    }
    else if(80 < years){
        printf("7th");
    }
    else{
        printf("Wrong number. Enter number more than 0");
    }
}