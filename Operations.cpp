#include "Operations.h"
#include "iostream"
#include <cmath>

using namespace std;

int addition(int a, int b)
{
	int resultat;
	
	resultat = a + b;
	
	return resultat;
}

int soustraction(int a, int b)
{
	int resultat;
	
	resultat = a - b;
	
	return resultat;
}

int multiplication(int a, int b)
{
	int resultat;

	resultat = a * b;

	return resultat;
}

int division(int a, int b)
{
	int resultat;

	resultat = a / b;

	return resultat;
}


int factoriel(int nb)
{
	int resultat;
	
	resultat = nb*(n-1);
}	
=======
int exposant(int nb, int exp)
{
	int resultat;

	resultat = nb * exp;
  
	return resultat;
}

int NombrePremier(int nb)
{
	int resultat;

	resultat = 2 + 2(nb!);

	return resultat;
}

double distance(double x1, double y1, double x2, double y2)
    {
        double dist = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
        return dist;
    }

    int main()
    {
        double x1, y1, x2, y2;
        cout << "Entrer les coordonnées du premier point (x1, y1) : ";
        cin >> x1 >> y1;
        cout << "Entrer les coordonnées du deuxième point (x2, y2) : ";
        cin >> x2 >> y2;
        double dist = distance(x1, y1, x2, y2);
        cout << "La distance entre les deux points est : " << dist << endl;
        return 0;
    }
