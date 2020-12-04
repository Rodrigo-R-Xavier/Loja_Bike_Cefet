#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define max_name 50
int main()
{setlocale(LC_ALL,"");
    int mais_vendida, aluguel_da_bike, opcao,opcao2,opcao3,opcao4, i, escolha, bike_escolhida, diaria;
    float preco_bike, preco_das_pecas, mais_cara, preco_do_aluguel, total_aluguel, total_pecas, total_bikes, fatura;
    char marca_bike[max_name], cor[max_name], pecas_de_bike[max_name], bike_disponivel[max_name], modelo_favorito[max_name], simnao;
    // Foi alterado menos_vendida por modelo_favorito, poois não faria sentido ter uma opção que mostra a pior bicicleta da loja.

do{
    printf("|-----------------------------------------------------------------|\n");
    printf("|\t       ========================                           |\n");
    printf("|\t\t       BEM VINDO                                  |\n");
    printf("|\t\t BICICLETAS DO XANDÃO                             |\n");
    printf("|\t       ========================                           |\n");
    printf("|-----------------------------------------------------------------|\n");
system("color 0F");
      printf("|\t\t      PRESSIONE                                   |\n");
      printf("|\t\t     1-Abrir menu                                 |\n");
      printf("|\t\t   0-Fechar programa                              |\n");
      printf("|     Qualquer outro número irá resetar o programa                |\n");
      printf("|-----------------------------------------------------------------|\n");
      printf("\t\tPRESSIONE AQUI: [   ]\b\b\b");
      scanf("%d",&opcao);
      system("cls");

      if(opcao==1)
      {
          fflush(stdin);
system("color 0F");
     do

     {

         fflush(stdin);
    printf("|-----------------------------------------------------------------|\n");
    printf("|\t       ========================                           |\n");
    printf("|\t\t BICICLETAS DO XANDÃO                             |\n");
    printf("|\t\t\t MENU                                     |\n");
    printf("|\t       ========================                           |\n");
    printf("|-----------------------------------------------------------------|\n");
         printf("|                                                                 |\n");
         printf("|1- Peças disponiveis                                             |\n");
         printf("|                                                                 |\n");
         printf("|2- Bicicletas                                                    |\n");
         printf("|                                                                 |\n");
         printf("|3- Aluguel de bicicleta                                          |\n");
         printf("|                                                                 |\n");
         printf("|4- Gerar fatura/total                                            |\n");
         printf("|                                                                 |\n");
         printf("|5- Zerar compra                                                  |\n");
         printf("|                                                                 |\n");
         printf("|0- Fechar menu                                                   |\n");
         printf("|                                                                 |\n");
         printf("|-----------------------------------------------------------------|\n");
         printf("\t\tSELECIONE A OPÇÃO DESEJADA [   ]\b\b\b");
         scanf("%d",&opcao2);
         fflush(stdin);

         system("cls");

        if(opcao2==1)
        {
            do{
            fflush(stdin);

    printf("|-----------------------------------------------------------------|\n");
    printf("|\t       ============================                       |\n");
    printf("|\t\t BICICLETAS DO XANDÃO                             |\n");
    printf("|\t\t\t MENU                                     |\n");
    printf("|\t\t    PEÇAS DISPONIVEIS                             |\n");
    printf("|\t       ============================                       |\n");
    printf("|-----------------------------------------------------------------|\n");

          printf("|-----------------------------------------------------------------|\n");
          printf("|                   Produto                            |   Preço  |\n");
          printf("|------------------------------------------------------|----------|\n");
          printf("| Alavanca Passador de câmbio Yamada                   | R$ 74,90 |\n");
          printf("| Guidão DH Uno Al-29                                  | R$ 27,46 |\n");
          printf("| Pedal Gts                                            | R$ 60,00 |\n");
          printf("| Pneu Greestone-Aro 29                                | R$ 80,00 |\n");
          printf("| Disco de Freio GTSM1                                 | R$ 330,00|\n");
          printf("|-----------------------------------------------------------------|\n");
                 printf("Digite 0 Voltar\n\n");
                 printf("SELECIONE A OPÇÃO DESEJADA [   ]\b\b\b");
          scanf("%d",&opcao3);


if(opcao3==1)
{
printf("Peça1, Alavanca Passador de câmbio Yamada\n");
total_pecas=total_pecas+74,90;
}
if(opcao3==2)
{
           printf("Peça2, Guidão DH Uno Al-29\n");
           total_pecas=total_pecas+27,46;
}
if(opcao3==3)
{
           printf("Peça3,Pedal Gts\n");
           total_pecas=total_pecas+60,00;
}
if(opcao3==4)
{
           printf("Peça4,Pneu Greestone-Acro 29\n");
           total_pecas=total_pecas+80,00;
}
if(opcao3==5)
{
           printf("Peça5,Disco de Freio GTSM1\n");
           total_pecas=total_pecas+330,00;
}
}while(opcao3!=0);
          printf("|-----------------------------------------------------------------|\n");

          system("cls");
                   //aqui coloque o q achar melhor, nome, numero o que preferirem.
        }
do{
            if(opcao2==2)
            {
                fflush(stdin);

    printf("|-----------------------------------------------------------------|\n");
    printf("|\t       ============================                       |\n");
    printf("|\t\t BICICLETAS DO XANDÃO                             |\n");
    printf("|\t\t\t MENU                                     |\n");
    printf("|\t\t BICICLETAS DISPONIVEIS                           |\n");
    printf("|\t       ============================                       |\n");
    printf("|-----------------------------------------------------------------|\n");
          printf("|                        Produto                     |    Preço   |\n");
          printf("|-----------------------------------------------------------------|\n");
          printf("|Bicicleta DROPP ZEX Aro 30  | Cor Amarelo e Azul    | R$ 1629,99 |\n");
          printf("|Bicicleta Woltze    Aro 26  | Cor Branca e Cinza    | R$ 999,90  |\n");
          printf("|Bicicleta Hunter    Aro 29  | Cor Vermelha e Preta  | R$ 1099,00 |\n");
          printf("|Bicicleta Gts       Aro 29  | Cor Roxa e marrom     | R$ 1599,80 |\n");
          printf("|Biciccleta Stark    Aro 29  | Cor Branca e Verde    | R$ 1499,00 |\n");
          printf("|-----------------------------------------------------------------|\n");
                 printf("Digite 0 para Voltar\n\n");
                 printf("SELECIONE A OPÇÃO DESEJADA [   ]\b\b\b");
          scanf("%d",&opcao4);
if(opcao4==1)
{
printf("Bicicleta DROPP ZEX Aro 30\n");
total_pecas=total_pecas+1629.99;
}
if(opcao4==2)
{
           printf("Bicicleta Woltze Aro 26\n");
           total_pecas=total_pecas+999.90;
}
if(opcao4==3)
{
           printf("Bicicleta Hunter Aro 29\n");
           total_pecas=total_pecas+1099.00 ;
}
if(opcao4==4)
{
           printf("Bicicleta Gts Aro 29 \n");
           total_pecas=total_pecas+1599.80;
}
if(opcao4==5)
{
           printf("Biciccleta Stark  Aro 29\n");
           total_pecas=total_pecas+1499.00;
}
}
system("pause");
          system("cls");

            }while(opcao4!=0);

            if(opcao2==3)
            {
                  fflush(stdin);

    printf("|-----------------------------------------------------------------|\n");
    printf("|\t       =========================                          |\n");
    printf("|\t\t BICICLETAS DO XANDÃO                             |\n");
    printf("|\t\t\t MENU                                     |\n");
    printf("|\t\t   ALUGUEL DISPONIVEIS                            |\n");
    printf("|\t        ========================                          |\n");
    printf("|-----------------------------------------------------------------|\n");
         printf("|-----------------------------------------------------------------|\n");
         printf("|  No momento temos essas bicicletas que podem ser alugadas       |\n");
         printf("|            ESCOLHA  A OPÇÃO DE SEU INTERESSE                    |\n");
         printf("|-----------------------------------------------------------------|\n");
         printf("|                    Produto                     |     Preço      |\n");
         printf("|------------------------------------------------|----------------|\n");
         printf("|OPÇÃO 1 Bicicleta Caloi  Aro 30 |  Cor Branca   | R$ 100,00/dia  |\n");
         printf("|OPÇÃO 2 Bicicleta GTS    Aro 26 |  Cor Branca   | R$ 150,00/dia  |\n");
         printf("|OPÇÃO 3 Bicicleta Stark  Aro 29 |  Cor Branca   | R$ 125,00/dia  |\n");
         printf("|-----------------------------------------------------------------|\n");

         printf("\t\tESCOLHA ENTRE AS OPÇÕES: 1, 2 e 3 [   ]\b\b\b");
         scanf("%d",&bike_escolhida);

         if (bike_escolhida==1)
         {
             system("cls");
             preco_do_aluguel=100;
    printf("|-----------------------------------------------------------------|\n");
    printf("|\t       =========================                          |\n");
    printf("|\t\t BICICLETAS DO XANDÃO                             |\n");
    printf("|\t\t\t MENU                                     |\n");
    printf("|\t\t   ALUGUEL DISPONIVEIS                            |\n");
    printf("|\t        ========================                          |\n");
    printf("|-----------------------------------------------------------------|\n");
    printf("|                                                                 |\n");
             printf("|\t\tA bicicleta escolhida foi:                        |\n");
             printf("|\tBicicleta Caloi, Aro 30, branca, R$ 100,00/dia            |\n");
    printf("|-----------------------------------------------------------------|\n");
    printf("|                                                                 |\n");
              printf("|\tDeseja alugar esta bicicleta por quantos dias? [   ]      |\b\b\b\b\b\b\b\b\b\b");
             scanf("%d",&diaria);
             total_aluguel=preco_do_aluguel*diaria;
             fflush(stdin);
             printf("|-----------------------------------------------------------------|\n");
             printf("|                                                                 |\n");
             printf("|\tBicicleta alugada por [%d DIAS], total=R$%.2f            |\n",diaria,total_aluguel);
             printf("|-----------------------------------------------------------------|\n\n");
             system("pause");
             system("cls");


         }
         if (bike_escolhida==2)
         {
             system("cls");
             preco_do_aluguel=150;
    printf("|-----------------------------------------------------------------|\n");
    printf("|\t       =========================                          |\n");
    printf("|\t\t BICICLETAS DO XANDÃO                             |\n");
    printf("|\t\t\t MENU                                     |\n");
    printf("|\t\t   ALUGUEL DISPONIVEIS                            |\n");
    printf("|\t        ========================                          |\n");
    printf("|-----------------------------------------------------------------|\n");
    printf("|                                                                 |\n");
             printf("|\t\tA bicicleta escolhida foi:                        |\n");
             printf("|\tBicicleta GTS, Aro 26, branca, R$ 150,00/dia              |\n");
    printf("|-----------------------------------------------------------------|\n");
    printf("|                                                                 |\n");
              printf("|\tDeseja alugar esta bicicleta por quantos dias? [   ]      |\b\b\b\b\b\b\b\b\b\b");
             scanf("%d",&diaria);
             total_aluguel=preco_do_aluguel*diaria;
             fflush(stdin);
             printf("|-----------------------------------------------------------------|\n");
             printf("|                                                                 |\n");
             printf("|\tBicicleta alugada por [%d DIAS], total=R$%.2f            |\n",diaria,total_aluguel);
             printf("|-----------------------------------------------------------------|\n\n");
             system("pause");
             system("cls");


         }
                  if (bike_escolhida==3)
         {
             system("cls");
             preco_do_aluguel=125;
    printf("|-----------------------------------------------------------------|\n");
    printf("|\t       =========================                          |\n");
    printf("|\t\t BICICLETAS DO XANDÃO                             |\n");
    printf("|\t\t\t MENU                                     |\n");
    printf("|\t\t   ALUGUEL DISPONIVEIS                            |\n");
    printf("|\t        ========================                          |\n");
    printf("|-----------------------------------------------------------------|\n");
    printf("|                                                                 |\n");
             printf("|\t\tA bicicleta escolhida foi:                        |\n");
             printf("|\tBicicleta Stark, Aro 29, branca, R$ 125,00/dia            |\n");
    printf("|-----------------------------------------------------------------|\n");
    printf("|                                                                 |\n");
              printf("|\tDeseja alugar esta bicicleta por quantos dias? [   ]      |\b\b\b\b\b\b\b\b\b\b");
             scanf("%d",&diaria);
             total_aluguel=preco_do_aluguel*diaria;
             fflush(stdin);
             system("color F0");
             printf("|-----------------------------------------------------------------|\n");
             printf("|                                                                 |\n");
             printf("|\tBicicleta alugada por [%d DIAS], total=R$%.2f            |\n",diaria,total_aluguel);
             printf("|-----------------------------------------------------------------|\n\n");
             system("pause");
             system("cls");
             system("color 0F");
         }


      }


            if(opcao2==4)
            {
                system("color F0");
    printf("|-----------------------------------------------------------------|\n");
    printf("|\t       =========================                          |\n");
    printf("|\t\t BICICLETAS DO XANDÃO                             |\n");
    printf("|\t\t\t MENU                                     |\n");
    printf("|\t\t   TOTAL DA COMPRA                                |\n");
    printf("|\t        ========================                          |\n");
    printf("|-----------------------------------------------------------------|\n");

        fatura=total_aluguel+total_bikes+total_pecas;

    printf("|-----------------------------------------------------------------|\n");
    printf("|\t         TOTAL DA COMPRA= R$%.2f                          |\n",fatura);
    printf("|-----------------------------------------------------------------|\n\n");
        system("pause");
        system("cls");
        system("color 0F");

            }
            if(opcao2==5)
            {
                system("color F0");
    printf("|-----------------------------------------------------------------|\n");
    printf("|\t       =========================                          |\n");
    printf("|\t\t BICICLETAS DO XANDÃO                             |\n");
    printf("|\t\t\t MENU                                     |\n");
    printf("|\t\t     ZERAR COMPRA                                 |\n");
    printf("|\t        ========================                          |\n");
    printf("|-----------------------------------------------------------------|\n");
            total_aluguel=0;
            total_bikes=0;
            total_pecas=0;
            fatura=0;

    printf("|\t      [COMPRA CANCELADA] COM SUCESSO                      |\n");
    printf("|-----------------------------------------------------------------|\n");
    printf("|-----------------------------------------------------------------|\n");
    printf("|\t         TOTAL DA COMPRA= R$%.2f                          |\n",fatura);
    printf("|-----------------------------------------------------------------|\n\n");
            system("pause");
            system("cls");
            system("color 0F");
            }

            }while(opcao2!=0);
      }
}while(opcao!=0);
            system("color F0");
printf("\n\n|--------------------------------------------------------|\n");
    printf("\t\tObrigado e volte sempre!\n");
printf("|--------------------------------------------------------|\n");
    return 0;

}
