#include "ContactsBook.h"
#include <iostream>
#include <algorithm>


void ContactsBook::addContact(Contact a)
{
	m_contats.push_back(a);
}

void ContactsBook::findContact(string name)
{
	for (int i = 0; i < m_contats.size(); i++)
	{
		if (name == m_contats[i].name)
		{
			cout << "Kontakt znaleziony: " << m_contats[i].name << " nr: " << m_contats[i].number<<'\n';
			return;
		}
	}
	cout << "Brak kontaktu o takiej nazwie\n";
}

void ContactsBook::display()
{
	for (int i = 0; i < m_contats.size(); i++)
	{
		cout << m_contats[i].name << " " << m_contats[i].number << '\n';
	}
}

void ContactsBook::sortContacts()
{
	sort(m_contats.begin(), m_contats.end(), []( Contact& a, Contact& b) {return a <= b; });
		
}

