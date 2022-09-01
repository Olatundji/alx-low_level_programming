nclure  " listes.h "



/* *
 *
 * * sum_dlistint - Additionne toutes les données d'une liste dlistint_t.
 *
 * * @head : La tête de la liste dlistint_t.
 *
 * *
 *
 * * Retour : La somme de toutes les données.
 *
 *  */

int  sum_dlistint ( dlistint_t *head)

{

		entier somme = 0 ;



			tandis que (tête)

					{

								somme += tête-> n ;

										tête = tête-> suivant ;

											}



				retour (somme);

}
