#include <SFML/Graphics.hpp>
#include <iostream>

const int CELL_SZ= 10;

class Cell{
	sf::RectangleShape rectangle;
	bool etat;
	int posx;
	int posy;

public:

	Cell(int posx, int posy);
	sf::RectangleShape* forme();
	void change(bool new_etat);
	bool get_etat();
	static bool calcul(const bool voisins[8], bool etat_cell);
};
