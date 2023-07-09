#pragma once
#include "Child.h"
#include "Child2.h"
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
class LastChild : virtual public Child<T1, T2, T3, T4>, virtual public Child2<T1, T2, T5, T6>
{
public:
	LastChild(T1 val1, T2 val2, T3 val3, T4 val4, T5 val5, T6 val6) : Child<T1, T2, T3, T4>{ val1, val2, val3, val4 }, Child2<T1, T2, T5, T6>{val1, val2, val5, val6} {};
	T1& getValue1();
	T2& getValue2();
	void setValue1(T1 val1);
	void setValue2(T2 val2);
};

template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
T1& LastChild<T1, T2, T3, T4, T5, T6>::getValue1()
{
	return Child<T1, T2, T3, T4>::getValue1();
}

template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
T2& LastChild<T1, T2, T3, T4, T5, T6>::getValue2()
{
	return Child<T1, T2, T3, T4>::getValue2();
}

template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
void LastChild<T1, T2, T3, T4, T5, T6>::setValue1(T1 val1)
{
	delete Child<T1, T2, T3, T4>::value1;
	Child<T1, T2, T3, T4>::value1 = new T1(val1);
}

template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
void LastChild<T1, T2, T3, T4, T5, T6>::setValue2(T2 val2)
{
	delete Child<T1, T2, T3, T4>::value2;
	Child<T1, T2, T3, T4>::value2 = new T2(val2);
}
