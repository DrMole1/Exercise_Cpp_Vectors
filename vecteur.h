//=========================================
// Nom de fichier : vecteur.h
// Classe : CVecteur
// Auteur : Prob Bastien
// Date de Création : 09/01
//=========================================



#pragma once

#include "matrice.h"

class CVecteur
{
//Attributs membres de la classe
private:
	float m_fltX;
	float m_fltY;
	float m_fltZ;

//Méthodes publiques membres de la classe
public:
	CVecteur(float fltX, float fltY, float fltZ);
	void afficherVecteur();
	friend void prod(const CMatrice & matrice, const CVecteur & vecteur); //première solution
	friend void CMatrice::prod(const CMatrice & matrice, const CVecteur & vecteur); //deuxième solution
};