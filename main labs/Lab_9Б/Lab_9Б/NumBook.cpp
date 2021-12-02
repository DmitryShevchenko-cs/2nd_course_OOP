#include "NumBook.h"

void printMap(multimap<name, number> m) {
	for (const auto p : m)
		cout << setw(10) << p.first << setw(15) << p.second << endl;
}

void searchname(multimap<name, number> m, string n) {
	bool q = false;
	for (auto p = begin(m); p != end(m); p++)
		if (((name&)p->first).get() == n) {
			cout << p->first << '\t' << p->second << endl;
			q = true;
		}
	if (!q)
		cout << "“акой фамилии нету в списке" << endl;
}

void search_l(multimap<name, number> m, char ch) {
	bool q = false;
	for (auto p = begin(m); p != end(m); p++)
		if (((name&)p->first).get()[0] == ch) {
			cout << p->first << '\t' << p->second << endl;
			q = true;
		}
	if (!q)
		cout << "Ќа эту букву нету не одной фамилии в списке" << endl;
}

void delete_l(multimap<name, number> &m, char ch) {
	bool q = false;
	for (auto p = begin(m); p != end(m);) {
		if (((name&)p->first).get()[0] == ch) {
			p = m.erase(p);
			q = true;
		}
		else
			p++;
	}
	if (!q)
		cout << "Ќа эту букву нету не одной фамилии в списке" << endl;
}
