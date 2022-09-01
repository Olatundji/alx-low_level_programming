nclure  " listes.h "



/* *
 *
 * * free_dlistint - Libère une liste liée dlistint_t.
 *
 * * @head : La tête de la liste dlistint_t.
 *
 *  */

void  free_dlistint ( dlistint_t *head)

{

		dlistint_t *tmp;



			tandis que (tête)

					{

								tmp = tête-> suivant ;

										libre (tête);

												tête = tmp ;

													}

}
