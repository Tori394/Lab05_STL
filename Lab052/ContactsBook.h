#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Contact
{
	string name;
	string number;


	bool operator<=(Contact& other)
	{
		return this->name <= other.name;
	}
};

class ContactsBook
{
private:
	vector <Contact> m_contats;

public:
	
	void addContact(Contact);
	void findContact(string);
	void display();
	void sortContacts();

};