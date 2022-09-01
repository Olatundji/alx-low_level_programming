nclure  " listes.h "



/* *
 *
 * * delete_dnodeint_at_index - Supprime un nœud d'un dlistint_t
 *
 * * à un indice donné.
 *
 * * @head : un pointeur vers l'en-tête de dlistint_t.
 *
 * * @index : l'index du nœud à supprimer.
 *
 * *
 *
 * * Retour : En cas de succès - 1.
 *
 * * Sinon - -1.
 *
 *  */

int  delete_dnodeint_at_index ( dlistint_t **tête, index int non signé ) 

{

		dlistint_t *tmp = *head ;



			si (*tête == NULL )

						retour (- 1 );



				pour (; indice != 0 ; indice --)

						{

									si (tmp == NULL )

													retour (- 1 );

											tmp = tmp-> suivant ;

												}



					si (tmp == *tête)

							{

										*head = tmp-> suivant ;

												si (*tête != NULL )

																(*head)-> prev = NULL ;

													}



						autre

								{

											tmp-> préc -> suivant = tmp-> suivant ;

													si (tmp-> suivant != NULL )

																	tmp-> suivant -> préc = tmp-> préc ;

														}



							gratuit (tmp);

								retour ( 1 );

}
