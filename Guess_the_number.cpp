#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int num, guess, t = 0;
	srand(time(0)); 
	num = rand() % 100 + 1; 
	cout << "Guess The Number \n\n";

	do
	{
		cout << "Enter a number between 1 and 100 : ";
		cin >> guess;
		t++;

		if (guess > num)
			cout << "Too high!\n\n";
		else if (guess < num)
			cout << "Too low!\n\n";
		else
			cout << "\n\nCorrect! You have picked the right number";
	} while (guess != num);

	return 0;
}
