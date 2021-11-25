#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <stdbool.h>

// Variaveis e Constantes Globais
#define D #
static char entrada[100] = "olhar";

int acao(char *input, int *x, int *y)
{
    char *verbo = strtok(input, " \n");
    char objeto[100];
    
    if (verbo != NULL)
    {
        if(strcmp(verbo, "sair") == 0)
        {
            return 0;
        }
        else if(strcmp(verbo, "olhar") == 0)
        {
            printf("Olhar o que? \n");
            //ler o objeto da ação
            fgets(objeto, sizeof objeto, stdin);
            //chama função obj
            return obj(objeto, verbo, &*x, &*y);
        }
        else if(strcmp(verbo, "ir") == 0)
		{
			printf("Para onde ? \n");
            //ler o objeto da ação
            fgets(objeto, sizeof objeto, stdin);
            //chama função obj
            return obj(objeto, verbo, &*x, &*y);
		}
        else if(strcmp(verbo, "entrar") == 0)
		{
			printf("Por onde ? \n");
			//ler o objeto da ação
            fgets(objeto, sizeof objeto, stdin);
            //chama função obj
            return obj(objeto, verbo, &*x, &*y);
		}
        else if(strcmp(verbo, "pegar") == 0)
		{
			printf("O que ? \n");
			//ler o objeto da ação
            fgets(objeto, sizeof objeto, stdin);
            //chama função obj
            return obj(objeto, verbo, &*x, &*y);
		}
        else if(strcmp(verbo, "usar") == 0)
		{
			printf("O que ? \n");
            //ler o objeto da ação
            fgets(objeto, sizeof objeto, stdin);
            //chama função obj
            return obj(objeto, verbo, &*x, &*y);
		}
        else if(strcmp(verbo, "abrir") == 0)
		{
			printf("O que ? \n");
			//ler o objeto da ação
            fgets(objeto, sizeof objeto, stdin);
            //chama função obj
            return obj(objeto, verbo, &*x, &*y);
		}
        else //caso o verbo não exista
        {
            printf("Eu não sei como %s \n", verbo);
        }

    }
    return 1;
}

int obj(char *input, char *input_2, int *x, int*y)
{
    char *objeto = strtok(input, " \n");
    char *verbo = strtok(input_2, " \n");
    int x1 = *x;
    int y1 = *y;
    char parte[20];

    if (objeto != NULL)
    {
        if (strcmp(objeto, "nenhum") == 0)
        {
            return 0;
        }
        else if (strcmp(objeto, "portão") == 0)
		{
			if(strcmp(verbo, "olhar") == 0)
			{
				printf("Há uma rachadura no portão \n");
				return 1;
			}
			else
			{
				printf("Não funciona \n");
			}
		}
        else if (strcmp(objeto, "rachadura") == 0)
        {
	        if(strcmp(verbo, "entrar") == 0)
	        {
		        printf("Você entrou no castelo \n");
		        printf("Você agora está em um sala em ruínas \n");
		        printf("Você vê duas portas uma a direita e outra a sua frente \n");		
			    *x = 0;
			    *y = 1;
			    return 2;
	        }
	        else
	        {
		        printf("Não funciona \n");
			
	        }
        }
        else if (strcmp(objeto, "direita") == 0 && x1 == 1 && y1 == 1)
        {
	        if(strcmp(verbo, "ir") == 0)
	        {
	            printf("Você entrou na cozinha, há um cheiro ruim\n");
	            printf("Saia logo daí, pela porta a esquerda \n");
		        *x = 1;
		        *y = 0;
		        return 2;

		    }
		    else
		    {
		        printf("Não funciona \n");			
		    }
        }
        else if (strcmp(objeto, "direita") == 0 && x1 == 0 && y1 == 1)
        {
	        if(strcmp(verbo, "ir") == 0)
            {
                printf("Você está em uma sala escura\n");
                printf("Há uma luz vindo da sua direita \n");
					
	            *x = 1;
	            *y = 1;
	            return 2;
	        }
	        else
	        {
	            printf("Não funciona \n");
					
	        }
        }
        else if (strcmp(objeto, "direita") == 0 && x1 == 1 && y1 == 1)
        {
	        if(strcmp(verbo, "ir") == 0)
	        {
	            printf("Você entrou na cozinha, há um cheiro ruim\n");
	            printf("Saia logo daí, pela porta a esquerda \n");
	            *x = 1;
	            *y = 0;
	            return 2;
            }
	        else
	        {
		        printf("Não funciona \n");
					
	        }
        }
        else if (strcmp(objeto, "frente") == 0 && x1 == 0 && y1 == 1)
        {
	        if(strcmp(verbo, "ir") == 0)
	        {
	            printf("Você está em uma sala pequena,parece uma dispensa\n");
	            printf("não há nada aqui \n");
	            printf("volte para trás \n");
	            *x = 0;
	            *y = 2;
	            return 2;
            }
	        else
	        {
		        printf("Não funciona \n");
					
	        }
        }
        else if (strcmp(objeto, "trás") == 0 && x1 == 0 && y1 == 2)
        {
	        if(strcmp(verbo, "ir") == 0)
	        {
	            printf("Você agora está em um sala em ruínas \n");
	            printf("Você vê duas portas uma a direita e outra a sua frente \n");
	            *x = 0;
	            *y = 1;
	            return 2;
            }
	        else
	        {
		        printf("Não funciona \n");	
	        }
        }
        else if (strcmp(objeto, "esquerda") == 0 && x1 == 1 && y1 == 0)
        {
	        if(strcmp(verbo, "ir") == 0)
	        {
	            printf("Você está em uma sala cheia de ferramentas \n");
	            printf("Você vê um objeto brilhando no chão \n");
	            printf("Há uma saída a sua esquerda \n");
	            *x = 2;
	            *y = 0;
	            return 2;
            }
            else
	        {
		        printf("Não funciona \n");
		
	        }
        }
        else if (strcmp(objeto, "objeto") == 0 && x1 == 2 && y1 == 0)
        {
            if(strcmp(verbo, "olhar") == 0)
	        {
		        printf("É um machado \n");
		        printf("Mas não está muito afiado \n");
		        *x = 2;
		        *y = 0;
		        return 2;
	        }
	        else
	        {
		        printf("Não funciona \n");
					
	        }
        }
        else if (strcmp(objeto, "machado") == 0 && x1 == 2 && y1 == 0)
        {
	        if(strcmp(verbo, "pegar") == 0)
	        {
		        printf("Você pegou o machado \n");
		        printf("Talvez você possa utilziar para se proteger \n");
		        *x = 2;
		        *y = 0;
		        return 2;
            }
	        else
	        {
		        printf("Não funciona \n");
					
	        }
        }
        else if (strcmp(objeto, "esquerda") == 0 && x1 == 2 && y1 == 0)
        {
	        if(strcmp(verbo, "ir") == 0)
	        {
		        printf("Você chegou ao salão principal \n");
		        printf("O cheiro de enxofre aumentou \n");
		        printf("A unica saída é a direita \n");
		        *x = 2;
		        *y = 1;
		        return 2;
            }
	        else
	        {
		        printf("Não funciona \n");
					
	        }
        }
        else if (strcmp(objeto, "direita") == 0 && x1 == 2 && y1 == 1)
        {
            if(strcmp(verbo, "ir") == 0)
            {
                printf("Aqui você está em um corredor \n");
                printf("Você pode ir para direita ou esquerda \n");
                *x = 3;
                *y = 1;
                return 2;
            }
            else
            {
                printf("Não funciona \n");
                            
            }
        }
        else if (strcmp(objeto, "direita") == 0 && x1 == 3 && y1 == 1)
        {
            if(strcmp(verbo, "ir") == 0)
            {
                printf("Você encontrou um bau com um bilhete \n");
                printf("Use com sabedoria onde a luz reflete! \n");
                printf("Não há outras portas aqui \n");
                *x = 3;
                *y = 0;
                return 2;
            }
            else
            {
                printf("Não funciona \n");				
            }
        }
        else if (strcmp(objeto, "bau") == 0 && x1 == 3 && y1 == 0)
        {
            if(strcmp(verbo, "abrir") == 0)
            {
                printf("Dentro está um arco-flexa \n");
                printf("Mas contém apenas 1 flecha \n");
                *x = 3;
                *y = 0;
                return 2;
            }
            else
            {
                printf("Não funciona \n");
                            
            }
        }
        else if (strcmp(objeto, "arco-flexa") == 0 && x1 == 3 && y1 == 0)
        {
            if(strcmp(verbo, "pegar") == 0)
            {
                printf("Agora você tem um arco-flexa \n");
                printf("Não há outras portas aqui, você deve voltar \n");
                *x = 3;
                *y = 0;
                return 2;
            }
            else
            {
                printf("Não funciona \n");			
            }
        }
        else if (strcmp(objeto, "trás") == 0 && x1 == 3 && y1 == 0)
        {
            if(strcmp(verbo, "ir") == 0)
            {
                printf("Aqui você está em um corredor \n");
                printf("Você pode ir para direita ou esquerda \n");
                *x = 3;
                *y = 1;
                return 2;
            }
            else
            {
                printf("Não funciona \n");	
            }
        }
        else if (strcmp(objeto, "esquerda") == 0 && x1 == 3 && y1 == 1)
        {
            if(strcmp(verbo, "ir") == 0)
            {
                printf("O cheiro de enxofre aumentou novamente \n");
                printf("Você somente pode seguir em frente \n");
                *x = 3;
                *y = 2;
                return 2;
            }
            else
            {
                printf("Não funciona \n");
            }
        }
        else if (strcmp(objeto, "frente") == 0 && x1 == 3 && y1 == 2)
        {
            if(strcmp(verbo, "ir") == 0)
            {
                printf("Você sente o chão tremer \n");
                printf("O cheiro do enxofre está forte \n");
                printf("você somente pode ir para a esquerda \n");
                *x = 3;
                *y = 3;
                return 2;
            }
            else
            {
                printf("Não funciona \n");
                            
            }
        }
        else if (strcmp(objeto, "esquerda") == 0 && x1 == 3 && y1 == 3)
        {
            if(strcmp(verbo, "ir") == 0)
            {
                printf("Você está em um salão, onde o chão está desmoronado \n");
                printf("O calor, a fumaça eo cheiro atrapalham sua visão \n");
                printf("O chão volta a tremer e olhando com esforço... \n");
                printf("Um DRAGÃO aparece cuspindo fogo e vindo em sua direção \n");
                printf("Seus olhos brilham! \n");
                *x = 2;
                *y = 3;
                return 2;
            }
            else
            {
                printf("Não funciona \n");				
            }
        }
        else if (strcmp(objeto, "machado") == 0 && x1 == 2 && y1 == 3)
        {
            if(strcmp(verbo, "usar") == 0)
            {
                printf("Em qual parte do dragão ? \n");
                                
                //ler a parte do dragão
                fgets(parte, 20, stdin);
                int matou = 0;
                matou = dragao(parte);
                *x = 2;
                *y = 3;
                return matou;
            }
            else
            {
            printf("Não funciona \n");
                            
            }
        }
        else if (strcmp(objeto, "arco-flexa") == 0 && x1 == 2 && y1 == 3)
        {
            if(strcmp(verbo, "usar") == 0)
            {
            printf("Em qual parte do dragão ? \n");
                            
                //ler a parte do dragão
                fgets(parte, 20, stdin);
                int matou = 0;
                matou = dragao(parte);
                *x = 2;
                *y = 3;
                return matou;
            }
            else
            {
                printf("Não funciona \n");
                            
            }
        }
        else if (strcmp(objeto, "bau") == 0 && x1 == 2 && y1 == 3)
        {
            if(strcmp(verbo, "abrir") == 0)
            {
            printf("Você abriu o bau e dentro está o tesouro\n");
            printf("O famoso Dente do Dragão\n");
            printf("Parabéns !!\n");
                        
            return 0;
            }
            else
            {
                printf("Não funciona \n");
                            
            }

        }

    }
    return 1;
}

int dragao(char *input)
{
    char *parte = strtok(input, " \n");

    if (parte != NULL)
	{
        if(strcmp(parte, "dragao") == 0)
		{
			return 0;
		}
        else if (strcmp(parte, "olho") == 0)
        {
	        printf("Você achou o ponto fraco do dragão \n");
	        printf("Ele não consegue ver e cai no lago de lava \n");
	        printf("Você venceu, mas cadê o tesouro? \n");
	        printf("Você vê um pequeno baú na sala da frente \n");
			
	        return 1;
        }
        else
        {
		printf("Ele só ficou mais bravo \n");	
        }
        


    }
    else
	{
		printf("Ele só ficou mais bravo_2  \n");
	}
    return 1;

}
int main()
{
    static char nome[10];
    int retorno_acao = 1;

    printf(" #                      # \n");
    printf("###                   ### \n");
    printf("####                  #### \n");
    printf("#  #                  #  # \n");
    printf("#||#                  #||# \n");
    printf("#  # #  #  #  #  #  # #  # \n");
    printf("#  # #  #  #  #  #  # #  # \n");
    printf("#  # | |           | |#  # \n");
    printf("#  #      ______      #  # \n");
    printf("#  #    |        |    #  # \n");
    printf("########|        |######## \n");

    //instruções do jogo:
    printf("O objetivo do jogo é percorrer os aposentos do castelo para procurar o tesouro dente do dragão. \n");
    printf("Utilize verbos na forma nominal (infinitivo) para dar comandos ao personagem, exemplos: ir, olhar, pegar, abrir, entrar, usar, etc. \n");
    printf("Você contém um inventário e pode guardar itens que você encontra pelo caminho para usar posteriormente. \n");
    printf("Boa sorte!. \n");
    
    //solicita o nome do usuario:
    printf("Qual o seu nome? \n");
    scanf("%s", nome);
    getchar();

    //inicio do jogo
    printf("%s, voce atravessou a ponte sobre o rio de lava \n", nome);
    printf("e encontrou o portao do castelo fechado \n");

    //posição atual do jogador
    int x1 = 0;
    int y1 = 0;

    //guarda o verbo
        while(retorno_acao == 1)
        {
            printf("O que voce faz? \n");
            fgets(entrada, sizeof entrada, stdin);
            retorno_acao = acao(entrada, &x1, &y1);
            //printf("%d", retorno_acao);
            if(retorno_acao == 2)
            {
                retorno_acao = 1;
            }
        }

    printf("Game-Over");
}