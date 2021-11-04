#include<math.h>
#include <stdio.h>
#define isArmStrong()
#define isPalindrome()

int isArmStrong(int n){
    int temp = n;
    int ans = 0;
    int mult = 1;
    int digit = 0;
    while(temp>0){
        digit++;
        temp=temp/10;
    }
    temp = n;
    while(temp > 0){
        int last = temp%10;
        mult = 1;
        for(i=0; i<digit; i++){
            mult = mult * last;
        }
        ans= ans+mult;
        temp = temp/10;

    }
    if(ans != n){
        return 0;
    }
    else{
        return 1;
    }
}

int isPalindrome(int n){
    int temp = n;
    int sum = 0;
    int r;
    while(temp>0){
        r = temp%10;
        sum = sum*10 + r;
        temp = temp/10;
    }
    if(sum != n){
        return 0;
    }
    else{
        return 1;
    }
}