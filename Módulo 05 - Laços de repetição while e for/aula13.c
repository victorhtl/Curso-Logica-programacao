#include <stdio.h>
#include <unistd.h>

int main(){
    for(int cond = 5; cond >= 0; cond--){
        printf("%d\n", cond);
        sleep(1);
    }

    printf("Ja");
}