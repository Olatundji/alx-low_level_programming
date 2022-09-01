ier : 0-print_dlistint.c

* Auteur : Ukonu Divine Chisom
*
*  */



# inclure  " listes.h "



/* *
 *
 * * print_dlistint - Imprime tous les éléments d'une liste dlistint_t.
 *
 * * @h : La tête de la liste dlistint_t.
 *
 * *
 *
 * * Retour : Le nombre de nœuds dans la liste.
 *
 *  */

size_t  print_dlistint ( const  dlistint_t *h)

{

		taille_t nœuds = 0 ;



			tandis que (h)

					{

								nœuds++ ;

										printf ( " %d \n " , h-> n );

												h = h-> suivant ;

													}



				retour (nœuds);

}
