#include "Principal.h"
#include <SFML\Graphics.hpp>

Principal::Principal(): window(sf::VideoMode(800, 600), "Jogo")
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
		sf::RectangleShape jogador(sf::Vector2f(50.0f, 50.0f));
		jogador.setFillColor(sf::Color::Blue);
		jogador.setPosition(50.0f, 50.0f);
		sf::Event event;
		if (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();

		}
		window.clear();
		window.draw(jogador);
		window.display();
	}
}
