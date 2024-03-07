#include <stdio.h>
#include <stdlib.h>

float calculTVA(float HT,float tauxTVA){
return HT*tauxTVA/100;
}
float calculTTC(float HT,float montantTVA){
return HT+montantTVA;
}

int main()
{
	char client[60],article1[60],article2[60],article3[60],mode[60];
	float HT,tauxTVA,montantTVA,totalTTC;
	int i=0;
	do{
		printf("Entrer le nom du client:\n");
		scanf("%s",&client);
		printf("Entrer le nom d'article 1:\n");
		scanf("%s",&article1);
		printf("Entrer le nom d'article 1:\n");
		scanf("%s",&article2);
		printf("Entrer le nom d'article 1:\n");
		scanf("%s",&article3);
		printf("Entrer le total HT:\n");
		scanf("%f",&HT);
		printf("Entrer le taux TVA:\n");
		scanf("%f",&tauxTVA);
		printf("Entrer le mode de paiement:\n");
		scanf("%s",&mode);

		montantTVA = calculTVA(HT, tauxTVA);
    totalTTC = calculTTC(HT, montantTVA);


    printf("\nDonnées de la facture\n");
    printf("Le nom du client est : %s\n", client);
    printf("Les articles : %s, %s, %s\n", article1, article2, article3);
    printf("Le montant total HT : %.2f\n", HT);
    printf("Le taux de TVA : %.2f%%\n", tauxTVA);
    printf("Le montant TVA : %.2f\n", montantTVA);
    printf("Le montant total TTC : %.2f\n", totalTTC);
    printf("Le mode de paiement : %s\n", mode);

		    printf("\nSi vous voulez de passer au niveau client taper 1 sinon 0\n");
            scanf("%d",&i);
	}while(i);
    return 0;
}
