#include "train.h"

void train::set(const std::string n, const int num, const double t){
	this->name = n;
	this->number = num;
	this->time = t;
}

void train::show()const {
	std::cout << this->name << " ";
	std::cout << this->number << " ";
	std::cout << this->time << " ";			//cout with 0.1(0)
	std::cout << std::endl;
}

void train::search(train* TR, int const UserNum)const {
	for (int i = 0; i < S; i++) {
		if (TR[i].number == UserNum) {
			std::cout << TR[i].name << " ";
			std::cout << TR[i].number << " ";
			std::cout << TR[i].time << " ";
		}
		else
			std::cout << "Такого поезда нету в списке." << std::endl;
	}
	

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

				for (int i = 0; i < S - 1; i++) 
				{
					for (int j = S - 1; j > i; j--)
					{
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
	}

}