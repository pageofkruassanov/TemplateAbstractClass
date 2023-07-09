#pragma once
#include "Base.h"
template <typename T1, typename T2,typename T3, typename T4>
class Child : public Base<T1, T2>
{
protected:
	T3* value3;
	T4* value4;
public:
	Child(T1 value1, T2 value2, T3 value3, T4 value4) : Base<T1, T2>{ value1, value2 }, value3{ new T3(value3) }, value4{ new T4(value4) } {};

	virtual void setValue3(T3 val3);
	virtual void setValue4(T4 val4);
	void setValue1(T1 val1);
	void setValue2(T2 val2);

	T1& getValue1();
	T2& getValue2();
	T3& getValue3();
	T4& getValue4();

	virtual ~Child();
};

template <typename T1, typename T2, typename T3, typename T4>
void Child<T1, T2, T3, T4>::setValue3(T3 val3) {
	delete value3;
	value3 = new T3(val3);
}

template <typename T1, typename T2, typename T3, typename T4>
void Child<T1, T2, T3, T4>::setValue4(T4 val4) {
	delete value4;
	value4 = new T4(val4);
}

template <typename T1, typename T2, typename T3, typename T4>
void Child<T1, T2, T3, T4>::setValue1(T1 val1) {
	delete this->value1;
	this->value1 = new T1(val1);
}

template <typename T1, typename T2, typename T3, typename T4>
void Child<T1, T2, T3, T4>::setValue2(T2 val2) {
	delete this->value2;
	this->value2 = new T2(val2);
}

template <typename T1, typename T2, typename T3, typename T4>
T1& Child<T1, T2, T3, T4>::getValue1() {
	return *this->value1;
}

template <typename T1, typename T2, typename T3, typename T4>
T2& Child<T1, T2, T3, T4>::getValue2() {
	return *this->value2;
}

template <typename T1, typename T2, typename T3, typename T4>
T3& Child<T1, T2, T3, T4>::getValue3() {
	return *value3;
}

template <typename T1, typename T2, typename T3, typename T4>
T4& Child<T1, T2, T3, T4>::getValue4() {
	return *value4;
}

template <typename T1, typename T2, typename T3, typename T4>
Child<T1, T2, T3, T4>::~Child() {
	cout << "Im Child destructor" << endl;
	delete value3;
	delete value4;
}
