#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void)
{
    float d;            /* numero inserito */
    float aq, ac, at;   /* area quadrato, cerchio, triangolo */
    float r;            /* raggio del cerchio */
    /* stampa cosa eseguira il programma */
    printf("calcolo di aree\n\n") ;
    printf("Immetti il valore di D:") ;
    scanf("%f", &d) ;
    // Calcola area del quadrato di lato D
    aq = d * d;
    aq = pow (d, 2);
    // Raggio del cerchio
    r = d/2;
    // Area del cerchio
    ac = M_PI * (r * r);
    ac = M_PI * pow (r, 2);
    // Area del triangolo equilatero di lato D
    at = (sqrt (3) / 4 ) * (d * d);
    at = (sqrt (3) / 4 ) * pow (d, 2);

    // Stampa il risultato
    printf ("\n");
    printf ("Le aree calcolate sono :\n");
    printf ("Area del quadrato di lato %f = %f\n", d, aq);
    printf(" Area del cerchio di diametro %f = %f\n", d, ac);
    printf (" Area del triangolo equilatero di lato %f = %f\n", d, at);

    exit (0);
}