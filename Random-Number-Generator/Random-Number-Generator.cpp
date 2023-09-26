// Random-Number-Generator.cpp : 


#include <iostream>
#include <cstdlib> //I included this for the rand() and srand() functions

int main() {
	
	std::cout << "Random Numbers between 10 to 20\n ";
	std::cout << "**************************************\n\n ";

	//This code generates the random numbers the srand function allows the numbers to be completely random each time the program is run
	std::srand(static_cast<unsigned int>(std::time(nullptr)));

	int randomNumbers[6]; //This stores the generated random numbers
	int evenCount = 0; //This is to set the count of even numbers to 0
	int oddCount = 0; //This is to set the count of even numbers to 0

	//This is the loop that generates the 6 different numbers between 10 and 20

	for (int i = o; i < 6; ++i) {
		int randomNumber;
		do {
			//Generate a random number between 10 and 20
			randomNumber = 10 + (std::rand() % 11);

			bool isDuplicate = false;
			//Checks if the number is already in the list
			for (int j = 0; j < i; ++j) {
				if (randomNumber == randomNumbers[j]) {
					isDuplicate = true;
					break;
				}
			}
			//If the number is not a duplicate, it will store it and break the loop
			if (!isDuplicate) {
				randomNumbers[i] = randomNumber;
				break;
			}
		} while (true);
	}
	//This will output the generated numbers
	for (int i = 0; i < 6; ++i) {
		std::cout << randomNumbers[i] << " ";
	}
	std::cout << std::endl;

	//This counts the even and odd numbers
	for (int i = 0; i < 6; ++i) {
		if (randomNumbers[i] % 2 == 0) {
			evenCount++; // This increments the count if the number is even
		}
		else {
			oddCount++; // This increments the count if the number is odd
		}
	}

	//This will print out the counts of even and odd numbers
	std::cout << "Number of even numbers in the list: " << evenCount << std::endl;
	std::cout << "Number of odd numbers in the list: " << oddCount << std::endl;

	return(0);
}