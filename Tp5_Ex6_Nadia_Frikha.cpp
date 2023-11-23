//Ex6:Ecrire un programme C permettant de saisir une chaine de caractères CH non vide et deb supprimer les blancs a gauche et a droite de la chaine CH.

#include <stdio.h>
#include <string.h>
#include<ctype.h>

int main() {
	char ch[10];
	int i,j ;
	
	// saisie d'une phrase non vide
	do{
		printf("saisir une phrase non vide");
		gets(ch);
	}while (strlen(ch)==0);
	
	//supression des blancs a gauche
	while(isspace(ch[0])){
		for (j=0; j<strlen(ch);j++){
			ch[j]=ch[j+1];
		}
	}
	
	//supression des blancs a droite
	i=0;
	while (isspace(ch[strlen(ch)-1+i])){
		ch[strlen(ch)-1]='\0';
		i--;
	}
	
	//affichage de la chaine 
	printf("chaine apres suppression des espaces:%s",ch);
	
	
	return 0;
}
