<<<<<<< HEAD
#include <stdio.h> 
#include <stdlib.h>
#include <ctype.h> 
#include <string.h>
=======
#include <stdio.h> //Inclusao de biblioteca de funcoes basicas em C
#include <stdlib.h> //Inclusao de biblioteca de funcoes basicas em C
#include <ctype.h> //Inclusao de biblioteca para utilizacao de toupper, afim de reduzir erros do usuario   
#include <string.h>//Inclusao de biblioteca de strings em C
>>>>>>> 7f277f572fe135787ea257d85e3b7917dc49c1aa
#include "Bat.h"

int main(int argc, char *argv[])
{
    int err=argsOk(argc,argv);
    int t=argT(argv);
    int MD=argMD(argv);
    char rep[o][o];
    char oceano[o][o];
    int q_d=d;
    int q_s=s; 
    int q_t=t;
    int coluna_ataque=0;
    char linha_ataque=' '; 
    int linha_ataque_1=0;
    int tiro=0;

    if(err!=0){
        errorMSG(err);
        return err;
    }
    initOcean(oceano);
    submarinesIntoOcean(rep);
    if(MD==CORR)
        showSubmarines(rep,oceano); 
    showOcean(oceano);  
    showInventory(q_d,q_s,q_t);

    do{
        shootTorp(&linha_ataque,&coluna_ataque,&linha_ataque_1);
        if(errShoot(coluna_ataque,linha_ataque_1)!=0){ 
            printf("Voce digitou um setor do oceano inexistente.\n");
            return 1;
        }
        tiro=hitShoot(coluna_ataque,linha_ataque_1,rep,oceano);
        didHit(tiro,&q_t,&q_s);
        showOcean(oceano);
        showInventory(q_d,q_s,q_t);
    } while((q_t>0)&&((q_d>0)||(q_s>0)));
    
    endGame(q_d,q_s,q_t);
    
    return 0;
}
#include "Bat.c"
