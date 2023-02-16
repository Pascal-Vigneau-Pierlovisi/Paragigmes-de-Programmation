#include <stdio.h>
int main(int argc, char* argv[])
{
    int MonnaieARendre=122;  // 122 en centimes d euros par exemple
    int n=5,i,j; //  n nombre de pieces différentes 1 Euro (100 cts), 50, 10,2,1 cts

    int tableauPieces[5]={100,50,10,2,1};  // tableau trie de pieces disponibles
    int tableauPiecesRendues[100]={};// 100 pieces max par exemple


/////////////////////////////////////////////////////////////////

//   Entrez votre code ici
int index = 0;
int index_tab = 0;
int monnaieRendu;

while(monnaieRendu != MonnaieARendre){
    if(tableauPieces[index] + monnaieRendu <= MonnaieARendre){
        tableauPiecesRendues[index_tab] = tableauPieces[index];
        monnaieRendu+= tableauPieces[index];
        index_tab++;
    }
    else{
        index++;
    }
}
    printf("Nombre d'itérations : %d \n", index_tab);

    for(int b = 0; b < index_tab; b++){
        if(tableauPiecesRendues[b] != 0){
            printf("Pièces rendues : %d \n", tableauPiecesRendues[b]);
        }
    }




//////////////////////////////////////////////////////////////////

    return 0;
}