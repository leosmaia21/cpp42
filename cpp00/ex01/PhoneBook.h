#include "Contact.h"

class PhoneBook {
  private:
	Contact contactos[8];
	int counter;

  public:
	PhoneBook();
	~PhoneBook();
	PhoneBook(const PhoneBook &);
	PhoneBook &operator=(const PhoneBook &);
	int add(Contact contacto);
	void read();
};
