#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int amount = 33;
	int new_trees = 0;

	cout << "Сколько деревьев вы посадили сегодня? ";
	cin >> new_trees;

	cout << "Количество деревьев в парке: " << amount << endl;
	cout << "Вы посадили " << new_trees << " деревьев.\n";
	cout << "Всего стало: " << amount + new_trees << endl;

	return 0;
}
