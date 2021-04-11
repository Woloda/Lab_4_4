#pragma once

#include "Pair.h"

//клас "FuzzyNumber" --- для представлення нечітких чисел і виконання арифметичних операцій
class FuzzyNumber : public Pair {
private:
	//полe "r" --- відповідає за представлення третього числа(а перше і друге успадковується)
	double r;
public:
	FuzzyNumber();							//конструкторт за умовчанням(без параметрів)
	FuzzyNumber(double, double, double);	//конструктор ініціалізації

	void Set_r(double);			//встановлення значення поля "r"
	double Get_r() const;		//отримання значення поля "r"

	virtual FuzzyNumber* operator + (Pair*);					//віртуальний перевантаження операції додавання
	virtual FuzzyNumber* operator - (Pair*);					//віртуальний перевантаження операції віднімання
	virtual FuzzyNumber* operator * (Pair*);					//віртуальний перевантаження операції множення
	virtual FuzzyNumber* operator / (Pair*);					//віртуальний перевантаження операції ділення

	friend FuzzyNumber operator / (int, const FuzzyNumber&);	//перевантаження операції зворотне число(наприклад 1/A)

	virtual std::ostream& Data_otput(std::ostream& out) const;		//чистий віртуальний метод виводу даних
	virtual std::istream& Data_entry(std::istream& in);			//чистий віртуальний метод вводу даних
};