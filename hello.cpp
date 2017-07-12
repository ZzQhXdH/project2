#include <iostream>


template <typename T>
T Max(T arg1, T arg2)
{
	return arg1 > arg2 ? arg1 : arg2;
}

int main(int argc, char *argv[])
{
	double x = Max(1, 5);
	using std::cout;
	using std::endl;
	cout << "x = "<< x << endl;

	return 0;
}


