#include "Computer.h"

void sort(animals* o1) {

	int i, j;
    animals temp;
    for (i = 0; i < 7; i++)
        for (j = i + 1; j < 7; j++)
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

void show(animals& o1) {

	cout << o1.name << '\t';
	cout << o1.weight << '\t';
	cout << o1.age << '\t';
	cout << o1.type << '\t';
	cout << endl;
}