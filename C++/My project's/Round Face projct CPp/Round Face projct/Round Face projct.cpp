#include <iostream>
#include <cmath>


int main() {
	
	
	
	std::cout << "  I am in The work\n\n ";
	std::cout << "I am very Working\n\n";








	const int radius = 5;  // Adjust the radius as needed

	for (int y = -radius; y <= radius; ++y) {
		for (int x = -radius; x <= radius; ++x) {
			double distance = std::sqrt(x * x + y * y);

			// Check if the current point is inside the circle
			if (distance <= radius) {
				// Add eyes
				if ((x == -2 && y == -2) || (x == 2 && y == -2)) {
					std::cout << "o ";
				}
				// Add smiling mouth
				else if (y == 2 && distance <= radius - 1) {
					std::cout << "_ ";
				}
				else {
					std::cout << "* ";
				}
			}
			else {
				std::cout << "  ";
			}
		}
		std::cout << "\n";
	}





	std::cout << " I am going to My home \n";

	std::cout << " I am  My home \n";

	std::cout << " I have to Sleeping\n";
	std::cout << " I have to souer \n";
	std::cout << " End to fancoution's in my home \n ";
	std::cout << " I am redy fot sleep \n";
	
	
	
	
	
   std:: cout << "\tFAJOR GOOD BOY\n\n\n";
   std:: cout << "\tADAM GOOD BOY\n\n\n";
   std::cout << "\t how to work adam and fajor ????\n\n\n";
   std::cout << "\t adam and fajor  its playing  in slowly And playing\n without sond and playing in the big house room , without ????\n\n\n";



  
   return 0;

  
}
