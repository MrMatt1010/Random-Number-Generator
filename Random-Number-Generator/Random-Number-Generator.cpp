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




}