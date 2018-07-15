// Zadatak7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class Pravougaonik 
{
public:

	int a, b;

	Pravougaonik() 
	{
	
	}

	Pravougaonik(int a, int b)
	{
		this->a = a;
		this->b = b;

	}

	int Povrsina();

	void Prikaz();
};

class Kvadar : public Pravougaonik 
{
	int c;

public:

	Kvadar(int a, int b, int c) 
	{
		this->a = a;
		this->b = b;
		this->c = c;
	}

	int Povrsina();
	void Prikaz();
	int Zapremina();

};

int Pravougaonik::Povrsina()
{
	return this->a * this->b;

}

void Pravougaonik::Prikaz() 
{
	cout << "stranica a: " << this->a;
	cout << ", stranica b: " << this->b;
}

int Kvadar::Povrsina()
{
	return 2 * (this->a * this->b + this->a * this->c + this->b * this->c);

}

void Kvadar::Prikaz()
{
	cout << "stranica a: " << this->a;
	cout << ", stranica b: " << this->b;
	cout << ", stranica c: " << this->c;
}

int Kvadar::Zapremina()
{
	return this->a * this->b * this->c ;

}



int main()
{
	Pravougaonik pravougaonik(5,6);
	pravougaonik.Prikaz();
	cout << "Povrsina iznosi: " << pravougaonik.Povrsina();

	Kvadar kvadar(5, 6, 7);
	kvadar.Prikaz();
	cout << "Povrsina iznosi: " << kvadar.Povrsina();
	cout << "Zapremina iznosi: " << kvadar.Zapremina();

    return 0;
}

