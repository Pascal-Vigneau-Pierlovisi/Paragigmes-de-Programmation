#include <stdio.h>
#include <math.h>

int main(){

    int m = 7;
    int S = 0;

    for(int n = 1; n <= m; n++){
        S = S + (n * ((int)pow(-1, n-1)));
    }

    printf("%d", S);
    return 1;
}