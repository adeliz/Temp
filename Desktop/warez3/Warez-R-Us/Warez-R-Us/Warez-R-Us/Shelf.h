#ifndef Shelf_h
#define Shelf_h

#include "Item.h"
#include "Food.h"
#include "Misc.h"
#include "Tools.h"
#include "clothes.h"
#include "Furniture.h"
#include <string>

using namespace std;

class Shelf
{
private:
	int cap;
	int nrOfElements;
	Item *storage;
	string shelfId;


public:
	Shelf(int cap, string shelfId);
	virtual ~Shelf();

	bool addItem(Item element);

	Item getAt(int pos);

	//bool removeAt(int pos);
	//bool removeItem(Item element);

};

#endif