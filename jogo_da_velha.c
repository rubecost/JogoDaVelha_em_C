#include <stdio.h>
#include <stdbool.h>

void escolhaJogada(void);
void executaJogada(int LN, int CL, char Pos[]);
void verificaGanhador(char Pos[]);
void tabuleiro(char Pos[]);

int Ox;
bool JogoEmAndamento = true;
int LcIndisponivel = 0;

int main()
{
    int escolha;
    bool verifica = true;
    char Txt1[] = "(jogar = 1) xo (sair = 2)";
    char Txt2[] = "Opcao invalida. Tente de novo!";

    printf("\nx------------o JOGO DA VELHA o------------x\n\n");   

    while(verifica)
    {
      // Menu jogar sair
      printf("\n%34.25s\n",Txt1);
      printf("\n                   : ");
      scanf("%d", &escolha);

        switch(escolha)
        {
            case 1 :
                 escolhaJogada();
                 break;
            case 2 :
                 return 0;
                 break;
           default: 
                 printf("\n\n%37.30s\n", Txt2);
                 continue;                
        }     
    }
    
}

void escolhaJogada(void){

    int linha, coluna;
    bool avaliaLinha = true;
    bool avaliaColuna = true;
    char Txt4[] = "Jogador : 1";
    char Txt5[] = "Jogador : 2";
    char Txt6[] = "linha : ";
    char Txt7[] = "Coluna : ";
    char Txt8[] = "Linha nao existe!";
    char Txt9[] = "Coluna nao existe!";

    char posicao[10] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};

    int vezesJogada = 0;
   
    do
    {
         // Define o jogador atual
         if(vezesJogada % 2 == 0) 
         {
            printf("\n\n%22.11s\n", Txt4); 
            Ox = 1;
         } 
         else 
         {
            printf("\n\n%22.11s\n", Txt5);   
            Ox = 2;
         }

         // Pede a linha
         do
         {
             printf("\n%21.8s", Txt6);
             scanf("%d", &linha );

             if(linha >= 1 && linha <= 3)
             {
                avaliaLinha = false;            
             }
             else
             {
                printf("\n%26.17s\n", Txt8);
                continue;
             }

         } while (avaliaLinha);

         // Pede a coluna
         do
         {
             printf("\n%21.9s", Txt7);
             scanf("%d", &coluna);

             if(coluna >= 1 && coluna <= 3)
             {
                avaliaColuna = false;          
             }
             else
             {
                printf("\n%27.18s\n", Txt9);
                continue;
             }

         } while (avaliaColuna);    

        executaJogada(linha,coluna,posicao);
        // Se foi digitado linha ou coluna ocupada, tabuleiro não recebe as informações
        if (LcIndisponivel == 0) tabuleiro(posicao);
        else vezesJogada += -1;

        verificaGanhador(posicao);

        vezesJogada++;

   } while(JogoEmAndamento);
  
  JogoEmAndamento = true;
}

void executaJogada(int LN, int CL, char Pos[]){

   char peca;
   char Txt10[] = "Local Indisponivel!";
   
   if(Ox == 1) peca = 'x';
   else peca = 'o';
    // Aplica jogada na linha e coluna escolhida
    switch(LN)
    {
          case 1 :
               if (CL == 1)
               {
                    if(Pos[0] == ' ') 
                    {
                       Pos[0] = peca;
                       LcIndisponivel = 0;
                    } 
                    else 
                    {
                       LcIndisponivel = 1;
                       printf("\n\n%25.19s\n",Txt10);
                    }
               }
               else if (CL == 2)
               {
                    if(Pos[1] == ' ')
                    {
                       Pos[1] = peca;
                       LcIndisponivel = 0;
                    } 
                    else
                    {
                       LcIndisponivel = 1;
                       printf("\n\n%25.19s\n",Txt10);
                    }
               }
              else if (CL == 3)
              {
                   if(Pos[2] == ' ')
                    {
                      Pos[2] = peca;
                      LcIndisponivel = 0;
                    } 
                    else
                    {
                       LcIndisponivel = 1;
                       printf("\n\n%25.19s\n",Txt10);
                    }
              }
          break;
          case 2 :
               if (CL == 1)
               {
                    if(Pos[3] == ' ')
                    {
                       Pos[3] = peca;
                       LcIndisponivel = 0;
                    } 
                    else
                    {
                       LcIndisponivel = 1;
                       printf("\n\n%25.19s\n",Txt10);
                    }
               }
               else if (CL == 2)
               {
                    if(Pos[4] == ' ')
                    {
                       Pos[4] = peca;
                       LcIndisponivel = 0;
                    } 
                    else
                    {
                       LcIndisponivel = 1;
                       printf("\n\n%25.19s\n",Txt10);
                    }
               }
               else if (CL == 3)
               {
                    if(Pos[5] == ' ')
                    {
                       Pos[5] = peca;
                       LcIndisponivel = 0;
                    } 
                    else
                    {
                       LcIndisponivel = 1;
                       printf("\n\n%25.19s\n",Txt10);
                    }
               }
          break;
          case 3 :
               if (CL == 1)
               {
                    if(Pos[6] == ' ')
                    {
                       Pos[6] = peca;
                       LcIndisponivel = 0;
                    } 
                    else
                    {
                       LcIndisponivel = 1;
                       printf("\n\n%25.19s\n",Txt10);
                    }
               }
               else if (CL == 2)
               {
                    if(Pos[7] == ' ')
                    {
                       Pos[7] = peca;
                       LcIndisponivel = 0;
                    } 
                    else
                    {
                       LcIndisponivel = 1;
                       printf("\n\n%25.19s\n",Txt10);
                    }
               }
               else if (CL == 3)
               {
                    if(Pos[8] == ' ')
                    {
                       Pos[8] = peca;
                       LcIndisponivel = 0;
                    } 
                    else
                    {
                       LcIndisponivel = 1;
                       printf("\n\n%25.19s\n",Txt10);
                    }
               }
          break;
    }
}
void verificaGanhador(char Pos[])
{
   bool Final = false;
   int Empate = 1;
   char peca;

   if(Ox == 1) peca = 'x';
   else peca = 'o';

     // Ganho na Horizontal
          if(Pos[0] == peca && Pos[1] == peca && Pos[2] == peca) Final = true;         
     else if(Pos[3] == peca && Pos[4] == peca && Pos[5] == peca) Final = true;
     else if(Pos[6] == peca && Pos[7] == peca && Pos[8] == peca) Final = true;
     // Ganho na Vertical
     else if(Pos[0] == peca && Pos[3] == peca && Pos[6] == peca) Final = true;
     else if(Pos[1] == peca && Pos[4] == peca && Pos[7] == peca) Final = true;
     else if(Pos[2] == peca && Pos[5] == peca && Pos[8] == peca) Final = true;
     // Ganho na Diagonal
     else if(Pos[0] == peca && Pos[4] == peca && Pos[8] == peca) Final = true;
     else if(Pos[2] == peca && Pos[4] == peca && Pos[6] == peca) Final = true;
     // Empate
     for(int i = 0; i <= 8; i++)
     {
         if(Pos[i] != ' ')
         {
            Empate++;
         }
     }
     if (Final == true)
     {
          JogoEmAndamento = false;
          printf("  ****** Voce venceu! Jogador : %d ******\n\n", Ox);
     }
     else if (Empate == 10)
     {
          JogoEmAndamento = false;
          printf("   ^^^^^^ Empate ninguem ganhou! ^^^^^^\n\n");
     }
}

void tabuleiro(char Pos[])
{
      char Txt2[] = "|   |";
      char Txt3[] = "___|___|___";

      printf("\n\n");
    
      printf("%24s\n", Txt2);
      printf("%18c | %c | %c\n", Pos[0],Pos[1],Pos[2]);
      printf("%27s\n", Txt3);
      printf("%24s\n", Txt2);
      printf("%18c | %c | %c\n", Pos[3],Pos[4],Pos[5]);
      printf("%27s\n", Txt3);
      printf("%24s\n", Txt2);
      printf("%18c | %c | %c\n", Pos[6],Pos[7],Pos[8]);
      printf("%24s\n", Txt2);

      printf("\n\n\n------------------------------------------\n\n");
}