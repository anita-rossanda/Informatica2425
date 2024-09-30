/*Calcola il resto ricevuto dal benzinaio: dopo aver inserito il numero di litri di carburante introdotto nel motorino 
e il costo al litro della benzina, il programma deve visualizzare l’importo da pagare. L’utente digita l’importo 
di una banconota di valore superiore a tale importo e il programma visualizza il resto della banconota che questi deve ricevere.*/

#include <stdio.h>
int main (){
    float litri=0, costolitro=0, importo=0, banconota=0, resto=0;
        printf("Inserisci i litri: ");
        scanf("%f",&litri);
            printf("Inserisci costolitro: ");
            scanf("%f",&costolitro);
                importo=(litri*costolitro);
                    scanf("L'importo da pagare vale: %.2f,importo");
                        printf("Inserisci banconota: ");
                        scanf("%f",&banconota);
                            resto=(banconota-importo);
                            scanf("Il resto vale: %.2f,resto");

}