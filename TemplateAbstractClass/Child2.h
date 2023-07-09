#pragma once
#include "Base.h"
template <typename T1, typename T2, typename T5, typename T6>
class Child2 : public Base<T1, T2>
{
protected:
	T5* value5;
	T6* value6;
public:
	Child2(T1 value1, T2 value2, T5 value5, T6 value6) : Base<T1, T2>{ value1, value2 }, value5{ new T5(value5) }, value6{ new T6(value6) } {};

	virtual void setValue5(T5 val5);
	virtual void setValue6(T6 val6);
	void setValue1(T1 val1);
	void setValue2(T2 val2);

	T1& getValue1();
	T2& getValue2();
	T5& getValue5();
	T6& getValue6();

	virtual ~Child2();
};

template <typename T1, typename T2, typename T5, typename T6>
void Child2<T1, T2, T5, T6>::setValue5(T5 val5) {
	delete value5;
	value5 = new T5(val5);
}

template <typename T1, typename T2, typename T5, typename T6>
void Child2<T1, T2, T5, T6>::setValue6(T6 val6) {
	delete value6;
	value6 = new T6(val6);
}

template <typename T1, typename T2, typename T5, typename T6>
void Child2<T1, T2, T5, T6>::setValue1(T1 val1) {
	delete this->value1;
	this->value1 = new T1(val1);
}

template <typename T1, typename T2, typename T5, typename T6>
void Child2<T1, T2, T5, T6>::setValue2(T2 val2) {
	delete this->value2;
	this->value2 = new T2(val2);
}

template <typename T1, typename T2, typename T5, typename T6>
T1& Child2<T1, T2, T5, T6>::getValue1() {
	return *this->value1;
}

template <typename T1, typename T2, typename T5, typename T6>
T2& Child2<T1, T2, T5, T6>::getValue2() {
	return *this->value2;
}

template <typename T1, typename T2, typename T5, typename T6>
T5& Child2<T1, T2, T5, T6>::getValue5() {
	return *value5;
}

template <typename T1, typename T2, typename T5, typename T6>
T6& Child2<T1, T2, T5, T6>::getValue6() {
	return *value6;
}

template <typename T1, typename T2, typename T5, typename T6>
Child2<T1, T2, T5, T6>::~Child2() {
	cout << "Im Child2 destructor" << endl;
	delete value5;
	delete value6;
}

