#include"NumClass.h"
#include<stdio.h>
#include<math.h>

int main(){
    int num1, num2, i;
    printf("Enter the First Number:");
    scanf("%d",&num1);
    

    printf("Enter The Second Number:");
    scanf("%d",&num2);


    printf("The Armstrong numbers are:");
    for(i = num1; i<=num2; i++){
        if(isArmStrong(i)== 1){
           printf(" %d",i); 
        }
    }
    printf("\n");


    printf("The Palindromes are:");
    for(i = num1; i<=num2; i++){
        if(isPalindrome(i) == 1){
           printf(" %d",i); 
        }
    }
    printf("\n");


    printf("The Prime numbers are:");
    for( i = num1; i<=num2; i++){
        if(isPrime(i) == 1){
           printf(" %d",i); 
        }
    }
    printf("\n");


    printf("The Strong numbers are:");
    for( i = num1; i<=num2; i++){
        if(isStrong(i) == 1){
           printf(" %d",i); 
        }
    }
    printf("\n");

    return 0;
}
