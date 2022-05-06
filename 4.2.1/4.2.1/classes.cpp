#include "classes.h"
#include <iostream>


class_1::class_1(std::string ident)
{
	ident_ = ident + "_1";
}
void class_1::display(bool step)
{
	std::cout << ident_ << std::endl;
};


class_2::class_2(std::string ident)
{
	ident_ = ident + "_2";
};
void class_2::display(bool step)
{
	if (step) {
		std::cout << ident_ << std::endl;
	}
	else
	{
		class_1::display();
	}
}


class_3::class_3(std::string ident)
{
	ident_ = ident + "_3";
};
void class_3::display(bool step)
{
	if (step) {
		std::cout << ident_ << std::endl;
	}
	else
	{
		class_1::display();
	}
}


class_4::class_4(std::string ident)
{
	ident_ = ident + "_4";
}
void class_4::display(bool step)
{
	if (step) {
		std::cout << ident_ << std::endl;
	}
	else
	{
		class_1::display();
	}
}


class5::class5(std::string ident)
{
	ident_ = ident + "_5";
}
void class5::display(bool step)
{
	if (step) {
		std::cout << ident_ << std::endl;
	}
	else
	{
		class_1::display();
	}
}


class6::class6(std::string ident) : class_2(ident), class_3(ident)
{
	ident_ = ident + "_6";
}
void class6::display(bool step)
{
	if (step) {
		std::cout << ident_ << std::endl;
	}
	else
	{
		class_2::display();
		class_3::display();
		class_2::display(1);
		class_3::display(1);
	}
}


class7::class7(std::string ident) : class_4(ident), class5(ident)
{
	ident_ = ident + "_7";
}
void class7::display(bool step)
{
	if (step) {
		std::cout << ident_ << std::endl;
	}
	else
	{
		class_4::display();
		class_4::display(1);
		class5::display(1);
	}
}



class8::class8(std::string ident) : class6(ident), class7(ident)
{
	ident_ = ident + "_8";
}
void class8::display(bool step)
{
	class6::class_1::display();
	class6::display();
	class7::display();
	class6::display(1);
	class7::display(1);
	std::cout << ident_;
}







