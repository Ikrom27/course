#include "Base.h"
#include <iostream>
#include <algorithm>


using namespace std;
Base_class::Base_class(std::string _name, Base_class* head)
{
	this->name = _name;
	this->head = head;
	if (head != nullptr) {
		this->head->sticks.emplace(this->head->sticks.end(), this);
	}
}

void Base_class::set_name(std::string _name)
{
	this->name = _name;
}

std::string Base_class::get_name()
{
	return this->name;
}

void Base_class::display()		// root_object.display()
{
	Base_class* now = this;			// Указатель now на самый последний объект дерева
	if (now->get_head() == nullptr) {
		std::cout << now->get_name() << endl;
	}
	if (now->sticks.size()) {		// Если не пустой
		std::cout << now->get_name();
	}
	for (int i = 0; i < sticks.size(); i++) {	// Выводим все подчинеяющиеся ему ветки
		std::cout << " " << now->sticks[i]->get_name();
	}
	if (now->sticks.size()) {
		std::cout << endl;
	}
	for (int i = 0; i < sticks.size(); i++) {
		now->sticks[i]->display();		// Используем рекурсию
	}
}

void Base_class::replace_head(Base_class* new_head)
{
	if (this->get_head()) {	// Если голова не пустая
		this->head->sticks.erase(find(this->head->sticks.begin(), this->head->sticks.end(), this));
	}
	this->head = new_head;
	this->head->sticks.emplace(this->head->sticks.end(), this);
}

Base_class* Base_class::get_head()
{
	return this->head;
}

Base_class* Base_class::find_object(std::string _name)
{
	Base_class* _head = nullptr;
	if (this->get_name() == _name) {
		return this;
	}
	else {
		for (int i = 0; i < this->sticks.size(); i++) {
			_head = this->sticks[i]->find_object(_name);
		}
		return _head;
	}
}
