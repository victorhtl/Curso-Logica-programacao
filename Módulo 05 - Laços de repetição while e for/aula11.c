#include <stdio.h>

int main(){
    int numero = 0;
    int roberto = 0;
    int maria = 0;
    int carlos = 0;
    int nulo = 0;
    int branco = 0;
    float p_nulos, p_brancos, somatorio;

    printf("*****URNA ELETRONICA*****\n\n");

    do {
        printf("1 - Roberto\n");
        printf("2 - Maria\n");
        printf("3 - Carlos\n");
        printf("4 - Nulo\n");
        printf("5 - Branco\n");
        printf("6 - Mostra resultado\n");
        printf("Seu voto: ");
        scanf("%d", &numero);

        if(numero > 6){
            printf("Entrada invalida\n\n");
            continue;
        }

        if(numero == 1){
            printf("Roberto +1\n\n");
            roberto++;
        }
        if(numero == 2){
            printf("Maria +1\n\n");
            maria++;
        }
        if(numero == 3){
            printf("Carlos +1\n\n");
            carlos++;
        }
        if(numero == 4){
            printf("Nulo +1\n\n");
            nulo++;
        }
        if(numero == 5){
            printf("Branco +1\n\n");
            branco++;
        }
        if(numero == 6){
            break;
        }

    } while(1);

    printf("\n***O Resultado foi:***\n");
    printf("Roberto %d votos\n", roberto);
    printf("Maria %d votos\n", maria);
    printf("Carlos %d votos\n\n", carlos);

    somatorio = roberto + maria + carlos + nulo + branco;
    
    p_brancos = (branco / somatorio) * 100.;
    p_nulos = (nulo / somatorio) * 100.;
    
    printf("Brancos: %.2f per cento\n", p_brancos);
    printf("Nulos: %.2f per cento\n\n", p_nulos);

    if(roberto > maria && roberto > carlos){
        printf("Ganhador: Roberto");
    } 
    else if (maria > roberto && maria > carlos){
        printf("Ganhador: Maria");
    }
    else if(carlos > roberto && carlos > maria){
        printf("Ganhador: Carlos");
    }
    else {
        printf("Empate");
    }
}