#include <stdio.h>
#include <stdlib.h>
#include "Exercice1prototypes.h"



Bool is_empty_queue(void)   //Initialisation de la file, en regardant au passage, si elle est vide
{
	if(first == NULL && last == NULL)
		return true;
}

    else if(first != NULL && last != NULL)
		return false;

}

void push_queue(char str[7]='Prenom')  //Insertion d'un element dans la file en premier d'abord FIRST IN
{
	queue_element *element;

	element = malloc(sizeof(*element));

	if(element == NULL)
	{
		printf("Erreur : il y'a un probleme allocation de memoire de type dynamique.\n");

	}

	element->value = str[];
	element->next = NULL;

	if(is_empty_queue())
	{
		first = element;
		last = element;
	}
	else
	{
		last->next = element;
		last = element;
	}

	nb_elements++;
}







void back_queue(void)   //Enleve un element de la file a partir du premier element FIRST OUT
{
	if(is_empty_queue())
	{
		printf("La file est deja vide, veuillez ajouter un element\n");
		return;
	}

	queue_element *temp = first;

	if(first == last)
	{
		first = NULL;
		last = NULL;
	}
	else
		first = first->next;

	free(temp);
	nb_elements--;
}



void print_queue(void)  //afficher la file : on regarde d'abord si la file est vide, sinon, on affiche la file complete
{
	if(is_empty_queue())
	{
		printf("la file est vide, il faut ajouter un element.\n");
		return;
	}

	queue_element *temp = first;

	while(temp != NULL)
	{
		printf("[%d] ", temp->value);
		temp = temp->next;
	}
	printf("\n");
}




int length_queue(void) //Retourner la taille de la file : on retourne combien il y'a d'elements actuellement dans la file
{
	return nb_elements;
}




int first_queue(void)  //Consulter le premier element de la file si la file n'est pas vide, alors on la retourne sinon on sort du programme.
	if(is_empty_queue())
		printf("Il n'ya plus d'element dans la file.\n");
         exit;

	return first->value;
}



int last_queue(void) //Consulter / retourner le dernier element de la file si la file n'est pas vide  sinon on sort du programme.
{
	if(is_empty_queue())
    printf("Il n'ya plus d'element dans la file.\n");
    exit;

	return last->value;
}




