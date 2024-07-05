/********
 * Fichier: carre.cpp
 * Auteurs: Alexis Guerard
 * Date: 10 janvier 2023 (creation)
 * Description: fonction pour la forme carre
********/

#include <iostream>
#include "carre.h"

carre::carre(int x1, int y1, int coteCarre)
{
	ancrage.x = x1;
	ancrage.y = y1;
	cote = coteCarre;
}

carre::~carre()
{
}

double carre::aire()
{
	return cote * cote;
}

void carre::afficher(ostream & s)
{
	s <<"Carre(x="<< ancrage.x <<", y="<< ancrage.y <<", c="<< cote <<", aire="<< aire() <<")"<< endl;
	
}

int carre::getcote()
{
	return cote;
}

void carre::setcote(int nouveaucote)
{
	cote = nouveaucote;
}
