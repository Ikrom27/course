#include "App.h"
#include "Derived.h"


Application::Application(Base* _head) :Base("root", _head)
{
	head = _head;
}

void Application::build_tree_objects()
{
	std::string	headerName, stickName;
	
	std::cin >> headerName;
	name = headerName;

	Derived* stickObject = new Derived("", nullptr);
	Base* headerObject = this;

	while (true) {
		std::cin >> headerName >> stickName;
		
		if (headerName == stickName) {
			return;
		}
		else if (headerName == headerObject->get_name() or headerName == stickObject->get_name()) {
			
			if (headerName == stickObject->get_name()) {
				headerObject = stickObject;
			}
			stickObject = new Derived(stickName, headerObject);
		}
	}
}

int Application::exec_app()
{
	display();
	return 0;
}