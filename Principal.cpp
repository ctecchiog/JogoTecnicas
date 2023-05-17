#include "Principal.h"
<<<<<<< HEAD
#include <SFML/Graphics.hpp>

Principal::Principal() : window(sf::VideoMode(800.0f, 600.0f), "Jogo")
=======
#include <SFML\Graphics.hpp>

Principal::Principal(): window(sf::VideoMode(800, 600), "Jogo")
>>>>>>> 15d3c64a143286dba7eb4417abbf3f4e8e99bce9
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
<<<<<<< HEAD
}
=======
>>>>>>> 15d3c64a143286dba7eb4417abbf3f4e8e99bce9
