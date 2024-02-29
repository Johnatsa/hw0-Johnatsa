#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int is_prime(long long int num){
    // if(num % 2 == 0)
    //     return 0;
    for(long long int i = 2; i <=  sqrt(num); i++){
        if(num % i == 0)
            return 0;
    }
    return 1;
}

int factor(long long int num){
    for(long long int i = num; i > 1; i--){
        if(is_prime(i) && num % i == 0)
            return i;
    }
    return -1;
}

int main(int argc, char *argv[]){
    if(argc != 2)
        return 1;
    long long int num = atoll(argv[1]);
    printf("The largest prime factor of %lld is %d\n",num, factor(num));
    return 0;
}