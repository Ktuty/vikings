#include <iostream>
#include <ctime>

using namespace std;

struct person
{
	int age;
	int strength;
	int health;
};

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	const int PLACES = 30;
	int cand = 0;

	const int size = 1000;
	person Chosen[size];

	cout << "Кандидат №\tВозраст\t\tЗдоровье\tСила" << endl;

	for (int i = 0; i < size; i++)
	{   Chosen[i].age = rand() % 28 + 12;
		Chosen[i].strength = rand() % 100;
		Chosen[i].health = rand() % 100;

		if (Chosen[i].age <= 30 && Chosen[i].age >= 16 && Chosen[i].strength >= 45 && Chosen[i].health >= 45)
		{
			cand++;
			cout << "   " << cand << "\t\t" << Chosen[i].age << "\t\t" << Chosen[i].health << "\t\t" << Chosen[i].strength << endl;
		}
		if (cand == PLACES)
		{
			break;
		}
	}
	int a; cin >> a;

}
