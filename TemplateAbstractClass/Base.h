#pragma once
#include <iostream>
using namespace std;
template <typename T1, typename T2>
class Base
{
protected:
	T1* value1;
	T2* value2;
public:
	Base(T1 val1, T2 val2) : value1{ new T1(val1) }, value2{ new T2(val2) } {};
	virtual T1& getValue1() = 0;
	virtual T2& getValue2() = 0;
	virtual void setValue1(T1 val1) = 0;
	virtual void setValue2(T2 val2) = 0;
	virtual ~Base();
};

template<typename T1, typename T2>
Base<T1, T2>::~Base()
{
	cout << "Im Base destructor" << endl;
	delete value1;
	delete value2;
}
