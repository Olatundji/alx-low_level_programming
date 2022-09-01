fndef LISTS_H

# définir  LISTS_H



/*
 *
 * * Fichier : listes.h
 *
 * * Auteur : Onyiana
 *
 *  */



# inclure  < stdio.h >

# inclure  < stdlib.h >



/* *
 *
 * * struct dlistint_s - liste doublement liée
 *
 * * @n : entier
 *
 * * @prev : pointe vers le nœud précédent
 *
 * * @next : pointe vers le nœud suivant
 *
 * *
 *
 * * Description : structure de nœuds de liste à double lien
 *
 * * pour le projet Holberton
 *
 *  */

typedef  structure dlistint_s

{

		int n ;

			struct dlistint_s *prev;

				struct dlistint_s *suivant ;

} dlistint_t ;



size_t  print_dlistint ( const  dlistint_t *h);

size_t  dlistint_len ( const  dlistint_t *h);

dlistint_t * add_dnodeint ( dlistint_t **head, const  int n);

dlistint_t * add_dnodeint_end ( dlistint_t **head, const  int n);

void  free_dlistint ( dlistint_t *head);

dlistint_t * get_dnodeint_at_index ( dlistint_t *head, index int non signé  );

int  sum_dlistint ( dlistint_t *head);

dlistint_t * insert_dnodeint_at_index ( dlistint_t **h, int non signé  idx, int n);

int  delete_dnodeint_at_index ( dlistint_t **tête, index int non signé  );



# endif  /* LISTS_H */
