// main.cpp : Defines the entry point for the application.
//

#include "main.h"



using namespace std;

int main()
{
	const auto RANDOM_NUMBER_LEN = 300;
	vector<int> random_numbers(RANDOM_NUMBER_LEN);
	generate(random_numbers.begin(), random_numbers.end(), []()
	{	
		return rand() % 10000;
	});

 	merge_sort ms(random_numbers.data(), RANDOM_NUMBER_LEN);
	ms.sort();
		
	hanoi_towers tower(5);
	tower.move("R1", "D", "R2");


	return 0;
}
