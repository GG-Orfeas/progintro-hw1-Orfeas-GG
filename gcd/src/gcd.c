#include <stdio.h>
#include <math.h>

int gcd(int i, int b, int res){
    while(b > i){
        while(b % i != 0){
            b = b % i;
            if (i > b){
                break;
            }
        }
        if(b % i == 0){
            res = i;
        }
    }
    while(i > b){
        while(i % b != 0){
            i = i % b;
            if (b > i){
                break;
            }
        }
        if(i % b == 0){
            res = b;
        }
    }
    return res;
}


int main(){
    float x, y;
    int i, b, res;
            //Taking numbers as input 
    printf("give me an integer number: ");
    if(scanf("%f",&x)){};
    printf("give me a second integer number: ");
    if(scanf("%f",&y)){};
            //Checking if the numbers meet the requirements
    b = x;
    if( b / x != 1){
        printf("error: 1st number not integer\n");
        return 1;
    }
    i = y;
    if( i / y != 1){
        printf("error: 2nd number not integer\n");
        return 1;
    }
    if(x == 0){
        return 1;
    }
    else if(y == 0){
        return 1;
    }
    else if(x > 1000000000000000000){
        return 1;
    }
    else if(y > 1000000000000000000){
        return 1;
    }
    else if(x < -1000000000000000000){
        return 1;
    }
    else if(y < -1000000000000000000){
        return 1;
    }
    printf("gcd(%f", x);
    printf(" %f", y);
    printf(") = %d", res);
    return 0;
}