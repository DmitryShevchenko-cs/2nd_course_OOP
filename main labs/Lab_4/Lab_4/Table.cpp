#include "Table.h"

table::table(const char* name, const char type, const int temperature, const unsigned int speed) {
    this->name = new char[strlen(name) + 1];
    strcpy(this->name, name);

    this->type = type;
    this->temperature = temperature;
    this->speed = speed;
}

void table::set(char* n, const char t, const int tem, const unsigned int sp) {
    strcpy(this->name, n);
    this->type = t;
    this->temperature = tem;
    this->speed = sp;

}

void table::get(char* a, char& b, int& c, unsigned int& d)const {
    delete[] a;
    a = new char[strlen(this->name) + 1];
    strcpy(a, this->name);

    b = type;
    c = temperature;
    d = speed;
}

void DB::add_rec(const char* a, char b, int c, unsigned int d) {
	if (col >= 12) return;
	rows[col] = new table(a, b, c, d);
    col++;
    sorted = 0;
}

void DB::del_rec() {
    if (col <= 0) return;
    delete  rows[col - 1];
    col--;
}

void DB::sort_DB() {
    char s1;
    char s2;
    if (col < 2) return;
    table* temp;

    for (int i = 0; i < col; i++)
        for (int j = i + 1; j < col; j++) {
            s1 = rows[i]->ret_name();
            s2 = rows[j]->ret_name();
            if (s1 > s2) {
                temp = rows[i];
                rows[i] = rows[j];
                rows[j] = temp;
            }
        }
    sorted = 1;
}

ostream& operator<<(ostream& stream, DB& ob) {
    stream << ob.title << endl;
    shapka();
    if (!ob.col) stream << "Таблица пуста.";
    else {
        for (int i = 0; i < ob.col; i++) {
            stream << *ob.rows[i];
        }
    }
    if (ob.sorted == 0) stream << "Таблица не отсортирована.\n";
    else stream << "Таблица отсортирована.\n";
    return stream;
}

ostream& operator<<(ostream& stream, table& ob) {
    
    stream << "|" << setw(11) << ob.name << "|";
    stream << setw(7) << ob.type << "|";
    stream << setw(11) << ob.temperature << "|";
    stream << setw(13) << ob.speed << "|";
    linebuild();
    return stream;
}

void shapka(void)
{

    cout << "_______________________________________________\n";
    cout << "|          Скорость звука в жидкостях         |\n";
    cout << "|---------------------------------------------|\n";
    cout << "| Вещество  |  Тип  |Температура|  Скорость   |\n";
    cout << "|           |       |  (град.С) |   (м/сек)   |\n";
    cout << "|-----------|-------|-----------|-------------|\n";
}

void linebuild(void) {

    cout << "\n|---------------------------------------------|\n";
}

