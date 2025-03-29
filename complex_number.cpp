#include <iostream>
#include "complex_number.hpp"

int main() {
    ComplexNumber<double> c1(4.0, 3.0);
    ComplexNumber<double> c2(2.0, -1.0);
	ComplexNumber<float> c3(5.0, -6.0);

	//TEST OPERATORE SOMMA
    // Test operatore +
    ComplexNumber<double> somma = c1 + c2;
    std::cout << "Somma: c1 + c2 = " << somma << std::endl;

    // Test operatore +=
    c1 += c2;
    std::cout << "Dopo c1 += c2, c1= " << c1 << std::endl;


    // Reset c1
    c1 = ComplexNumber<double>(4.0, 3.0);


	//TEST OPERATORE MOLTIPLICAZIONE
    // Test operatore *
    ComplexNumber<double> prodotto = c1 * c2;
    std::cout << "Prodotto: c1 * c2 = " << prodotto << std::endl;

    // Test operatore *=
    c1 *= c2;
    std::cout << "Dopo c1 *= c2, c1= " << c1 << std::endl;


	// TEST CONIUGATO 
	ComplexNumber<float> coniugato = c3.conjugate();
    std::cout << "Coniugato di c3: " << coniugato << std::endl;

    return 0;
}

