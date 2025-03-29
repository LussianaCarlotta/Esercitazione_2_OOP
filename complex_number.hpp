#pragma once

template <typename T>
class ComplexNumber {
private:
    T reale;
    T immaginaria;

public:
    // Costruttore di default
    ComplexNumber()
		: reale(0), immaginaria(0) 
	{}

    // Costruttore user-defined
    explicit ComplexNumber(T r, T i): 
		reale(r), immaginaria(i) 
	{}

    // Metodo per ottenere la parte reale
    T getReal(void) const { 
		return reale; 
	}

    // Metodo per ottenere la parte immaginaria
    T getImag(void) const { 
		return immaginaria; 
	}

	//CONIUGATO
    // Metodo per ottenere il coniugato
    ComplexNumber conjugate(void) const {
        return ComplexNumber(reale, -immaginaria);
    }


	//SOMMA
    // Operatore += 
    ComplexNumber& operator+=(const ComplexNumber& other) {
        reale += other.reale;
        immaginaria += other.immaginaria;
        return *this;
    }

    // Operatore + 
    ComplexNumber operator+(const ComplexNumber& other) const {		
        return ComplexNumber(reale + other.reale, immaginaria + other.immaginaria);
    }


	//MOLTIPLICAZIONE
    // Operatore *=
    ComplexNumber& operator*=(const ComplexNumber& other) {
        T newReale = reale * other.reale - immaginaria * other.immaginaria;
        T newImmaginaria = reale * other.immaginaria + immaginaria * other.reale;
        reale = newReale;
        immaginaria = newImmaginaria;
        return *this;
    }

    // Operatore * 
    ComplexNumber operator*(const ComplexNumber& other) const {
        return ComplexNumber(
            reale * other.reale - immaginaria * other.immaginaria,
            reale * other.immaginaria + immaginaria * other.reale
        );
    }
 
};

// Metodo operatore<< per stampare il numero complesso
template < typename T >
std::ostream& operator<<(std::ostream& os, const ComplexNumber<T>& c) {
    os << c.getReal() << " + " << c.getImag() << "i";
    return os;
}


