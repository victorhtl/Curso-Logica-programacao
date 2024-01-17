#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

struct time{
    int seg;
    int min;
    int horas;
};

void atualiza(struct time *t);
void mostra(struct time *t);

int main(){
    
    struct time relogio;

    relogio.seg = 0;
    relogio.min = 0;
    relogio.horas = 0;

    while(1){
        atualiza(&relogio);
        mostra(&relogio);
        sleep(1);
        system("cls");
    }

}

void atualiza(struct time *t){
    t->seg++;
    if(t->seg == 60){
        t->seg = 0;
        t->min++;
    }
    if(t->min == 60){
        t->min = 0;
        t->horas++;
    }
    if(t->horas == 24){
        t->horas = 0;
    }
}

// 00:00:00

void mostra(struct time *t){
    printf("%02d:", t->horas);
    printf("%02d:", t->min);
    printf("%02d\n", t->seg);
}