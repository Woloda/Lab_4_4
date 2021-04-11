#include "Complex.h"


//конструкторт за умовчанням(без параметрів)
Complex::Complex() : Pair() {}
//конструктор ініціалізації
Complex::Complex(double v_a, double v_b): Pair(v_a, v_b) { }

Complex* Complex::operator + (Pair* obj) {		//віртуальний перевантаження операції додавання
	Complex* obj_a = new Complex;
	obj_a->Set_x(this->Get_x() + obj->Get_x());
	obj_a->Set_y(this->Get_y() + obj->Get_y());

	return obj_a;
}

Complex* Complex::operator - (Pair* obj) {		//віртуальний перевантаження операції віднімання
	Complex* obj_a = new Complex;
	obj_a->Set_x(this->Get_x() - obj->Get_x());
	obj_a->Set_y(this->Get_y() - obj->Get_y());

	return obj_a;
}

Complex* Complex::operator * (Pair* obj) {		//віртуальний перевантаження операції множення
	Complex* obj_a = new Complex;
	obj_a->Set_x(this->Get_x() * obj->Get_x() - this->Get_y() * obj->Get_y());
	obj_a->Set_y(this->Get_x() * obj->Get_y() + obj->Get_x() * this->Get_y());

	return obj_a;
}

Complex* Complex::operator / (Pair* obj) {		//віртуальний перевантаження операції ділення
	Complex* obj_a = new Complex;
	obj_a->Set_x((this->Get_x() * obj->Get_x() + this->Get_y() * obj->Get_y()) / (obj->Get_x() * obj->Get_x() + obj->Get_y() * obj->Get_y()));
	obj_a->Set_y((obj->Get_x() * this->Get_y() - this->Get_x() * obj->Get_y()) / (obj->Get_x() * obj->Get_x() + obj->Get_y() * obj->Get_y()));

	return obj_a;
}


bool operator == (Complex& obj_1, Complex& obj_2) {		//перевантаження операції порівняння
	if ((obj_1.Get_x() == obj_2.Get_x()) && (obj_1.Get_y() == obj_2.Get_y())) {
		return true;
	}
	return false;
}

void Complex::Conj() {		//метод --- комплексне спряжене число
	Set_y(-Get_y());
}

std::ostream& Complex::Data_otput(std::ostream& out) const {	//чистий віртуальний метод виводу даних
	out << "\nData_otput complex number: ";
	out << "\na = " << Get_x();
	out << "\nb = " << Get_y();

	return out;
}

std::istream& Complex::Data_entry(std::istream& in) {			//чистий віртуальний метод вводу даних
	double a{}, b{};
	std::cout << "\n\nData_entry object: ";
	std::cout << "\nVvedit znachenie a: "; in >> a;
	std::cout << "Vvedit znachenie b: "; in >> b;

	Set_x(a);
	Set_y(b);

	return in;
}