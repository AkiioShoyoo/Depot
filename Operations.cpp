#include "Operations.h"
#include <cmath>

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

<<<<<<< HEAD
int factoriel(int nb)
{
	int resultat;
	
	resultat = nb*(n-1);
	
=======
int exposant(int nb, int exp)
{
	int resultat;

	resultat = nb * exp;

>>>>>>> 63015530d6ec448dff9650e99f09626663f58eff
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