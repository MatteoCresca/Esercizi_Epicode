#include <stdio.h>
#include <math.h>

int main()
{

    int numero;

    // Richiesta numero
    printf("Inserisci un numero\n");
    scanf("%i", &numero);
    while (numero <= 0)
    {
        // Controllo per verificare che il numero sia maggiore o uguale a 1
        printf("Il numero deve essere maggiore o uguale a 1\n");
        printf("Inserisci un numero:\n");
        scanf("%i", &numero);
    }
    // Calcolo area quadrato
    int AreaQ = (numero * numero); // Elevo alla seconda il numero per il calcolo dell'area del quadrato
    printf("\nDato il tuo numero %i,\n", numero);
    printf("L'area di un quadrato con lato %i sarebbe: %i", numero, AreaQ);

    // Calcolo area cerchio con diametro
    int p_greco = 3.14159;               // Imposto il Pi greco
    float raggio = (numero / 2);         // Imposto raggio cerchio
    float draggio = (raggio * raggio); // Elevo alla seconda il raggio
    float AreaC = (draggio * p_greco);   // Risolvo
    printf("\nDato il tuo numero %i come diametro di un cerchio\n", numero);
    printf("L'area del cerchio sarebbe %.1f\n", AreaC);

    // Calcolo area triangolo equilatero
    float Rad3 = sqrt(3);        // Calcolo radice di 3
    float Quad = (AreaQ / 4);    // Divido per 4 la potenza del numero inserito
    float AreaT = (Rad3 * Quad); // Calcolo area triangolo equilatero
    printf("Dato il tuo numero %i come lato l di un triangolo equilatero\n", numero);
    printf("L'area del triangolo sarà %.1f\n", AreaT);

    return 0;
}
