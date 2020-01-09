//Réaliser une fonction permettant de déterminer le produit vectoriel (produit de vecteur de classe vecteur),
//par une matrice (objet de classe matrice). Par soucis de simplicité, nous limitons les fonctions membres à
//un constructeur pour Vecteur et pour Matrice et une fonction d'affichage pour Matrice. Fournir deux solutions
//fondées sur l'emploi sur une fonction amie nommée Prod. La première solution, prod est indépendante et amie de
//la classe vect et matrice. Deuxième solution, Prod est membre de matrice et amie de vect

#include <iostream>
#include <cstdlib>
#include "matrice.h"
#include "vecteur.h"

using namespace std;

int main()
{
	//Création d'une matrice
	CMatrice MaMatrice(1,2,3,2,3,4,5,6,9); 
	//Affichage de la matrice
	MaMatrice.afficherMatrice();
	//Création d'un vecteur
	CVecteur MonVecteur(5.5, 8.5, 10);
	//Affichage du vecteur
	MonVecteur.afficherVecteur();

	//Produit vectoriel : solution 1
	prod(MaMatrice, MonVecteur);
	//Produit vectoriel : solution 2
	MaMatrice.prod(MaMatrice, MonVecteur);

	system("pause");
	return 0;
}