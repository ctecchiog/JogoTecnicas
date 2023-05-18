#pragma once
#include "stdafx.h"
#include "Jogador.h"
#include <SFML\Graphics.hpp>

class Principal {
private:
	sf::RenderWindow window;
	Jogador::Jogador jogador;
public:
	Principal();
	~Principal();
	void executar();
};
