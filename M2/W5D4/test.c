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
    int p_greco = 3.14159;             // Imposto il Pi greco
    float raggio = (numero / 2);       // Imposto raggio cerchio
    float draggio = (raggio * raggio); // Elevo alla seconda il raggio
    float AreaC = (draggio * p_greco); // Risolvo
    printf("\nDato il tuo numero %i come diametro di un cerchio\n", numero);
    printf("L'area del cerchio sarebbe %.1f\n", AreaC);

    // Calcolo area triangolo equilatero
    float Rad3 = sqrt(3);        // Calcolo radice di 3
    float Quad = (AreaQ / 4);    // Divido per 4 la potenza del numero inserito
    float AreaT = (Rad3 * Quad); // Calcolo area triangolo equilatero
    printf("Dato il tuo numero %i come lato l di un triangolo equilatero\n", numero);
    printf("L'area del triangolo sarà %.1f\n", AreaT);

    // Esercizio Facoltativo
    int num1;
    int num2;
    int num3;
    int num4;

    printf("\nBene, ora inserisci dei numeri:\n");

    // Richiesta numero 1
    printf("Numero 1:\n");
    scanf("%i", &num1);

    // Richiesta numero 2
    printf("Numero 2:\n");
    scanf("%i", &num2);

    // Richiesta numero 3
    printf("Numero 3:\n");
    scanf("%i", &num3);

    // Richiesta numero 4
    printf("Numero 4:\n");
    scanf("%i", &num4);

    // Riepilogo e calcolo media
    float somma = (num1 + num2 + num3 + num4);
    float media = somma / 4;
    int media1 = somma / 4;
    printf("\nHai inserito i numeri: %i, %i, %i, %i\n", num1, num2, num3, num4);
    printf("La loro media è %.2f, oppure %i", media, media1);


    // Calcolo aree utlizzando media con cifre decimali

    // Calcolo area quadrato
    float AreaQ1 = (media * media); // Elevo alla seconda il numero per il calcolo dell'area del quadrato
    printf("\nDato il tuo numero %.2f,\n", media);
    printf("L'area di un quadrato con lato %.2f sarebbe: %.2f", media, AreaQ1);

    // Calcolo area cerchio con diametro
    float raggio1 = (media / 2);          // Imposto raggio cerchio
    float draggio1 = (raggio1 * raggio1); // Elevo alla seconda il raggio
    float AreaC1 = (draggio1 * p_greco);  // Risolvo
    printf("\nDato il tuo numero %.2f come diametro di un cerchio\n", media);
    printf("L'area del cerchio sarebbe %.2f\n", AreaC1);

    // Calcolo area triangolo equilatero
    float Quad1 = (AreaQ1 / 4);    // Divido per 4 la potenza del numero inserito
    float AreaT1 = (Rad3 * Quad1); // Calcolo area triangolo equilatero
    printf("Dato il tuo numero %.2f come lato l di un triangolo equilatero\n", media);
    printf("L'area del triangolo sarà %.2f\n", AreaT1);


    // Calcolo aree con numero arrotondato

    // Calcolo area quadrato
    float AreaQ2 = (media1 * media1); // Elevo alla seconda il numero per il calcolo dell'area del quadrato
    printf("\nDato il tuo numero %i,\n", media1);
    printf("L'area di un quadrato con lato %i sarebbe: %.2f", media1, AreaQ2);

    // Calcolo area cerchio con diametro
    float raggio2 = (media1 / 2);          // Imposto raggio cerchio
    float draggio2 = (raggio2 * raggio2); // Elevo alla seconda il raggio
    float AreaC2 = (draggio2 * p_greco);  // Risolvo
    printf("\nDato il tuo numero %i come diametro di un cerchio\n", media1);
    printf("L'area del cerchio sarebbe %.2f\n", AreaC2);

    // Calcolo area triangolo equilatero
    float Quad2 = (AreaQ2 / 4);    // Divido per 4 la potenza del numero inserito
    float AreaT2 = (Rad3 * Quad2); // Calcolo area triangolo equilatero
    printf("Dato il tuo numero %i come lato l di un triangolo equilatero\n", media1);
    printf("L'area del triangolo sarà %.2f\n", AreaT2);



    return 0;
}
