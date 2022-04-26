#ifndef BASE_H
#define BASE_H
#include <string>
#include <vector>
class Base_class	// Имя класса
{
protected:
	std::string name;	// Имя объекта
	Base_class* head;	// Указатель на головной объект
	std::vector<Base_class*> sticks;	// Указатели на подчиняющиеся объекты (ветки)
public:
	Base_class(std::string _name, Base_class* _head=nullptr);
	void set_name(std::string _name);	//метод определения имени объекта
	std::string get_name();
	void display();
	void replace_head(Base_class* new_head );
	Base_class* get_head();
	Base_class* find_object(std::string _name);
};
#endif