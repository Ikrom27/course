#ifndef APP_H
#define APP_H
#include<iostream>
#include "base.h"
class app : public Base_class	// ����������� ������
{
public:
	app(Base_class* p);		// �����������, � ��������� ��������� �� ������
	void build_tree_objects();		//���������� ������
	int exec_app();		//��������� �������
};
#endif