#ifndef BASE_H
#define BASE_H
#include <string>
#include <vector>
class Base	// Имя класса
{
protected:
	std::string name;	// Имя объекта
	Base* head;	// Указатель на головной объект
	std::vector<Base*> sticks;	// Указатели на подчиняющиеся объекты (ветки)
public:
	Base(std::string _name, Base* _head=nullptr);
	void set_name(std::string _name);	//метод определения имени объекта
	std::string get_name();
	void display();
	void change_head(Base* new_head );
	Base* get_head();
	//Base* find_object(std::string _name);
};
#endif