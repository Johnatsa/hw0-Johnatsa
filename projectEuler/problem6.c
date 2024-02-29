#include <stdio.h>

int isprime(long long int num){
    if(num <= 1)
        return 0;
    if(num == 2 || num == 3)
        return 1;
    if(num % 2 == 0 || num % 3 == 0)
        return 0;
    for(int i = 5; i*i <= num; i++){
        if(num % i == 0)
            return 0;
    }
    return 1;
}


int main(void){
    int count = 1;
    long long int num = 3;
    while(count != 10001){
        if(isprime(num))
            count++;
        num+= 2;
    }
    printf("%lld\n",num - 2);
    return 0;
}