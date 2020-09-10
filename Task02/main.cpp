#include <iostream>
#include "CakeBuilder.h"
#include "Director.h"
int main()
{
	CakeBuilder builder;
	Director* director;
	size_t choose;
	do
	{
		cout << "1: cake , 2 punkcake, 0: exit\n";
		std::cin >> choose;
		switch (choose)
		{
		case 1:
			director = new Director(&builder);
			director->Create()->Show();
			delete director;
			break;
		case 2:
			director = new Director(new PunkcakeBuilder);
			director->Create()->Show();
			delete director;
			break;
		case 0:
			cout << "bb\n";
			break;
		default:
			cout << "Wrong choise\n";
			break;
		}
	} while (choose != 0);

	return 0;
}