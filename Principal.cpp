#include "Principal.h"
#include <SFML/include/SFML/Graphics.hpp>

Principal::Principal(): window(sf::VideoMode(800.0f, 600.0f), "Jogo")
{
	executar();
}

Principal::~Principal()
{

}

void Principal::executar()
{
	while (window.isOpen())
	{
		sf::RectangleShape Jogador(sf::Vector2f(50.0f, 50.0f));
		jogador.setFillColor(sf::Color::Blue);
		jogador.setPosition(50.0f, 50.0f);
		sf::Event event;
		if (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
			else if (event.type == sf::Event::KeyPressed)

		}
		window.clear();
		window.draw(jogador);
		window.display();
	}
	}
}