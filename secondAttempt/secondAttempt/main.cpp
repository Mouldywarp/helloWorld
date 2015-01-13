#include <iostream>
#include "class.h"

void dinosaur(int i)
{
	switch(i)
	{
	case 0:
		std::cout<<"John Berverg";
		break;
	case 1:
		std::cout<<"Avec Moi";
		break;
	default:
		std::cout<<std::endl;
	}
	
}
void main()
{
	std::cout << "Alwight Dawlin\n";
	std::cout << "Oh look at me changing a file and the committing it\n\n";
	dinosaur(0);
	dinosaur(1);
	dinosaur(2);
	dinosaur(2);
	dinosaur(1);
	dinosaur(3);
	std::cout<<mne::dicks<<std::endl;
	while(1);
}