#include <stdio.h>
#include <string.h>

// structs
struct Endereco {
    char rua[64];
    char *cep;
    char cidade[64];
};

struct ConsumoMem {
    char array[62];
    int a;
} variavel_consumo;

int main(){
    struct Endereco endereco_pessoa1;

    strcpy(endereco_pessoa1.rua, "Rua Oliveira");
    endereco_pessoa1.cep = "0000-00"; 
    //printf("Digite a cidade: ");
    //gets(endereco_pessoa1.cidade);
    //printf("%s\n", endereco_pessoa1.rua);
    //printf("%s\n", endereco_pessoa1.cep);
    //printf("%s", endereco_pessoa1.cidade);


    struct Endereco pessoas[64];
    strcpy(pessoas[5].rua, "Rua Fulano");

    printf("%d", sizeof(variavel_consumo));
}