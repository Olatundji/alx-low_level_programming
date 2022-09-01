# inclure  " listes.h "

/* *
* dlistint_len - Compte le nombre d'éléments dans une liste liée dlistint_t.
* @h : La tête de la liste dlistint_t.
*
* Retour : Le nombre d'éléments dans la liste dlistint_t.
 */
size_t  dlistint_len ( const  dlistint_t *h)
{
	taille_t nœuds = 0 ;

	tandis que (h)
	{
		nœuds++ ;
		h = h-> suivant ;
	}

	retour (nœuds);
}
