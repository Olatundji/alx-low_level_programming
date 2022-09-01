nclure  " listes.h "



/* *
 *
 * * insert_dnodeint_at_index - Insère un nouveau nœud dans un dlistint_t
 *
 * * liste à une position donnée.
 *
 * * @h : un pointeur vers l'en-tête de la liste dlistint_t.
 *
 * * @idx : La position pour insérer le nouveau nœud.
 *
 * * @n : L'entier que le nouveau nœud doit contenir.
 *
 * *
 *
 * * Retour : Si la fonction échoue - NULL.
 *
 * * Sinon - l'adresse du nouveau nœud.
 *
 *  */

dlistint_t * insert_dnodeint_at_index ( dlistint_t **h, int non signé  idx, int n)

{

		dlistint_t *tmp = *h, *new ;



			si (idx == 0 )

						retour ( add_dnodeint (h, n));



				pour (; idx != 1 ; idx--)

						{

									tmp = tmp-> suivant ;

											si (tmp == NULL )

															retour ( NULL );

												}



					si (tmp-> suivant == NULL )

								retour ( add_dnodeint_end (h, n));



						new = malloc ( sizeof ( dlistint_t ));

							si (nouveau == NULL )

										retour ( NULL );



								nouveau-> n = n ;

									nouveau-> précédent = tmp ;

										nouveau-> suivant = tmp-> suivant ;

											tmp-> suivant -> précédent = nouveau ;

												tmp-> suivant = nouveau ;



													retour (nouveau);

}
