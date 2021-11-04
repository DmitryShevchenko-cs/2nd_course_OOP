#include "Computer.h"

void sort(animals* o1) {

	int i, j;
    animals temp;
    for (i = 0; i < 5; i++)
        for (j = i + 1; j < 5; j++)
            if (o1[i].name > o1[j].name) {
                temp = o1[i];
                o1[i] = o1[j];
                o1[j] = temp;
            }
 }

void change(animals& o1, const string& name, const int& weight, const int& age, const string& type){

	o1.name = name;
	o1.weight = weight;
	o1.age = age;
	o1.type = type;
}

void show(animals* o1) {
	cout << "                            Животное: \n";
	cout << "----------------------------------------------------------------\n";
	cout << "   Название вида        Вес        Возраст        Тип рациона  \n";
	cout << "----------------------------------------------------------------\n";

	for (int i = 0; i < 5; i++) {

		cout << setw(19) << o1[i].name;
		cout << setw(11) << o1[i].weight;
		cout << setw(15) << o1[i].age;
		cout << setw(17) << o1[i].type;
		cout << endl;

	}

	cout << endl;
}