#include <stdio.h>

int main(void){
    long long int num = 21;
    while(1){
        if(num % 2 == 0){
            if(num % 3 == 0){
                if(num % 4 == 0){
                    if(num % 5 == 0){
                        if(num % 6 == 0){
                            if(num % 7 == 0){
                                if(num % 8 == 0){
                                    if(num % 9 == 0){
                                        if(num % 10 == 0){
                                            if(num % 11 == 0){
                                                if(num % 12 == 0){
                                                    if(num % 13 == 0){
                                                        if(num % 14 == 0){
                                                            if(num % 15 == 0){
                                                                if(num % 16 == 0){
                                                                    if(num % 17 == 0){
                                                                        if(num % 18 == 0){
                                                                            if(num % 19 == 0){
                                                                                if(num % 20 == 0){
                                                                                    break;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }                    
                    }
                }
            }
        }
        num++;
    }
    printf("%lld\n",num);
    return 0;
}