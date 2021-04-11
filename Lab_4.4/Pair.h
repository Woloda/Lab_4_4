#pragma once

#include <sstream>
#include <iostream>

class Pair {	//абстрактний клас(базовий клас) --- відповідає за виконання арифметичних операцій
private:
	//поля "x" і "y" ---  потрібні для роботи з нечіткими (2 із 3) і комплексними числами(2 із 2)
	double x, y;
public:
	Pair();					//конструкторт за умовчанням(без параметрів)
	Pair(double, double);	//конструктор ініціалізації

	void Set_x(double);		//встановлення значення поля "x"
	void Set_y(double);		//встановлення значення поля "y"

	double Get_x() const;		//отримання значення поля "x"
	double Get_y() const;		//отримання значення поля "y"

	virtual Pair* operator + (Pair*) = 0;	//віртуальний перевантаження операції додавання
	virtual Pair* operator - (Pair*) = 0;	//віртуальний перевантаження операції віднімання
	virtual Pair* operator * (Pair*) = 0;	//віртуальний перевантаження операції множення
	virtual Pair* operator / (Pair*) = 0;	//віртуальний перевантаження операції ділення

	virtual std::ostream& Data_otput (std::ostream& out) const = 0;	//чистий віртуальний метод виводу даних
	virtual std::istream& Data_entry(std::istream& in) = 0;			//чистий віртуальний метод вводу даних
};