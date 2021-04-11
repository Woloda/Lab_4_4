#include "Pair.h"


Pair::Pair() : x(0), y(0) {}							//конструкторт за умовчанням(без параметрів)
Pair::Pair(double v_x, double v_y) : x(v_x), y(v_y) {}	//конструктор ініціалізації

void Pair::Set_x(double value) { x = value; }	//встановлення значення поля "x"
void Pair::Set_y(double value) { y = value; }	//встановлення значення поля "y"

double Pair::Get_x() const { return x; }	//отримання значення поля "x"
double Pair::Get_y() const { return y; }	//отримання значення поля "y"