#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define max_name 50
int main()
{setlocale(LC_ALL,"");
    int mais_vendida, aluguel_da_bike, opcao=0,opcao2=0,opcao3=0,opcao4=0, i, escolha, bike_escolhida, diaria;
    float preco_bike, preco_das_pecas, mais_cara, preco_do_aluguel, total_aluguel, total_pecas, total_bikes, fatura;
    char marca_bike[max_name], cor[max_name], pecas_de_bike[max_name], bike_disponivel[max_name], modelo_favorito[max_name], simnao;
    // Foi alterado menos_vendida por modelo_favorito, poois n�o faria sentido ter uma op��o que mostra a pior bicicleta da loja.
    // AS VARIAVEIS QUE N�O FORAM USADAS, SER�O APROVEITADAS NA PR�XIMA ETAPA DO TRABALHO/PROGRAMA.

do{
    printf("|-----------------------------------------------------------------|\n");
    printf("|\t       ========================                           |\n");
    printf("|\t\t       BEM VINDO                                  |\n");
    printf("|\t\t BICICLETAS DO XAND�O                             |\n");
    printf("|\t       ========================                           |\n");
    printf("|-----------------------------------------------------------------|\n");
system("color 0F");
      printf("|\t\t      PRESSIONE                                   |\n");
      printf("|\t\t     1-Abrir menu                                 |\n");
      printf("|\t\t   0-Fechar programa                              |\n");
      printf("|     Qualquer outro n�mero ir� resetar o programa                |\n");
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
 //area do programa que o usuario utiliza para navegar no programa
         fflush(stdin);
    printf("|-----------------------------------------------------------------|\n");
    printf("|\t       ========================                           |\n");
    printf("|\t\t BICICLETAS DO XAND�O                             |\n");
    printf("|\t\t\t MENU                                     |\n");
    printf("|\t       ========================                           |\n");
    printf("|-----------------------------------------------------------------|\n");
         printf("|                                                                 |\n");
         printf("|1- Pe�as disponiveis                                             |\n");
         printf("|                                                                 |\n");
         printf("|2- Bicicletas                                                    |\n");
         printf("|                                                                 |\n");
         printf("|3- Aluguel de bicicleta                                          |\n");
         printf("|-----------------------------------------------------------------|\n");
         printf("|4- Gerar fatura/total                                            |\n");
         printf("|                                                                 |\n");
         printf("|5- Zerar compra                                                  |\n");
         printf("|                                                                 |\n");
         printf("|0- Fechar menu                                                   |\n");
         printf("|                                                                 |\n");
         printf("|-----------------------------------------------------------------|\n");
         printf("\t\tSELECIONE A OP��O DESEJADA [   ]\b\b\b");
         scanf("%d",&opcao2);
         fflush(stdin);

         system("cls");
       //area das pecas de bicicleta que tem disponiveis na loja
        if(opcao2==1)
        {
            do{
            fflush(stdin);

    printf("|-----------------------------------------------------------------|\n");
    printf("|\t       ============================                       |\n");
    printf("|\t\t BICICLETAS DO XAND�O                             |\n");
    printf("|\t\t\t MENU                                     |\n");
    printf("|\t\t    PE�AS DISPONIVEIS                             |\n");
    printf("|\t       ============================                       |\n");
    printf("|-----------------------------------------------------------------|\n");
          printf("|-----------------------------------------------------------------|\n");
          printf("|                   Produto                            |   Pre�o  |\n");
          printf("|------------------------------------------------------|----------|\n");
          printf("|(1)Alavanca Passador de c�mbio Yamada                 | R$ 74,90 |\n");
          printf("|(2)Guid�o DH Uno Al-29                                | R$ 27,46 |\n");
          printf("|(3)Pedal Gts                                          | R$ 60,00 |\n");
          printf("|(4)Pneu Greestone-Aro 29                              | R$ 80,00 |\n");
          printf("|(5)Disco de Freio GTSM1                               | R$ 330,00|\n");
          printf("|-----------------------------------------------------------------|\n");
                 printf("Digite 0 Voltar\n\n");
                 printf("SELECIONE A OP��O DESEJADA [   ]\b\b\b");
          scanf("%d",&opcao3);


if(opcao3==1)
{
    system("cls");
    printf("|-----------------------------------------------------------------|\n");
    printf("|\t       ============================                       |\n");
    printf("|\t\t BICICLETAS DO XAND�O                             |\n");
    printf("|\t\t\t MENU                                     |\n");
    printf("|\t\t    PE�AS DISPONIVEIS                             |\n");
    printf("|\t       ============================                       |\n");
    printf("|-----------------------------------------------------------------|\n");
    printf("|                                                                 |\n");
    printf("|\t\tA pe�a escolhida foi:                             |\n");
    printf("|\tPe�a 1, Alavanca Passador de c�mbio Yamada R$ 74,90       |\n");
    printf("|-----------------------------------------------------------------|\n");
    printf("|                                                                 |\n");
    total_pecas=total_pecas+74,90;
    fatura=total_aluguel+total_bikes+total_pecas;
    system("pause");
    system("cls");
}
if(opcao3==2)
{
    system("cls");
    printf("|-----------------------------------------------------------------|\n");
    printf("|\t       ============================                       |\n");
    printf("|\t\t BICICLETAS DO XAND�O                             |\n");
    printf("|\t\t\t MENU                                     |\n");
    printf("|\t\t    PE�AS DISPONIVEIS                             |\n");
    printf("|\t       ============================                       |\n");
    printf("|-----------------------------------------------------------------|\n");
    printf("|                                                                 |\n");
    printf("|\t\tA pe�a escolhida foi:                             |\n");
    printf("|\tPe�a 2, Guid�o DH Uno Al-29 R$ 27,46                      |\n");
    printf("|-----------------------------------------------------------------|\n");
    printf("|                                                                 |\n");
    total_pecas=total_pecas+27,46;
    fatura=total_aluguel+total_bikes+total_pecas;
    system("pause");
    system("cls");
}
if(opcao3==3)
{
    system("cls");
    printf("|-----------------------------------------------------------------|\n");
    printf("|\t       ============================                       |\n");
    printf("|\t\t BICICLETAS DO XAND�O                             |\n");
    printf("|\t\t\t MENU                                     |\n");
    printf("|\t\t    PE�AS DISPONIVEIS                             |\n");
    printf("|\t       ============================                       |\n");
    printf("|-----------------------------------------------------------------|\n");
    printf("|                                                                 |\n");
    printf("|\t\tA pe�a escolhida foi:                             |\n");
    printf("|\tPe�a 3,Pedal Gts R$ 60,00                                 |\n");
    printf("|-----------------------------------------------------------------|\n");
    printf("|                                                                 |\n");
    total_pecas=total_pecas+60,00;
    fatura=total_aluguel+total_bikes+total_pecas;
    system("pause");
    system("cls");
}
if(opcao3==4)
{
    system("cls");
    printf("|-----------------------------------------------------------------|\n");
    printf("|\t       ============================                       |\n");
    printf("|\t\t BICICLETAS DO XAND�O                             |\n");
    printf("|\t\t\t MENU                                     |\n");
    printf("|\t\t    PE�AS DISPONIVEIS                             |\n");
    printf("|\t       ============================                       |\n");
    printf("|-----------------------------------------------------------------|\n");
    printf("|                                                                 |\n");
    printf("|\t\tA pe�a escolhida foi:                             |\n");
    printf("|\tPe�a 4,Pneu Greestone-Acro 29 R$ 80,00                     |\n");
    printf("|-----------------------------------------------------------------|\n");
    printf("|                                                                 |\n");
    total_pecas=total_pecas+80,00;
    fatura=total_aluguel+total_bikes+total_pecas;
    system("pause");
    system("cls");
}
if(opcao3==5)
{
    system("cls");
    printf("|-----------------------------------------------------------------|\n");
    printf("|\t       ============================                       |\n");
    printf("|\t\t BICICLETAS DO XAND�O                             |\n");
    printf("|\t\t\t MENU                                     |\n");
    printf("|\t\t    PE�AS DISPONIVEIS                             |\n");
    printf("|\t       ============================                       |\n");
    printf("|-----------------------------------------------------------------|\n");
    printf("|                                                                 |\n");
    printf("|\t\tA pe�a escolhida foi:                             |\n");
    printf("|\tPe�a 5,Disco de Freio GTSM1 R$ 330,00                     |\n");
    printf("|-----------------------------------------------------------------|\n");
    printf("|                                                                 |\n");
    total_pecas=total_pecas+330,00;
    fatura=total_aluguel+total_bikes+total_pecas;
    system("pause");
    system("cls");
}
}while(opcao3!=0);
                   //aqui coloque o q achar melhor, nome, numero o que preferirem.
        }
        //area onde o cliente/ususario pode ver as bicicletas disponiveiss
do{
            if(opcao2==2)
            {
                fflush(stdin);

    printf("|-----------------------------------------------------------------|\n");
    printf("|\t       ============================                       |\n");
    printf("|\t\t BICICLETAS DO XAND�O                             |\n");
    printf("|\t\t\t MENU                                     |\n");
    printf("|\t\t BICICLETAS DISPONIVEIS                           |\n");
    printf("|\t       ============================                       |\n");
    printf("|-----------------------------------------------------------------|\n");
          printf("|                        Produto                      |   Pre�o   |\n");
          printf("|-----------------------------------------------------------------|\n");
          printf("|(1)Bicicleta DROPP ZEX Aro 30 | Cor Amarelo e Azul   | R$ 1629,99|\n");
          printf("|(2)Bicicleta Woltze    Aro 26 | Cor Branca e Cinza   | R$ 999,90 |\n");
          printf("|(3)Bicicleta Hunter    Aro 29 | Cor Vermelha e Preta | R$ 1099,00|\n");
          printf("|(4)Bicicleta Gts       Aro 29 | Cor Roxa e marrom    | R$ 1599,80|\n");
          printf("|(5)Biciccleta Stark    Aro 29 | Cor Branca e Verde   | R$ 1499,00|\n");
          printf("|-----------------------------------------------------------------|\n");
                 printf("Digite 0 para Voltar\n\n");
                 printf("SELECIONE A OP��O DESEJADA [   ]\b\b\b");
          scanf("%d",&opcao4);
          system("cls");
if(opcao4==1)
{
printf("|-----------------------------------------------------------------|\n");
    printf("|\t       ============================                       |\n");
    printf("|\t\t BICICLETAS DO XAND�O                             |\n");
    printf("|\t\t\t MENU                                     |\n");
    printf("|\t\t BICICLETAS DISPONIVEIS                           |\n");
    printf("|\t       ============================                       |\n");
    printf("|-----------------------------------------------------------------|\n");
    printf("|                                                                 |\n");
             printf("|\t\tA bicicleta escolhida foi:                        |\n");
             printf("|\tBicicleta DROPP ZEX Aro 30 R$1629.99                      |\n");
    printf("|-----------------------------------------------------------------|\n");
    printf("|                                                                 |\n");
    total_bikes=total_bikes+1629.99;
    fatura=total_aluguel+total_bikes+total_pecas;
}
if(opcao4==2)
{
printf("|-----------------------------------------------------------------|\n");
    printf("|\t       ============================                       |\n");
    printf("|\t\t BICICLETAS DO XAND�O                             |\n");
    printf("|\t\t\t MENU                                     |\n");
    printf("|\t\t BICICLETAS DISPONIVEIS                           |\n");
    printf("|\t       ============================                       |\n");
    printf("|-----------------------------------------------------------------|\n");
    printf("|                                                                 |\n");
             printf("|\t\tA bicicleta escolhida foi:                        |\n");
             printf("|\tBicicleta Woltze Aro 26 R$999.90                         |\n");
    printf("|-----------------------------------------------------------------|\n");
    printf("|                                                                 |\n");
    total_bikes=total_bikes+999.90;
    fatura=total_aluguel+total_bikes+total_pecas;
}
if(opcao4==3)
{
    printf("|-----------------------------------------------------------------|\n");
    printf("|\t       ============================                       |\n");
    printf("|\t\t BICICLETAS DO XAND�O                             |\n");
    printf("|\t\t\t MENU                                     |\n");
    printf("|\t\t BICICLETAS DISPONIVEIS                           |\n");
    printf("|\t       ============================                       |\n");
    printf("|-----------------------------------------------------------------|\n");
    printf("|                                                                 |\n");
             printf("|\t\tA bicicleta escolhida foi:                        |\n");
             printf("|\tBicicleta Hunter Aro 29 R$1099.00                         |\n");
    printf("|-----------------------------------------------------------------|\n");
    printf("|                                                                 |\n");
    total_bikes=total_bikes+1099.00;
    fatura=total_aluguel+total_bikes+total_pecas;
}
if(opcao4==4)
{
    printf("|-----------------------------------------------------------------|\n");
    printf("|\t       ============================                       |\n");
    printf("|\t\t BICICLETAS DO XAND�O                             |\n");
    printf("|\t\t\t MENU                                     |\n");
    printf("|\t\t BICICLETAS DISPONIVEIS                           |\n");
    printf("|\t       ============================                       |\n");
    printf("|-----------------------------------------------------------------|\n");
    printf("|                                                                 |\n");
             printf("|\t\tA bicicleta escolhida foi:                        |\n");
             printf("|\tBicicleta Gts Aro 29 R$1599.80                            |\n");
    printf("|-----------------------------------------------------------------|\n");
    printf("|                                                                 |\n");
    total_bikes=total_bikes+1599.80;
    fatura=total_aluguel+total_bikes+total_pecas;
}
if(opcao4==5)
{
    printf("|-----------------------------------------------------------------|\n");
    printf("|\t       ============================                       |\n");
    printf("|\t\t BICICLETAS DO XAND�O                             |\n");
    printf("|\t\t\t MENU                                     |\n");
    printf("|\t\t BICICLETAS DISPONIVEIS                           |\n");
    printf("|\t       ============================                       |\n");
    printf("|-----------------------------------------------------------------|\n");
    printf("|                                                                 |\n");
             printf("|\t\tA bicicleta escolhida foi:                        |\n");
             printf("|\tBiciccleta Stark  Aro 29 R$1499.00                        |\n");
    printf("|-----------------------------------------------------------------|\n");
    printf("|                                                                 |\n");
    total_bikes=total_bikes+1499.00;
    fatura=total_aluguel+total_bikes+total_pecas;
}
}
          system("pause");
          system("cls");

            }while(opcao4!=0);
             //area do aluguel de bicicletas
            if(opcao2==3)
            {
                  fflush(stdin);

    printf("|-----------------------------------------------------------------|\n");
    printf("|\t       =========================                          |\n");
    printf("|\t\t BICICLETAS DO XAND�O                             |\n");
    printf("|\t\t\t MENU                                     |\n");
    printf("|\t\t   ALUGUEL DISPONIVEIS                            |\n");
    printf("|\t        ========================                          |\n");
    printf("|-----------------------------------------------------------------|\n");
         printf("|-----------------------------------------------------------------|\n");
         printf("|  No momento temos essas bicicletas que podem ser alugadas       |\n");
         printf("|            ESCOLHA  A OP��O DE SEU INTERESSE                    |\n");
         printf("|-----------------------------------------------------------------|\n");
         printf("|                    Produto                     |     Pre�o      |\n");
         printf("|------------------------------------------------|----------------|\n");
         printf("|OP��O 1 Bicicleta Caloi  Aro 30 |  Cor Branca   | R$ 100,00/dia  |\n");
         printf("|OP��O 2 Bicicleta GTS    Aro 26 |  Cor Branca   | R$ 150,00/dia  |\n");
         printf("|OP��O 3 Bicicleta Stark  Aro 29 |  Cor Branca   | R$ 125,00/dia  |\n");
         printf("|-----------------------------------------------------------------|\n");

         printf("\t\tESCOLHA ENTRE AS OP��ES: 1, 2 e 3 [   ]\b\b\b");
         scanf("%d",&bike_escolhida);

         if (bike_escolhida==1)
         {
             system("cls");
             preco_do_aluguel=100;
    printf("|-----------------------------------------------------------------|\n");
    printf("|\t       =========================                          |\n");
    printf("|\t\t BICICLETAS DO XAND�O                             |\n");
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
             total_aluguel=total_aluguel+preco_do_aluguel*diaria;
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
    printf("|\t\t BICICLETAS DO XAND�O                             |\n");
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
             total_aluguel=total_aluguel+preco_do_aluguel*diaria;
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
    printf("|\t\t BICICLETAS DO XAND�O                             |\n");
    printf("|\t\t\t MENU                                     |\n");
    printf("|\t\t   ALUGUEL DISPONIVEIS                            |\n");
    printf("|\t        ========================                          |\n");
    printf("|-----------------------------------------------------------------|\n");
    printf("|                                                                 |\n");
             printf("|\t\tA bicicleta escolhida foi:                        |\n");
             printf("|\tBicicleta Stark, Aro 29, branca, R$ 125,00/dia            |\n");
    printf("|-----------------------------------------------------------------|\n");
    printf("|                                                                 |\n");
            //dias q a bicicleta ficar� com o cliente
              printf("|\tDeseja alugar esta bicicleta por quantos dias? [   ]      |\b\b\b\b\b\b\b\b\b\b");
             scanf("%d",&diaria);
             total_aluguel=total_aluguel+preco_do_aluguel*diaria;
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

            //area onde mostra a fatura/conta que tera q ser paga
            if(opcao2==4)
            {
                system("color F0");
    printf("|-----------------------------------------------------------------|\n");
    printf("|\t       =========================                          |\n");
    printf("|\t\t BICICLETAS DO XAND�O                             |\n");
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
            //sistema feito para caso o usuario queira cancelar a compra
            if(opcao2==5)
            {
                system("color F0");
    printf("|-----------------------------------------------------------------|\n");
    printf("|\t       =========================                          |\n");
    printf("|\t\t BICICLETAS DO XAND�O                             |\n");
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
//fim do programa
            system("color F0");
printf("\n\n|--------------------------------------------------------|\n");
    printf("\t\tObrigado e volte sempre!\n");
printf("|--------------------------------------------------------|\n");
    return 0;
}
