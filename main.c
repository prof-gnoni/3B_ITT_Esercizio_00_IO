#include <stdio.h>

int main(void) {
    int i;
    int spaces = 10;
    int risposta;
    float f;
    double d;
    char c;

    i = 12;
    f = 12.5f;
    d = 12.5;
    c = 'p';
    printf("Per i valori interi il linguaggio C prevede due placeholder alternativi ed equivalenti: il %%d e il %%i\n");
    printf("Il valore della variabile i e': %d (usando il placeholder %%d)\n",i);
    printf("Il valore della variabile i e': %i (usando il placeholder %%i)\n",i);
    // Questo è un commento di linea. Tutto cio' che scrivo in questa linea di codice verrà ignorato totalmente dal compilatore.
    // Useremo i commenti per documentare il nostro codice e annotarci i passaggi più delicati.
    /*  Esistono anche i commenti multilinea e vengono aperti con la combo /*
        e chiusi con la combo */
    /*  In pratica possiamo aprire un commento multilinea e scrivere tutto cio' che ci pare su diverse righe e
        chiudere solo alla fine del nostro commento.
    */
    printf("\n");
    printf("Per i valori float il linguaggio C prevede il placeholder %%f\n");
    printf("Il valore della variabile f e': %f (usando il placeholder %%f)\n",f);
    printf("\n");
    printf("Per i valori double il linguaggio C prevede il placeholder %%lf\n");
    printf("Il valore della variabile d e': %lf (usando il placeholder %%lf)\n",d);
    printf("\n");
    printf("Per i valori char il linguaggio C prevede il placeholder %%c\n");
    printf("Il valore della variabile c e': %c (usando il placeholder %%c)\n",c);
    printf("\n");
    printf("Potremmo ache aver bisogno di formattare un valore in notazione scientifica. C puo' farlo\n");
    printf("utilizzando il placeholder %%e. Notiamo il seguente output per esempio:\n");
    printf("Il valore della variabile f e': %e (usando il placeholder %%e)\n",f);
    printf("Ovviamente funziona anche con i double: il valore della variabile d e': %e (usando il placeholder %%e).\n",d);
    printf("\n");
    printf("Esiste anche il placeholder %%g. Per semplificare, potremmo dire che il %%g formatta il valore\n");
    printf("nel modo piu' breve tra %%f e %%e. Facciamo un esempio:\n");
    /*
     * More complicated completely correct definition of %g: If the exponent is < 4 or >= the precision,
     * then use %e, otherwise use %f. Trailing zeroes and a trailing decimal point are not printed.
     */
    printf("Il valore della variabile f e': %g (usando il placeholder %%g)\n",f);
    printf("Possiamo usarlo anche con i double: il valore della variabile d e': %g (usando il placeholder %%g)\n",d);
    printf("\n");
    printf("Vediamo ora qualcosina di piu' divertente (divertente? per chi?)\n");
    printf("Possiamo decidere quanti spazi-console utilizzare per visualizzare l'output.\n");
    printf("E' più semplice spiegarlo attraverso degli esempi.\n");
    printf("Cominciamo con gli interi:\n");
    printf("Il valore della variabile i e': %5d\n",i);
    printf("Il valore della variabile i e': %9d\n",i);
    printf("Il valore della variabile i e': %-9d\n",i);
    printf("E se volessimo utilizzare un numero di spazi-console forniti da una variabile?\n");
    printf("Il valore della variabile i e': %*d\n",spaces,i);
    printf("Tutto chiaro (1 = si' | 0 = no)?");
    scanf("%d", &risposta);
    if( risposta == 0 ) {
        printf("Meglio alzare la mano e chiedere ai prof di spiegare meglio.\n");
    }
    else {
        printf("Bravo!\n");
    }

    /*
    printf("Inserisci un valore intero: ");
    scanf("%d",&i);
    printf("Inserisci un valore float: ");
    scanf("%f",&f);
    printf("Inserisci un valore double: ");
    scanf("%d",&i);
    */

    return 0;
}