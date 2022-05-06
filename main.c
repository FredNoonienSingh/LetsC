#include <stdio.h>

void fizzbizz(int n){

    for(int i = 1; i < n; i++){
        if(i%3 == 0){
            if(i%5 == 0){
                printf("Fizz-Bizz\n");
            }else{
                printf("Fizz\n");
            }
        }else if(i%5 == 0){
            printf("Bizz\n");
        } else{
            //char iAsChar = i+'0';
            printf("%d",i);
            printf("\n");
        }
    }
}

int main() {

    printf("This is Fizz-Bizz in C\n");
    fizzbizz(51);

    return 0;
}
