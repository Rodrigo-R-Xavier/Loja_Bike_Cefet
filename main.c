#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define max_name 50

struct cadastro
{
 char nome[max_name];
 int dia,mes,ano,telefone;
 int cartao;
 char endereco[max_name];
 int cpf;
};

void desconto_peca(float *pecas)
{
 *pecas=*pecas-(*pecas*0.25);
}
void desconto_bike(float *bikes)
{
*bikes=*bikes-(*bikes*0.30);

}

void desconto_aluguel(float *aluguel)
{
*aluguel=*aluguel-(*aluguel*0.22);
}

int main()
{setlocale(LC_ALL,"");

    int mais_vendida, aluguel_da_bike, opcao=0,opcao2=0,opcao3=0,opcao4=0,opcao5=0, opcao6=0, i=0, escolha, bike_escolhida, diaria;
    float preco_bike=0, preco_das_pecas=0, mais_cara=0,vip=0, preco_do_aluguel=0, total_aluguel=0, total_pecas=0, total_bikes=0, fatura=0, faturan=0,pontos=0,total_pontos=0;
    char marca_bike[max_name], cor[max_name], pecas_de_bike[max_name], bike_disponivel[max_name], modelo_favorito[max_name], simnao;
    // Foi alterado menos_vendida por modelo_favorito, poois não faria sentido ter uma opção que mostra a pior bicicleta da loja.
    // AS VARIAVEIS QUE NÃO FORAM USADAS, SERÃO APROVEITADAS NA PRÓXIMA ETAPA DO TRABALHO/PROGRAMA.
struct cadastro f[i];
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
 //area do programa que o usuario utiliza para navegar no programa

         fflush(stdin);
         printf("|-----------------------------------------------------------------|\n");
         printf("|\t       ========================                           |\n");
         printf("|\t\t BICICLETAS DO XANDÃO                             |\n");
         printf("|\t\t\t MENU                                     |\n");
         printf("|\t       ========================                           |\n");
         printf("|-----------------------------------------------------------------|\n");
         printf("|                                                                 |\n");
         printf("|1- Cadastre-se na Loja                                           |\n");
         printf("|                                                                 |\n");
         printf("|2- Peças Disponíveis                                             |\n");
         printf("|                                                                 |\n");
         printf("|3- Bicicletas                                                    |\n");
         printf("|                                                                 |\n");
         printf("|4- Aluguel de Bicicleta                                          |\n");
         printf("|                                                                 |\n");
         printf("|5- FAÇA SEU CARTÃO VIP                                           |\n");
         printf("|                                                                 |\n");
         printf("|6- Gerar Fatura/total                                            |\n");
         printf("|                                                                 |\n");
         printf("|                                                                 |\n");
         printf("|7- Zerar compra                                                  |\n");
         printf("|                                                                 |\n");
         printf("|0- Fechar menu                                                   |\n");
         printf("|                                                                 |\n");
         printf("|-----------------------------------------------------------------|\n");
         printf("\t\tSELECIONE A OPÇÃO DESEJADA [   ]\b\b\b");
         scanf("%d",&opcao2);

         system("cls");

           if (opcao2==1)
                {

                    fflush(stdin);
                printf("|-----------------------------------------------------------------|\n");
                printf("|\t       =========================                          |\n");
                printf("|\t\t BICICLETAS DO XANDÃO                             |\n");
                printf("|\t\t       CADASTRO                                   |\n");
                printf("|\t       =========================                          |\n");
                printf("|-----------------------------------------------------------------|\n");
                printf("|\t       PREENCHA OS CAMPOS ABAIXO                          |\n");
                printf("|-----------------------------------------------------------------|\n");

                    fflush(stdin);
                    printf("\nINFORME >>>>NOME<<<\n");
                    gets(f[i].nome);
                    fflush(stdin);

                    printf("\nINFORME >>>>DATA DE NASCIMENTO<<<");
                    printf("\nATENÇÃO coloque o dia aperte enter, coloque o mes em NÚMERO aperte enter e coloque o ano\n");
                    scanf("%d",&f[i].dia);
                    scanf("%d",&f[i].mes);
                    scanf("%d",&f[i].ano);

                    printf("\nINFORME >>>>CPF<<<\n");
                    scanf("%d",&f[i].cpf);

                    fflush(stdin);
                    printf("\nINFORME >>>>CEP<<<\n");
                    gets(f[i].endereco);
                    fflush(stdin);
                    printf("\nINFORME >>>>CHAVE PIX<<<\n");
                    scanf("%d",&f[i].cartao);

                    system("cls");
                    fflush(stdin);
                printf("|-----------------------------------------------------------------|\n");
                printf("|\t       =========================                          |\n");
                printf("|\t\t BICICLETAS DO XANDÃO                             |\n");
                printf("|\t\t       CADASTRO                                   |\n");
                printf("|\t\t   DADOS ARMAZENADOS                              |\n");
                printf("|\t       =========================                          |\n");
                printf("|-----------------------------------------------------------------|\n");
                    printf(">>>NOME %s\n",f[i].nome);
                    printf(">>>DATA DE NASCIMENTO %d/%d/%d \n",f[i].dia,f[i].mes,f[i].ano);
                    printf(">>>CPF %d \n",f[i].cpf);
                    printf(">>>CEP %s \n",f[i].endereco);
                    printf(">>>CHAVE PIX %d \n",f[i].cartao);
                    printf("|-----------------------------------------------------------------|\n");
                    printf("|\t\tPARABÉNS, CADASTRO CONCLUIDO                      |\n");
                    printf("|-----------------------------------------------------------------|\n");
                    system("pause");
                    system("cls");

                }
       //area das pecas de bicicleta que tem disponiveis na loja

        if(opcao2==2)
        {
            do{


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
          printf("|(1)Alavanca Passador de câmbio Yamada                 | R$ 74,90 |\n");
          printf("|(2)Guidão DH Uno Al-29                                | R$ 27,46 |\n");
          printf("|(3)Pedal Gts                                          | R$ 60,00 |\n");
          printf("|(4)Pneu Greestone-Aro 29                              | R$ 80,00 |\n");
          printf("|(5)Disco de Freio GTSM1                               | R$ 330,00|\n");
          printf("|-----------------------------------------------------------------|\n");
                 printf("Digite 0 Voltar\n\n");
                 printf("SELECIONE A OPÇÃO DESEJADA [   ]\b\b\b");
          scanf("%d",&opcao3);


if(opcao3==1)
{
    system("cls");
    printf("|-----------------------------------------------------------------|\n");
    printf("|\t       ============================                       |\n");
    printf("|\t\t BICICLETAS DO XANDÃO                             |\n");
    printf("|\t\t\t MENU                                     |\n");
    printf("|\t\t    PEÇAS DISPONIVEIS                             |\n");
    printf("|\t       ============================                       |\n");
    printf("|-----------------------------------------------------------------|\n");
    printf("|                                                                 |\n");
    printf("|\t\tA peça escolhida foi:                             |\n");
    printf("|\tPeça 1, Alavanca Passador de câmbio Yamada R$ 74,90       |\n");
    printf("|-----------------------------------------------------------------|\n");
    printf("|                                                                 |\n");
    total_pecas=total_pecas+74,90;

    system("pause");
    system("cls");
}
if(opcao3==2)
{
    system("cls");
    printf("|-----------------------------------------------------------------|\n");
    printf("|\t       ============================                       |\n");
    printf("|\t\t BICICLETAS DO XANDÃO                             |\n");
    printf("|\t\t\t MENU                                     |\n");
    printf("|\t\t    PEÇAS DISPONIVEIS                             |\n");
    printf("|\t       ============================                       |\n");
    printf("|-----------------------------------------------------------------|\n");
    printf("|                                                                 |\n");
    printf("|\t\tA peça escolhida foi:                             |\n");
    printf("|\tPeça 2, Guidão DH Uno Al-29 R$ 27,46                      |\n");
    printf("|-----------------------------------------------------------------|\n");
    printf("|                                                                 |\n");
    total_pecas=total_pecas+27,46;

    system("pause");
    system("cls");
}
if(opcao3==3)
{
    system("cls");
    printf("|-----------------------------------------------------------------|\n");
    printf("|\t       ============================                       |\n");
    printf("|\t\t BICICLETAS DO XANDÃO                             |\n");
    printf("|\t\t\t MENU                                     |\n");
    printf("|\t\t    PEÇAS DISPONIVEIS                             |\n");
    printf("|\t       ============================                       |\n");
    printf("|-----------------------------------------------------------------|\n");
    printf("|                                                                 |\n");
    printf("|\t\tA peça escolhida foi:                             |\n");
    printf("|\tPeça 3,Pedal Gts R$ 60,00                                 |\n");
    printf("|-----------------------------------------------------------------|\n");
    printf("|                                                                 |\n");
    total_pecas=total_pecas+60,00;

    system("pause");
    system("cls");
}
if(opcao3==4)
{
    system("cls");
    printf("|-----------------------------------------------------------------|\n");
    printf("|\t       ============================                       |\n");
    printf("|\t\t BICICLETAS DO XANDÃO                             |\n");
    printf("|\t\t\t MENU                                     |\n");
    printf("|\t\t    PEÇAS DISPONIVEIS                             |\n");
    printf("|\t       ============================                       |\n");
    printf("|-----------------------------------------------------------------|\n");
    printf("|                                                                 |\n");
    printf("|\t\tA peça escolhida foi:                             |\n");
    printf("|\tPeça 4,Pneu Greestone-Acro 29 R$ 80,00                     |\n");
    printf("|-----------------------------------------------------------------|\n");
    printf("|                                                                 |\n");
    total_pecas=total_pecas+80,00;

    system("pause");
    system("cls");
}
if(opcao3==5)
{
    system("cls");
    printf("|-----------------------------------------------------------------|\n");
    printf("|\t       ============================                       |\n");
    printf("|\t\t BICICLETAS DO XANDÃO                             |\n");
    printf("|\t\t\t MENU                                     |\n");
    printf("|\t\t    PEÇAS DISPONIVEIS                             |\n");
    printf("|\t       ============================                       |\n");
    printf("|-----------------------------------------------------------------|\n");
    printf("|                                                                 |\n");
    printf("|\t\tA peça escolhida foi:                             |\n");
    printf("|\tPeça 5,Disco de Freio GTSM1 R$ 330,00                     |\n");
    printf("|-----------------------------------------------------------------|\n");
    printf("|                                                                 |\n");
    total_pecas=total_pecas+330,00;

    system("pause");
    system("cls");
}
}while(opcao3!=0);
                   //aqui coloque o q achar melhor, nome, numero o que preferirem.
        }
        //area onde o cliente/ususario pode ver as bicicletas disponiveiss

        if(opcao2==3)
            {
                do{
                fflush(stdin);

    printf("|-----------------------------------------------------------------|\n");
    printf("|\t       ============================                       |\n");
    printf("|\t\t BICICLETAS DO XANDÃO                             |\n");
    printf("|\t\t\t MENU                                     |\n");
    printf("|\t\t BICICLETAS DISPONIVEIS                           |\n");
    printf("|\t       ============================                       |\n");
    printf("|-----------------------------------------------------------------|\n");
          printf("|                        Produto                      |   Preço   |\n");
          printf("|-----------------------------------------------------------------|\n");
          printf("|(1)Bicicleta DROPP ZEX Aro 30 | Cor Amarelo e Azul   | R$ 1629,99|\n");
          printf("|(2)Bicicleta Woltze    Aro 26 | Cor Branca e Cinza   | R$ 999,90 |\n");
          printf("|(3)Bicicleta Hunter    Aro 29 | Cor Vermelha e Preta | R$ 1099,00|\n");
          printf("|(4)Bicicleta Gts       Aro 29 | Cor Roxa e marrom    | R$ 1599,80|\n");
          printf("|(5)Biciccleta Stark    Aro 29 | Cor Branca e Verde   | R$ 1499,00|\n");
          printf("|-----------------------------------------------------------------|\n");
                 printf("Digite 0 para Voltar\n\n");
                 printf("SELECIONE A OPÇÃO DESEJADA [   ]\b\b\b");
          scanf("%d",&opcao4);
          system("cls");
if(opcao4==1)
{
printf("|-----------------------------------------------------------------|\n");
    printf("|\t       ============================                       |\n");
    printf("|\t\t BICICLETAS DO XANDÃO                             |\n");
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

}
if(opcao4==2)
{
printf("|-----------------------------------------------------------------|\n");
    printf("|\t       ============================                       |\n");
    printf("|\t\t BICICLETAS DO XANDÃO                             |\n");
    printf("|\t\t\t MENU                                     |\n");
    printf("|\t\t BICICLETAS DISPONIVEIS                           |\n");
    printf("|\t       ============================                       |\n");
    printf("|-----------------------------------------------------------------|\n");
    printf("|                                                                 |\n");
             printf("|\t\tA bicicleta escolhida foi:                        |\n");
             printf("|\tBicicleta Woltze Aro 26 R$999.90                         |\n");
    printf("|-----------------------------------------------------------------|\n");
    printf("|                                                                 |\n");
    total_bikes=total_bikes+999;

}
if(opcao4==3)
{
    printf("|-----------------------------------------------------------------|\n");
    printf("|\t       ============================                       |\n");
    printf("|\t\t BICICLETAS DO XANDÃO                             |\n");
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

}
if(opcao4==4)
{
    printf("|-----------------------------------------------------------------|\n");
    printf("|\t       ============================                       |\n");
    printf("|\t\t BICICLETAS DO XANDÃO                             |\n");
    printf("|\t\t\t MENU                                     |\n");
    printf("|\t\t BICICLETAS DISPONIVEIS                           |\n");
    printf("|\t       ============================                       |\n");
    printf("|-----------------------------------------------------------------|\n");
    printf("|                                                                 |\n");
             printf("|\t\tA bicicleta escolhida foi:                        |\n");
             printf("|\tBicicleta Gts Aro 29 R$1599.80                            |\n");
    printf("|-----------------------------------------------------------------|\n");
    printf("|                                                                 |\n");
    total_bikes=total_bikes+1599;

}
if(opcao4==5)
{
    printf("|-----------------------------------------------------------------|\n");
    printf("|\t       ============================                       |\n");
    printf("|\t\t BICICLETAS DO XANDÃO                             |\n");
    printf("|\t\t\t MENU                                     |\n");
    printf("|\t\t BICICLETAS DISPONIVEIS                           |\n");
    printf("|\t       ============================                       |\n");
    printf("|-----------------------------------------------------------------|\n");
    printf("|                                                                 |\n");
             printf("|\t\tA bicicleta escolhida foi:                        |\n");
             printf("|\tBiciccleta Stark  Aro 29 R$1499.00                        |\n");
    printf("|-----------------------------------------------------------------|\n");
    printf("|                                                                 |\n");
    total_bikes=total_bikes+1499;

}


}while(opcao4!=0);
          system("pause");
          system("cls");

            }
             //area do aluguel de bicicletas
            if(opcao2==4)
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
            //dias q a bicicleta ficará com o cliente
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
      if(opcao2==5)
            {

                fflush(stdin);
                printf("|-----------------------------------------------------------------|\n");
                printf("|\t       =========================                          |\n");
                printf("|\t\t BICICLETAS DO XANDÃO                             |\n");
                printf("|\t       =========================                          |\n");
                printf("|-----------------------------------------------------------------|\n");

                printf("CARTÃO VIP!\n");
                printf("Acumule pontos ou Compre seu CARTÃO VIP\n");
                printf("Abaixo estão os beneficios de fazer um CARTÃO VIP\n");

                printf("\n");

                printf("|-----------------------------------------------------------------|\n");
                printf("|\t       BENEFICIOS DO CARTAO VIP                           |\n");
                printf("|\t       =========================                          |\n");
                printf("|------------------------------------------------------------------|\n");
                printf("|\t      NA COMPRA DE UM CARTÃO VIP, VOCÊ RECEBE...              |\n");
                printf("|1- 25 PORCENTO DE DESCONTO NA COMPRA DO TOTAL DE PEÇAS COMPRADAS  |\n");
                printf("|2- 30 PORCENTO DE DESCONTO NA COMPRA DE BISCICLETAS               |\n");
                printf("|3- 22 PORCENTO DE DESCONTO NO ALUGUEL DE BICSICLETAS              |\n");
                printf("|4- 15 POR CENTO DE CASHBACK EM TODAS AS COMPRAS                   |\n");
                printf("|5- COMPRAS ENTREGUES 2X MAIS RAPIDO                               |\n");
                printf("|6- MELHORES CONDIÇÕES NO ATENDIMENTO                              |\n");
                printf("|7- BICICLETA CALOI ARO 30 BRANCA---BRINDE                         |\n");
                printf("|------------------------------------------------------------------|\n");

                printf("Digite 1 para fazer o CARTÃO VIP e 0 para VOLTAR NO MENU\n");

                printf("Você deseja fazer o CARTÃO VIP por apenas R$500?\n");
                scanf("%d",&opcao5);
                system("cls");
                fflush(stdin);

                if (opcao5==1)
                {
                    fflush(stdin);
                printf("|-----------------------------------------------------------------|\n");
                printf("|\t       =========================                          |\n");
                printf("|\t\t BICICLETAS DO XANDÃO                             |\n");
                printf("|\t       =========================                          |\n");
                printf("|-----------------------------------------------------------------|\n");

                printf("|-----------------------------------------------------------------|\n");
                printf("|Parabéns o seu CARTÃO VIP foi colocado no carrinho!              |\n");
                printf("|Finalize a compra e faca o cadastro para ter os beneficios       |\n");
                printf("|-----------------------------------------------------------------|\n");
                vip=500;
                system("pause");
                system("cls");

                }

            }

            //area onde mostra a fatura/conta que tera q ser paga
            if(opcao2==6)
            {
                system("color F0");
    printf("|-----------------------------------------------------------------|\n");
    printf("|\t       =========================                          |\n");
    printf("|\t\t BICICLETAS DO XANDÃO                             |\n");
    printf("|\t\t\t MENU                                     |\n");
    printf("|\t\t   TOTAL DA COMPRA                                |\n");
    printf("|\t        ========================                          |\n");
    printf("|-----------------------------------------------------------------|\n");

         fatura=total_aluguel+total_bikes+total_pecas+vip;
         printf("|-----------------------------------------------------------------|\n");
         printf("|         TOTAL DA COMPRA >SEM< beneficio VIP= R$%.2f        |\n",fatura);
         printf("|-----------------------------------------------------------------|\n");
        desconto_bike(&total_pecas);
        desconto_bike(&total_bikes);
        desconto_bike(&total_aluguel);
        fatura=total_aluguel+total_bikes+total_pecas+vip;
        pontos=fatura/100;
        total_pontos=total_pontos+pontos;

    printf("|-----------------------------------------------------------------|\n");
    printf("|             TOTAL DA COMPRA >SOM< beneficio VIP= R$%.2f        |\n",fatura);
    printf("|\t         TOTAL DE PONTOS= P$%.2f                          |\n",pontos);
    printf("|-----------------------------------------------------------------|\n\n");
        system("pause");
        system("cls");
        system("color 0F");

            }

            //sistema feito para caso o usuario queira cancelar a compra
            if(opcao2==7)
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
            total_pontos=0;
            pontos=0;
            vip=0;
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
