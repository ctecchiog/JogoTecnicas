#pragma once
#include "stdafx.h"
#include <SFML/include/SFML/Graphics.hpp>

class Principal {
private:
	sf::RenderWindow window;
public:
	Principal();
	~Principal();
	void executar();
};