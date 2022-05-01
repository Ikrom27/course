#include "App.h"

Application::Application(Base* p) :Base("root", p)
{
	head = p;
}

void Application::build_tree_objects()
{
	std::string	headerName, stickName;
	std::cin >> headerName;

	name = headerName;

	Base* stickObject = new Base("", nullptr);
	Base* headerObject = this;

	while (true) {
		std::cin >> headerName >> stickName;
		if (headerName == stickName) {
			return;
		}
		else if (headerName == headerObject->get_name() or headerName == stickObject->get_name()) {
			if (headerName == stickObject->get_name()) {
				headerObject = stickObject;
				stickObject = new Base(stickName, headerObject);
			}
			else {
				stickObject = new Base(stickName, headerObject);
			}
		}
	}
}

int Application::exec_app()
{
	display();
	return 0;
}