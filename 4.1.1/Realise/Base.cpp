#include "Base.h"
#include <iostream>
#include <algorithm>


using namespace std;
Base::Base(std::string _name, Base* _head)
{
	state_ = 0;
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

Base* Base::find_object(std::string name_)
{
	if (name == name_) {
		return this;
	}
	Base* result = nullptr;
	for (auto object : sticks) {
		result = object->find_object(name_);
		if (result != nullptr) {
			return result;
		}
	}
	return result;
}

void Base::add_sticks(Base* new_stick)
{
	if (new_stick != nullptr) {
		sticks.push_back(new_stick);
		new_stick->head = this;
	}
}

void Base::set_state(int state)
{
	if (state == 0) {
		state_ = state;
		for (auto object : sticks) {
			object->set_state(0);
		}
	}
	else if (head == nullptr or head->state_ != 0) {
		state_ = state;
	}
}

void Base::print_tree(int tabs)
{
	cout << '\n' << string(tabs * 4, ' ') << name;
	for (auto object : sticks) {
		object->print_tree(tabs + 1);
	}
}

void Base::print_tree_status(int tabs)
{
	cout << '\n' << string(tabs * 4, ' ') << name << ((state_ != 0) ? " is ready" : " is not ready");
	for (auto object : sticks) {
		object->print_tree_status(tabs + 1);
	}
}
