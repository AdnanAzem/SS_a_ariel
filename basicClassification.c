#include <stdio.h>
#include <math.h>

int isPrime(int n){
    if(n==1){
        return 1;
    }
    int i;
    for(i=2; i< n; i++){
        if(n%i == 0)
        return 0;
    }
    return 1;
}

int isStrong(int n){
    int total = n;
    int ans = 0;
    int mult = 1;
    while(total > 0){
        int x = total%10;
        mult = 1;
        for(int i=1; i<= x; i++){
            mult = mult*i;
        }
        ans = ans + mult;
        total = total/10;
    }
    if(ans != n){
        return 0;
    }
    else{
        return 1;
    }
}  
