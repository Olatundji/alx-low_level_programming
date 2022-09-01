nclure  " listes.h "



/* *
 *
 * * add_dnodeint - Ajoute un nouveau nœud au début d'une liste dlistint_t.
 *
 * * @head : un pointeur vers l'en-tête de la liste dlistint_t.
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

dlistint_t * add_dnodeint ( dlistint_t **head, const  int n)

{

		dlistint_t *nouveau ;



			new = malloc ( sizeof ( dlistint_t ));

				si (nouveau == NULL )

							retour ( NULL );



					nouveau-> n = n ;

						nouveau-> précédent = NULL ;

							nouveau-> suivant = *tête ;

								si (*tête != NULL )

											(*tête)-> préc = nouveau ;

									*tête = nouveau ;



										retour (nouveau);

}
