#include <stdio.h>
#include <unistd.h>

int main(){
    int i = 5;

    for(i; i >= 0; i--){
        printf("%d\n", i);
        sleep(1);
    }

    printf("Ja");
    return 0;
}