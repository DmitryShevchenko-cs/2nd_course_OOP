#include "train.h"

void train::set(const std::string n, const int num, const double t){
	this->name = n;
	this->number = num;
	this->time = t;
}

void train::show()const {
	std::cout << this->name << " ";
	std::cout << this->number << " ";
	printf("%.2lf ", this->time);
	//std::cout << this->time << " ";
	std::cout << std::endl << std::endl;
}

int train::search(train* TR)const {
	int user_num;
	std::cout << std::endl <<"Введите номер поезда"<<std::endl;
	std::cin >> user_num;

	for (int i = 0; i < S; i++) {
		if (TR[i].number == user_num) {
			std::cout << TR[i].name << " ";
			std::cout << TR[i].number << " ";
			printf("%.2lf ", TR[i].time);
			//std::cout << TR[i].time << " ";
			return 1;
		}
		
	}
	std::cout << "Такого поезда нету в списке." << std::endl;
	return 0;
}

void train::sort_num(train* TR) {

	int buff = 0;

	for (int i = 0; i < S - 1; i++) // 
	{

		for (int j = S - 1; j > i; j--)
		{
			if (TR[j].number < TR[j - 1].number)
			{
				buff = TR[j - 1].number;
				std::swap(TR[j - 1], TR[j]);
				TR[j].number = buff;
			}
		}
	}
}

void train::sort_destination(train* TR) {
	std::string buff;
	double temp;
	for (int i = 0; i < S - 1; i++) // 
	{
		for (int j = S - 1; j > i; j--)
		{
			if (TR[j].name < TR[j - 1].name)
			{
				buff = TR[j - 1].name;
				std::swap(TR[j - 1], TR[j]);
				TR[j].name = buff;
			}
			if (TR[j].name == TR[j - 1].name) {

					if (TR[j].time < TR[j - 1].time)
					{
						temp = TR[j - 1].time;
						std::swap(TR[j - 1], TR[j]);
						TR[j].time = temp;
					}		
			
			}
		}
	}

}