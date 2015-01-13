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

	std::cout << "Why did you put while(1), I don't get it.\n";
	std::cout << "I put while(1) in becasue for me my program doesn't hold when it runs, it exits as soon as it finishes so I use it to hold the program. \n";
	std::cout << "The linking thing worked, maybe its just solutions created on your system?.\n";
	while(1);
}