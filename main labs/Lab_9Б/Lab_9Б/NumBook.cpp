#include "NumBook.h"

void printMap(multimap<name, number> m) {
	for (const auto p : m)// цыкл (фор-ейч) проходим с начала и до конца мапа
		cout << setw(10) << p.first << setw(15) << p.second << endl; //выводим имя и номер
}

void searchname(multimap<name, number> m, string n) {
	bool q = false;
	for (auto p = begin(m); p != end(m); p++) // цикл, ставим указатель на начало мапа и пока он не сместится до конца
		if (((name&)p->first).get() == n) { //сравниваем то что ввели и то на чем указатель
			cout << p->first << '\t' << p->second << endl;//выводим
			q = true;
		}
	if (!q)
		cout << "Такой фамилии нету в списке" << endl;//если не нашли то выводим
}

void search_l(multimap<name, number> m, char ch) {
	bool q = false;
	for (auto p = begin(m); p != end(m); p++)// цикл, ставим указатель на начало мапа и пока он не сместится до конца
		if (((name&)p->first).get()[0] == ch) {//сравниваем букву которую ввели и первую букву имени на котором указатель
			cout << p->first << '\t' << p->second << endl;//выводим
			q = true;
		}
	if (!q)
		cout << "На эту букву нету не одной фамилии в списке" << endl;//если не нашли то выводим
}

void delete_l(multimap<name, number> &m, char ch) {
	bool q = false;
	for (auto p = begin(m); p != end(m);) {// цикл, ставим указатель на начало мапа и пока он не сместится до конца
		if (((name&)p->first).get()[0] == ch) { //сравниваем букву которую ввели и первую букву имени на котором указатель
			p = m.erase(p);// удаляем
			q = true;
		}
		else
			p++;
	}
	if (!q)
		cout << "На эту букву нету не одной фамилии в списке" << endl;//если не нашли то выводим
}
