#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define max_name 50

int main()
{setlocale(LC_ALL,"");
    int mais_vendida,aluguel_da_bike,opcao,opcao2;
    float preco_bike,preco_das_pecas,mais_cara,preco_do_alugel;
    char marca_bike[max_name],cor[max_name],pecas_de_bike[max_name],bike_disponivel[max_name],modelo_favorito[max_name];
    // Foi alterado menos_vendida por modelo_favorito, poois não faria sentido ter uma opção que mostra a pior bicicleta da loja.

do{
      printf("-----------------------------------------------------------------\n");
      printf("olá bem vindo a loja de bicicletas Xandão\n");
      printf("-----------------------------------------------------------------\n");

      printf("1-Abrir menu\n");
      printf("0- Fechar\n");
      scanf("%d",&opcao);
      if(opcao==1)
      {

     do

     {
         printf("Está é a página principal da loja\n");
         printf("\n");
         printf("1- Peças disponiveis\n");
         printf("\n");
         printf("2- Bicicletas\n");
         printf("\n");
         printf("3- Aluguel de bicicleta\n");
         printf("\n");
         printf("0- Fechar menu\n");
         printf("\n");
         printf("Selecione a opçâo desejada\n>>   <<\b\b\b\b");
         scanf("%d",&opcao2);

        if(opcao2==1)
        {

          printf("Essa é a área de Peças que temos Disponiveis\n");
          printf("|-----------------------------------------------------------------|\n");
          printf("|                   Produto                            |   Preço  |\n");
          printf("|------------------------------------------------------|----------|\n");
          printf("| Alavanca Passador de câmbio Yamada                   | R$ 74,90 |\n");
          printf("| Guidão DH Uno Al-29                                  | R$ 27,46 |\n");
          printf("| Pedal Gts                                            | R$ 60,00 |\n");
          printf("| Pneu Greestone-Aro 29                                | R$ 80,00 |\n");
          printf("| Disco de Freio GTSM1                                 | R$ 330,00|\n");
          printf("|-----------------------------------------------------------------|\n");
          printf("digite 0 para fechar o menu\n");
          scanf("%d",&opcao2);
          printf("|-----------------------------------------------------------------|\n");
                   //aqui coloque o q achar melhor, nome, numero o que preferirem.
        }

            if(opcao2==2)
            {

          printf("Esaa é a área de bicicletas que temos Disponiveis\n");
          printf("|                   Produto                            |     Preço          |\n");
          printf("|------------------------------------------------------|--------------------|\n");
          printf("| Bicicleta DROPP ZEX Aro 30   |    Cor Amarelo e Azul       | R$ 1629,99   |\n");
          printf("| Bicicleta Woltze    Aro 26   |    Cor Branca e Cinza       | R$ 999,90    |\n");
          printf("| Bicicleta Hunter    Aro 29   |    Cor Vermelha e Preta     | R$ 1099,00   |\n");
          printf("| Bicicleta Gts       Aro 29   |    Cor Roxa e marrom        | R$ 1599,80   |\n");
          printf("| Biciccleta Stark    Aro 29   |    Cor Branca e Verde       | R$ 1499,00   |\n");
          printf("|---------------------------------------------------------------------------|\n");
          printf("digite 0 para fechar o menu\n");
          scanf("%d",&opcao2);
            }

            if(opcao2==3)
            {
                 printf("|-----------------------------------------------------------------|\n");
                 printf("Área de alugeul de bicicletas\n");
                 printf("No momento temos essas bicicletas que podem ser alugadas\n");
                 printf("Biciclceta Caloi cor Branca, aluguel saindo por R$ 100,00/dia\n");
                 printf("Bicicleta GTS cor Branca, alguel saindo por R$ 150,00/dia\n");
                 printf("Bicicleta Stark cor Branca, aluguel por R$ 125,00/dia\n");
                 printf("|-----------------------------------------------------------------|\n");
                 printf("digite 0 para fechar o menu\n");
                 scanf("%d",&opcao2);
                }
            }while(opcao2!=0);
      }
            }while(opcao!=0);
printf("|-----------------------------------------------------------------|\n");
    printf("Obrigado e volte sempre!\n");
printf("|-----------------------------------------------------------------|\n");
    return 0;
}
