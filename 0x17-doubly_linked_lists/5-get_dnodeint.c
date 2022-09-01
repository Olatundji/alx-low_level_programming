nclure  " listes.h "



/* *
 *
 * * get_dnodeint_at_index - Localise un nœud dans une liste dlistint_t.
 *
 * * @head : La tête de la liste dlistint_t.
 *
 * * @index : le nœud à localiser.
 *
 * *
 *
 * * Retour : Si le nœud n'existe pas - NULL.
 *
 * * Sinon - l'adresse du nœud localisé.
 *
 *  */

dlistint_t * get_dnodeint_at_index ( dlistint_t *head, index int non signé ) 

{

		pour (; indice != 0 ; indice --)

				{

							si (tête == NULL )

											retour ( NULL );

									tête = tête-> suivant ;

										}



			retour (tête);

}
