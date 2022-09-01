# inclure  " listes.h "

/* *
* add_dnodeint_end - Ajoute un nouveau nœud à la fin d'une liste dlistint_t.
* @head : un pointeur vers l'en-tête de la liste dlistint_t.
* @n : L'entier que le nouveau nœud doit contenir.
*
* Retour : Si la fonction échoue - NULL.
* Sinon - l'adresse du nouveau nœud.
 */
dlistint_t * add_dnodeint_end ( dlistint_t **head, const  int n)
{
	dlistint_t *nouveau, *dernier ;

	new = malloc ( sizeof ( dlistint_t ));
	si (nouveau == NULL )
		retour ( NULL );

	nouveau-> n = n ;
	nouveau-> suivant = NULL ;

	si (*tête == NULL )
	{
		nouveau-> précédent = NULL ;
		*tête = nouveau ;
		retour (nouveau);
	}

	dernier = *tête ;
	while (dernier-> suivant != NULL )
		dernier = dernier-> suivant ;
	dernier-> suivant = nouveau ;
	nouveau-> précédent = dernier ;

	retour (nouveau);
}
