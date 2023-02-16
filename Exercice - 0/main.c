#include <stdio.h>

typedef struct personne{
    int age;
    char nom[20];
}person;

int main() {
    person p;
    person *pp;
    pp = &p;
    printf("%s", "Veuillez mettre votre âge : ");
    scanf("%d", &p.age);
    printf("%d", p.age);



    return 0;
}
