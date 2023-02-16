#include <stdio.h>
#include <math.h>

int main(){

    double first = pow(3, 0) + pow(3, 1) + pow(3, 2) + pow(3, 3) + pow(3, 4);
    double second = 1.5 * pow(3, 4);
    printf("Somme : ");
    printf("%f ", first);
    printf("Asymptote : ");
    printf("%f ", second);

}