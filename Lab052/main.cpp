#include <iostream>
#include <vector>
#include <algorithm>
#include "ContactsBook.h"
using namespace std;

int main()
{
	ContactsBook ksiazka;
	ksiazka.addContact({ "Zajac","345-234-674" });
	ksiazka.addContact({ "Kowalski","123-345-674" });
	ksiazka.addContact({ "Anon","164-234-012" });
	ksiazka.addContact({ "Nowak","436-469-987" });
	ksiazka.display();
	cout << endl;
	ksiazka.findContact("Anon");
	ksiazka.findContact("Polak");
	cout << endl;
	ksiazka.addContact({ "Polak","324-311-007" });
	ksiazka.display();
	cout << endl;
	ksiazka.sortContacts();
	ksiazka.display();

	return 0;
}

/*
Zajac 345-234-674
Kowalski 123-345-674
Anon 164-234-012
Nowak 436-469-987

Kontakt znaleziony: Anon nr: 164-234-012
Brak kontaktu o takiej nazwie

Zajac 345-234-674
Kowalski 123-345-674
Anon 164-234-012
Nowak 436-469-987
Polak 324-311-007

Anon 164-234-012
Kowalski 123-345-674
Nowak 436-469-987
Polak 324-311-007
Zajac 345-234-674
*/