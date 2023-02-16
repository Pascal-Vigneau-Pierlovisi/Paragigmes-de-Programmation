#include <stdio.h>
#include <math.h>

int main(){

    int somme = 0;
    int n = 7;

    for(int k = 0; k <= n; k++){
        somme = somme + ((2*k+1) - (2*k));
    }

    printf("%d", somme);

}