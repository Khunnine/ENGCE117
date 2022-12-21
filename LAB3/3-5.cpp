#include <stdio.h>
#include <string.h>
struct album {
    char title [20];
    char artist[20];
    char years [20];
};

void Input(struct album *alb);

int main(){
    struct album ab;
    Input(&ab);
    printf("%s is a Thai band ", ab.title);
    printf("have a singer is %s", ab.artist);
    printf(" The group first formed in %s", ab.years);
}

void Input(struct album *alb){
    printf("About: ");
    gets (alb->title);
    printf("Who is the lead singer: ");
    gets (alb->artist);
    printf("What year was the band founded: ");
    scanf("%s", alb->years);
}