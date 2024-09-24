#include <stdio.h>

int main(){
    int prezzobiglietto,prov;
    printf("Inserisci il prezzo biglietto[€]: ");
    scanf("%d",&prezzobiglietto);
    prov=prezzobiglietto*15/100;
    prezzobiglietto=prezzobiglietto+prov;
    printf("La provvigione è di %d €\n",prov);
    printf("Il prezzo finale del biglietto è di %d €",prezzobiglietto+prov);
    return 0;
    //Per qualche motivo se uso le variabili come float mi da in input 0 per entrambe le variabili
}
