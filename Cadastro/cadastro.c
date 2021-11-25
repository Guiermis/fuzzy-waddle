#include <stdio.h>

struct cadastro 
{
    char nome[500];
    char email[500];
    int idade;
    int dia_nasc;
    int mes_nasc;
    int ano_nasc;
    long int cpf;
    char sexo;
};

void imprimir(struct cadastro c)
{
    printf("Nome: %s", c.nome);
    printf("E-Mail: %s", c.email);
    printf("Idade: %d \n", c.idade);
    printf("Data de Nasc: %d / %d / %d \n", c.dia_nasc, c.mes_nasc, c.ano_nasc);
    printf("CPF: %ld \n", c.cpf);
    printf("Sexo: %c \n", c.sexo);
}

float media_id(struct cadastro c[100], int x)
{   
    float media;
    int soma = 0;
    int i;

    for(i = 0; i < x; i++) 
    {
        soma = soma + c[i].idade;
    }
    media = soma/x;
    return media;
}

int main() 
{
    int i, n;
    struct cadastro c[100];
    float soma, media;

    //numero de cluentes a serem lidos
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        getchar();
        fgets(c[i].nome, 500, stdin);
        fgets(c[i].email, 500, stdin);
        scanf("%d", &c[i].idade);
        scanf("%d", &c[i].dia_nasc);
        scanf("%d", &c[i].mes_nasc);
        scanf("%d", &c[i].ano_nasc);
        scanf("%ld", &c[i].cpf);
        getchar();
        scanf("%c", &c[i].sexo);
    }

    for(i = 0; i < n; i++)
    {
        imprimir(c[i]);
    }

    media = media_id(c, n);
    printf("A media das idades apresentadas eh: %.2f \n", media);

    return 0;
}
