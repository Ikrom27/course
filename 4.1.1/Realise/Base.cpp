#include "Base.h"
#include <iostream>
#include <algorithm>


using namespace std;
Base::Base(std::string _name, Base* head)
{
	name = _name;
	head = head;
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

void Base::display()		// root_object.display()
{
	Base* now = this;			// Указатель now на самый последний объект дерева
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

void Base::change_head(Base* new_head)
{
	if (get_head()) {	// Если голова не пустая
		head->sticks.erase(find(head->sticks.begin(), head->sticks.end(), this));
	}
	head = new_head;
	head->sticks.emplace(head->sticks.end(), this);
}

Base* Base::get_head()
{
	return head;
}

/*
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
} */
