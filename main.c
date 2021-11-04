#include <NumClass.h>
#include <stdio.h>

int main(){
    int num1,num2;
    printf("Enter the First Number : \n");
    scanf("%d",num1);

    printf("Enter The Second Number : \n");
    scanf("%d",num2);

    for(int i = num1; i<=num2; i++){
        if(isArmStrong(i) == 1){
           printf("The Armstrong numbers are: %d ",i); 
        }
    }
    printf("\n");

    for(int i = num1; i<=num2; i++){
        if(isPalindrome(i) == 1){
           printf("The Palindromes are: %d ",i); 
        }
    }
    printf("\n");

    for(int i = num1; i<=num2; i++){
        if(isPrime(i) == 1){
           printf("The Prime numbers are: %d ",i); 
        }
    }
    printf("\n");

    for(int i = num1; i<=num2; i++){
        if(isStrong(i) == 1){
           printf("The Strong numbers are: %d ",i); 
        }
    }
    printf("\n");



}