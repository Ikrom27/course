#include "App.h"
#include "Derived.h"


Application::Application(Base* _head) :Base("root")
{
}

void Application::build_tree_objects()
{
	std::string	headerName, stickName;
	int object_number;
	
	std::cin >> headerName;
	set_name(headerName);

	auto* stickObject = new Derived("");
	Base* headerObject = this;

	while (true) {
		std::cin >> headerName;
		
		if (headerName == "endtree") {break;}

		std::cin>> stickName >> object_number;

		auto temp = find_object(headerName);

		switch (object_number){
			case 2:
				new Derived_2(stickName, temp);
				break;
			case 3:
				new Derived_3(stickName, temp);
				break;
			case 4:
				new Derived_4(stickName, temp);
				break;
			case 5:
				new Derived_5(stickName, temp);
				break;
			case 6:
				new Derived_6(stickName, temp);
				break;
		}
	}

	std::string object_name;
	int object_status;
	while (std::cin >> object_name >> object_status) {
		auto temp1 = find_object(object_name);
		if (temp1 != nullptr) {
			temp1->set_state(object_status);
		}
	}
}

int Application::exec_app()
{
	std::cout << "Object tree";
	print_tree(0);
	std::cout << "\nThe tree of objects and their readiness";
	print_tree_status(0);
	return 0;
}