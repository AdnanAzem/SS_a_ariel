#include<stdio.h>
#include<math.h>

int power(int n,int p){
    int ans=1,i;
    for(i=1;i<=p;i++){
        ans = ans*n;
    }
    return ans;
}

int isArmStrongHelper(int n,int digit,int sum){
    int r;
    if(n==0){
        return sum;
    }
    if(n>0){
        r = n%10;
        sum = sum + power(r,digit);
        return isArmStrongHelper(n/10,digit,sum);
    }
    return 0;
}

int coutDigit(int n){
    int temp = n;
    int digit = 0;
    while(temp>0){
        digit++;
        temp=temp/10;
    }
    return digit;
}

int isArmStrong(int n){
    int digit = coutDigit(n);
    if(isArmStrongHelper(n,digit,0) == n){
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

int isPalindrome(int n){
    if(isPalindromeHelper(n,0) == n){
        return 1;      
    }
    else{
        return 0;
    }
}
