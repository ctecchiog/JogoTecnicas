#pragma once
#include "stdafx.h"
<<<<<<< HEAD
#include <SFML/Graphics.hpp>
=======
#include "Jogador.h"
#include <SFML\Graphics.hpp>
>>>>>>> 15d3c64a143286dba7eb4417abbf3f4e8e99bce9

class Principal {
private:
	sf::RenderWindow window;
	Jogador::Jogador jogador;
public:
	Principal();
	~Principal();
	void executar();
};