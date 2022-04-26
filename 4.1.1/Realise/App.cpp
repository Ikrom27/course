#include "App.h"

app::app(Base_class* p) :Base_class("root", p)
{
	this->head = p;
}

void app::build_tree_objects()
{
	std::string	headerName, stickName;
	std::cin >> headerName;

	this->name = headerName;

	Base_class* stickObject = new Base_class("", nullptr);
	Base_class* headerObject = this;
	Base_class* _head;

	while (headerName != stickName) {
		while (true) {
			std::cin >> headerName >> stickName;
			_head = this->find_object(headerName);
			if (headerName == stickName) {
				break;
			}
			if (_head) {
				stickObject = new Base_class(stickName, _head);
			}
			else {
				stickObject = new Base_class(stickName, headerObject);
			}
		}
	}
}

int app::exec_app()
{
	this->display();
	return 0;
}
