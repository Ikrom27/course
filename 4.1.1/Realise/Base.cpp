#include "Base.h"
#include <iostream>
#include <algorithm>


using namespace std;
Base::Base(std::string _name, Base* _head)
{
	name = _name;
	head = _head;
	if (head != nullptr) {
		head->sticks.emplace(head->sticks.end(), this);
	}
}

void Base::set_name(std::string _name)
{
	name = _name;
}

std::string Base::get_name()
{
	return name;
}

void Base::display()
{
	if (get_head() == nullptr) {
		std::cout << get_name();
	}
	if (sticks.size()) {								//переход на новую строку и выводит имя этого объекта root 1 2 3
		std::cout << endl << get_name();
	}
	for (int i = 0; i < sticks.size(); i++) {
		std::cout << "  " << sticks[i]->get_name();		//потом все подчиняющиеся объекты
	}
	for (int i = 0; i < sticks.size(); i++) {			//Повторяем все это для подчиняющихся объектов
		sticks[i]->display();
	}
}

void Base::change_head(Base* new_head)
{
	if (get_head() != nullptr) {	// Если голова не пустая
		head->sticks.erase(find(head->sticks.begin(), head->sticks.end(), this));
	}
	head = new_head;
	head->sticks.emplace(head->sticks.end(), this);
}

Base* Base::get_head()
{
	return head;
}
