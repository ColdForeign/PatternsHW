#include "CakeBuilder.h"
#include "Director.h"

int main()
{
	CakeBuilder builder;
	Director* director;
	size_t choose;
	do
	{
		cout << "1 - Cake \n2 - Punkcake \n0 - exit\n\n";
		cout << "Enter your choice\n";

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
			cout << "Exit...\n";
			break;
		default:
			cout << "Wrong choise\n";
			break;
		}
	} while (choose != 0);

	return 0;
}