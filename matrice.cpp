//=====================================
// Nom de fichier : matrice.cpp
// Classe : CMatrice
// Auteur : Prob Bastien
// Date de Création : 09/01
// But : Gère les méthodes relatives à la classe matrice (constructeur, prod et afficheur)
//======================================

#include <iostream>
#include "matrice.h"
#include "vecteur.h"

CMatrice::CMatrice(float flt1, float flt2, float flt3, float flt4, float flt5, float flt6, float flt7, float flt8, float flt9)
{
	this->valeursVecteur1[0] = flt1;
	this->valeursVecteur1[1] = flt2;
	this->valeursVecteur1[2] = flt3;
	this->valeursVecteur2[0] = flt4;
	this->valeursVecteur2[1] = flt5;
	this->valeursVecteur2[2] = flt6;
	this->valeursVecteur3[0] = flt7;
	this->valeursVecteur3[1] = flt8;
	this->valeursVecteur3[2] = flt9;
}

void CMatrice::afficherMatrice()
{
	std::cout << this->valeursVecteur1[0] << " " << this->valeursVecteur1[1] << " " << this->valeursVecteur1[2] << std::endl;
	std::cout << this->valeursVecteur2[0] << " " << this->valeursVecteur2[1] << " " << this->valeursVecteur2[2] << std::endl;
	std::cout << this->valeursVecteur3[0] << " " << this->valeursVecteur3[1] << " " << this->valeursVecteur3[2] << std::endl;
}

//============================
// BUT : Calculer le produit vectoriel d'une matrice et d'un vecteur
// ENTREE : La matrice et le vecteur
// SORTIE : Le produit vectoriel
// NOTE : Solution 1, fonction amie indépendante
//============================
void CMatrice::prod(const CMatrice & matrice, const CVecteur & vecteur)
{
	//Déclaration des variables
	float fltX = 0.0f;
	float fltY = 0.0f;
	float fltZ = 0.0f;

	//Traitement des données 
	fltX = matrice.valeursVecteur1[0] * vecteur.m_fltX + matrice.valeursVecteur1[1] * vecteur.m_fltY + matrice.valeursVecteur1[2] * vecteur.m_fltZ;
	fltY = matrice.valeursVecteur2[0] * vecteur.m_fltX + matrice.valeursVecteur2[1] * vecteur.m_fltY + matrice.valeursVecteur2[2] * vecteur.m_fltZ;
	fltZ = matrice.valeursVecteur3[0] * vecteur.m_fltX + matrice.valeursVecteur3[1] * vecteur.m_fltY + matrice.valeursVecteur3[2] * vecteur.m_fltZ;

	//Affichage
	std::cout << "Produit vectoriel : " << fltX << " " << fltY << " " << fltZ << std::endl;
}

//============================
// BUT : Calculer le produit vectoriel d'une matrice et d'un vecteur
// ENTREE : La matrice et le vecteur
// SORTIE : Le produit vectoriel
// NOTE : Solution 2, fonction amie membre de matrice
//============================
void prod(const CMatrice & matrice, const CVecteur & vecteur)
{
	//Déclaration des variables
	float fltX = 0.0f;
	float fltY = 0.0f;
	float fltZ = 0.0f;

	//Traitement des données 
	fltX = matrice.valeursVecteur1[0] * vecteur.m_fltX + matrice.valeursVecteur1[1] * vecteur.m_fltY + matrice.valeursVecteur1[2] * vecteur.m_fltZ;
	fltY = matrice.valeursVecteur2[0] * vecteur.m_fltX + matrice.valeursVecteur2[1] * vecteur.m_fltY + matrice.valeursVecteur2[2] * vecteur.m_fltZ;
	fltZ = matrice.valeursVecteur3[0] * vecteur.m_fltX + matrice.valeursVecteur3[1] * vecteur.m_fltY + matrice.valeursVecteur3[2] * vecteur.m_fltZ;

	//Affichage
	std::cout << "Produit vectoriel : " << fltX << " " << fltY << " " << fltZ << std::endl;
}

