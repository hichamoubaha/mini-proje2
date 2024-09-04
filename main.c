#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_LIVRES 50

int main(){
	char titre[MAX_LIVRES][20];
	char auteur[MAX_LIVRES][20];
	int quantite[MAX_LIVRES], prix[MAX_LIVRES],cont_livre = 0;
	int choix,i,j;
	char titre_rechercher[20];


	do{
		printf("1. ajouter un livre\n");
		printf("2. afficher tous les livres\n");
		printf("3. rechercher un livre\n");
		printf("4. mis a jour la quantite\n");
		printf("5. supprimer un livre\n");
		printf("6. afficher le nombre totale de livre\n");

		printf("quelle est votre choix\n");
		scanf("%d",&choix);

		switch(choix){
			case 1:
				if(cont_livre<MAX_LIVRES){
					printf("donner un titre");
				scanf("%s",titre[cont_livre]);
				printf("donner le nom de auteur");
				scanf("%s",auteur[cont_livre]);
				printf("entrer le prix de livre");
				scanf("%d",&prix[cont_livre]);
				printf("donner la quantite");
				scanf("%d",&quantite[cont_livre]);
				cont_livre++;
				break;
				case 2:
					for(i=0;i<cont_livre;i++)
					{
						printf("le titre est %s , le nom de auteur est %s , le prix est %d ,la quantite est %d",titre[i],auteur[i],prix[i],quantite[i]);
					}
					break;
				case 3:
					printf("enter le titre  rechercher");
					scanf("%s",titre_rechercher[cont_livre]);
					for(i=0;i<cont_livre;i++)
					{
						if (strcmp(titre[i],titre_rechercher)==0){
							printf("voila le livre: %s , le nom de auteur est %s , le prix est %d ,la quantite est %d",titre_rechercher[i],auteur[i],prix[i],quantite[i]);

						}
					}
					break;

				}
				case 4:{
					printf("entrer le titre du livre pou mettre a jour : ");
					scanf("%s",titre_rechercher);
					for(i=0;i<cont_livre;i++){
						if(strcmp(titre[i],titre_rechercher)==0)
						{
							printf("nouvelle quantite  :");
							scanf("%d",&quantite[i]);
							break;
						}
					}

					break;
				}
				case 5:{
					printf("donner le titre du livre a supprimer");
					scanf("%s",titre_rechercher);
					for(i=0;i<cont_livre;i++){
						if(strcmp(titre[i],titre_rechercher)==0){
							for(j=i;j<cont_livre-1;j++){
								strcpy(titre[i],titre[j+1]);
								strcpy(auteur[j],auteur[j+1]);
								quantite[j]=quantite[j+1];
							}
							cont_livre--;
							printf("le livre est supprime");

						}
					}
					break;

				}
					case 6:
				printf("nombres totales des livres %d",cont_livre);
				break;
		default:
		printf("votre choix ne excite pas");
}
}while(choix>=1&&choix<=6);
	return 0;
}
