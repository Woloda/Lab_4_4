#include <typeinfo>

#include "FuzzyNumber.h"
#include "Complex.h"


std::ostream& operator << (std::ostream& out, const Pair& obj)
{
	return obj.Data_otput(out);
}

std::istream& operator >> (std::istream& in, Pair& obj)
{
	return obj.Data_entry(in);
}

void Fuz_Num_Cout(Pair* obj) {
	std::cout << "\nFuzzynumber: " 
		<< "( " << obj->Get_x() - obj->Get_y() << ", " 
				<< obj->Get_x() << ", " 
				<< obj->Get_x() + ((FuzzyNumber*)obj)->Get_r() << " )";
}

int main() {
	using std::cout;

	Pair* A = new FuzzyNumber;
	Pair* B = new FuzzyNumber;
	Pair* C;

	std::cin >> *A;
	std::cin >> *B;

	cout << "\n\nObject " << typeid(*A).name() << *A;
	Fuz_Num_Cout(A);
	cout << "\n";  
	system("pause");

	cout << "\n\nObject " << typeid(*B).name() << *B;
	Fuz_Num_Cout(B);
	cout << "\n";  
	system("pause");

	C = *A + B;
	cout << "\n\nAddit Objects " << typeid(*C).name() << *C;
	cout << "\n";
	system("pause");

	C = *A - B;
	cout << "\n\nSubtraction Objects " << typeid(*C).name() << *C;
	cout << "\n";
	system("pause");

	C = *A * B;
	cout << "\n\nMultiplication Objects " << typeid(*C).name() << *C;
	cout << "\n";
	system("pause");

	C = *A / B;
	cout << "\n\nDivision Objects " << typeid(*C).name() << *C;
	cout << "\n";
	system("pause");

	FuzzyNumber A_1, C_1;
	std::cin >> A_1;

	C_1 = 1 / A_1;
	cout << "\n\nDivision '1 / Objects' " << typeid(C_1).name() << C_1;
	cout << "\n";
	system("pause");

	delete A;
	delete B;
	delete C;

	cout << "\n\n\n";

	A = new Complex;
	B = new Complex;
	C = NULL;

	std::cin >> *A;
	std::cin >> *B;

	cout << "\n\nObject " << typeid(*A).name() << *A;
	cout << "\n";
	system("pause");

	cout << "\n\nObject " << typeid(*B).name() << *B;
	cout << "\n";
	system("pause");

	C = *A + B;
	cout << "\n\nAddit Objects " << typeid(*C).name() << *C;
	cout << "\n";
	system("pause");

	C = *A - B;
	cout << "\n\nSubtraction Objects " << typeid(*C).name() << *C;
	cout << "\n";
	system("pause");

	C = *A * B;
	cout << "\n\nMultiplication Objects " << typeid(*C).name() << *C;
	cout << "\n";
	system("pause");

	C = *A / B;
	cout << "\n\nDivision Objects " << typeid(*C).name() << *C;
	cout << "\n";
	system("pause");

	Complex A_2, B_2;
	std::cin >> A_2;
	std::cin >> B_2;

	cout << "(A_2 == B_2): " << (A_2 == B_2);
	cout << "\n";
	system("pause");
	
	A_2.Conj();
	cout << "\n\nConj: " << typeid(A_2).name() << A_2;
	cout << "\n";
	system("pause");

	delete A;
	delete B;
	delete C;
}