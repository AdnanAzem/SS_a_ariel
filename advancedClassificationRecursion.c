#include<stdio.h>
#include<math.h>
#define Factorial()
#define isArmStrong()
#define isArmStrongHelper()
#define isPalindrome()
#define isPalindromeHelper()

int Factorial(int n){
    if(n <= 0)
    return 1;
    return Factorial(n-1)*n;
}

int isArmStrongHelper(int n){
    int sum=0, mult;
    if(n > 0){
        mult = 1;
        int r = n % 10;
        isArmStrong(n/10);
        mult = Factorial(r);
        sum += mult;
    }
    return sum;
}

int isArmStrong(int n){
    if(n == isArmStrongHelper(n)){
        return 1;
    }
    else{
        return 0;
    }
}

int isPalindrome(int n){
    if(isPalindromeHelper(n,0) == n){
        return 1;      
    }
    else{
        return 0;
    }
}

int isPalindromeHelper(int n, int temp){
    if(n == 0){
        return temp;
    }
    temp = (temp*10) + (n%10);
    return isPalindromeHelper(n/10, temp);
}

