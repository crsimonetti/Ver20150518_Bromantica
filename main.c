#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FNAMEG "normale.csv"
#define FNAMESG "senzaGlutine.csv"
#define nome_max 20
#define descrizione_max 50
#define numeroRicette 5



struct s_ricetta{
    char nome[nome_max+1];
    char descrizione[descrizione_max+1];
    int pomodoro;
    int mozzarella;
    char glutine;
};
typedef struct s_ricetta ricette;

int main(int argc, char *argv[]) {
FILE *puntafile;
int *p;
int i,glutine;
ricette elenco[numeroRicette];
p = (int*)malloc(numeroRicette*sizeof(int));

for(i=0;i<numeroRicette;i++){
        printf("Inserire 0 se la ricetta non contiene glutine, altrimenti inserire 1\n");
        scanf ("%d",&glutine);
            if(glutine==1){
                puntafile=fopen(FNAMEG, "wb");
                if (puntafile == NULL) {
                    printf("Impossibile aprire il file.");
                }
                else {
                
                printf("inserisci il nome della ricetta: \n");
                scanf("%s", elenco[i].nome);
                printf("inserisci la descrizione della ricetta: \n");
                scanf("\n%[^\n]", elenco[i].descrizione);
                printf("inserisci la quantità di pomodoro in grammi: \n");
                scanf("%s", &elenco[i].pomodoro);
                printf("inserisci la quantità di mozzarella in grammi: \n");
                scanf("%s", &elenco[i].mozzarella);
                printf("la ricetta contiene glutine?: \n");
                scanf("%s", elenco[i].glutine);
                
                
                }
            }
            else {
             puntafile=fopen(FNAMESG, "wb");
                if (puntafile == NULL) {
                    printf("Impossibile aprire il file.");
                }
                else {
                
                printf("inserisci il nome della ricetta: \n");
                scanf("%s", elenco[i].nome);
                printf("inserisci la descrizione della ricetta: \n");
                scanf("\n%[^\n]", elenco[i].descrizione);
                printf("inserisci la quantità di pomodoro in grammi: \n");
                scanf("%s", &elenco[i].pomodoro);
                printf("inserisci la quantità di mozzarella in grammi: \n");
                scanf("%s", &elenco[i].mozzarella);
                printf("la ricetta contiene glutine?: \n");
                scanf("%s", elenco[i].glutine); 
                
                }
            }

    }

fwrite(&elenco, sizeof(elenco),1,puntafile);
fclose(puntafile);
    
    return (EXIT_SUCCESS);
}
