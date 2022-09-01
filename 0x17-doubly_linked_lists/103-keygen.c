nclure  < stdio.h >

# inclure  < stdlib.h >

# inclure  < chaîne.h >



/* *
 *
 * * main - Génère et imprime les mots de passe pour l'exécutable crackme5.
 *
 * * @argc : Le nombre d'arguments fournis au programme.
 *
 * * @argv : Un tableau de pointeurs vers les arguments.
 *
 * *
 *
 * * Retour : toujours 0.
 *
 *  */

int  main ( int  __attribute__ ((__inutilisé__)) argc, char *argv[])

{

		mot de passe char [ 7 ], *codex;

			int len ​​= strlen (argv[ 1 ]), je, tmp ;



				codex = " A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk " ;



					tmp = (len ^ 59 ) & 63 ;

						mot de passe[ 0 ] = codex[tmp] ;



							tmp = 0 ;

								pour (i = 0 ; i < len ; i++)

											tmp += argv[ 1 ][i] ;

									mot de passe[ 1 ] = codex[(tmp ^ 79 ) & 63 ] ;



										tmp = 1 ;

											pour (i = 0 ; i < len ; i++)

														tmp *= argv[ 1 ][i] ;

												mot de passe[ 2 ] = codex[(tmp ^ 85 ) & 63 ] ;



													tmp = 0 ;

														pour (i = 0 ; i < len ; i++)

																{

																			si (argv[ 1 ][i] > tmp)

																							tmp = argv[ 1 ][i] ;

																				}

															srand (tmp ^ 14 );

																mot de passe[ 3 ] = codex[ rand () & 63 ] ;



																	tmp = 0 ;

																		pour (i = 0 ; i < len ; i++)

																					tmp += (argv[ 1 ][i] * argv[ 1 ][i]);

																			mot de passe[ 4 ] = codex[(tmp ^ 239 ) & 63 ] ;



																				pour (i = 0 ; je < argv[ 1 ][ 0 ]; i++)

																							tmp = rand ();

																					mot de passe[ 5 ] = codex[(tmp ^ 229 ) & 63 ] ;



																						mot de passe[ 6 ] = ' \0 ' ;

																							printf ( " %s " , mot de passe);

																								retour ( 0 );

}
