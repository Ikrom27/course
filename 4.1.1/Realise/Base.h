#ifndef BASE_H
#define BASE_H
#include <string>
#include <vector>
class Base_class	// ��� ������
{
protected:
	std::string name;	// ��� �������
	Base_class* head;	// ��������� �� �������� ������
	std::vector<Base_class*> sticks;	// ��������� �� ������������� ������� (�����)
public:
	Base_class(std::string _name, Base_class* _head=nullptr);
	void set_name(std::string _name);	//����� ����������� ����� �������
	std::string get_name();
	void display();
	void replace_head(Base_class* new_head );
	Base_class* get_head();
	Base_class* find_object(std::string _name);
};
#endif