#ifndef EXERCICE1_H_INCLUDED
#define EXERCICE1_H_INCLUDED

typedef enum {     //On definit le type du booléen

    false,
    true

} Booleen;

typedef struct queue_element{   //Definition de la queue : pn cree un type de structure nommée queue_element, avec une initialisation entier nommée value , puis on pointe la prochaine file.
        int value;
        struct element *next;
        struct temp, Queue;  //structure temporaire (pour stocker une donnée temporairement, le Queue est en Q majuscule pour eviter un conflit.

}queue_element, *Queue;

static queue_element *first = NULL;  //Parametres de la queue : Le premier element et le dernier sont null , au debut.
static queue_element *last = NULL;
static  char str[7] = "";
static int nb_elements = 0;

Booleen is_empty_queue(void);  //Condition booléene pour une file vide
char length_queue(void);    //char longueur_queue
char first_queue(void);    //char premiere queue
char last_queue(void);      //char derniere queue
void print_queue(void);     //char afficher queue
void clear_queue(void);     //char effacer queue
void push_queue(void);       //ajouter un element la queue
void back_queue(void);       //enlever un element de la queue

#endif // EXERCICE1_H_INCLUDED
