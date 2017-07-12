#include <iostream>

/**
 * 定义一个模板函数
 */
template <typename T>
T Max(T arg1, T arg2)
{
	return arg1 > arg2 ? arg1 : arg2;
}

/**
 * 定义一个模板类
 */
template <typename T>
class Class
{
public:
	Class(T arg);
	void display(void);
};

int main(int argc, char *argv[])
{
	double x = Max(1, 5);
	using std::cout;
	using std::endl;
	cout << "x = "<< x << endl;

	return 0;
}


