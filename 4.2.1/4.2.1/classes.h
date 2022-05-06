#ifndef _CL_S
#define _CL_S
#include <string>


class class_1 {
private:
	std::string ident_;
public:
	class_1(std::string ident);
	class_1() {};
	virtual void display(bool step = 0);
};


class class_2 : public class_1 {
private:
	std::string ident_;
public:
	class_2(std::string ident) {};
	class_2() {};
	void display(bool step = 0) override;
};


class class_3 : public class_1 {
private:
	std::string ident_;
public:
	class_3(std::string ident) {};
	void display(bool step = 0) override;
};


class class_4 : public class_1 {
private:
	std::string ident_;
public:
	class_4(std::string ident) {};
	class_4() {};
	void display(bool step = 0) override;
};


class class5 : public class_1 {
private:
	std::string ident_;
public:
	class5(std::string ident) {};
	class5() {};
	void display(bool step = 0) override;
};


class class6 : public class_2, public class_3 {
private:
	std::string ident_;
public:
	class6(std::string ident) {};
	class6() {};
	void display(bool step = 0) override;
};


class class7 : public class_4, public class5 {
private:
	std::string ident_;
public:
	class7(std::string ident) {};
	class7() {};
	void display(bool step = 0) override;
};


class class8 : public class6, public class7 {
private:
	std::string ident_;
public:
	class8(std::string ident) {};
	class8() {};
	void display(bool step = 0) override;
};

#endif