#pragma once

#include "Pair.h"

//клас "Complex" --- для представлення комплексних чисел і виконання арифметичних операцій
class Complex : public Pair {
public:
	Complex();					//конструкторт за умовчанням(без параметрів)
	Complex(double, double);	//конструктор ініціалізації

	virtual Complex* operator + (Pair*);	//віртуальний перевантаження операції додавання
	virtual Complex* operator - (Pair*);	//віртуальний перевантаження операції віднімання
	virtual Complex* operator * (Pair*);	//віртуальний перевантаження операції множення
	virtual Complex* operator / (Pair*);	//віртуальний перевантаження операції ділення

	friend bool operator == ( Complex&,  Complex&);	//перевантаження операції порівняння
	void Conj();		//метод --- комплексне спряжене число

	virtual std::ostream& Data_otput(std::ostream& out) const;	//чистий віртуальний метод виводу даних
	virtual std::istream& Data_entry(std::istream& in);			//чистий віртуальний метод вводу даних
};