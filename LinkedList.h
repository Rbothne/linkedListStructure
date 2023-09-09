#ifndef LINKED_LIST
#define LINKED_LIST
using namespace std;

#include "ListInterface.h"
#include "node.h"

template<class ItemType>
class LinkedList: public ListInterface {
    private:
    Node<ItemType>* headPtr; 
	int itemCount;
    public:
    LinkedList(); 
	int getLength() const;    
	bool isEmpty() const;    
	bool add(const ItemType& newEntry);     
	bool remove(const ItemType& newEntry);    
	void clear();   
	void display();
    ItemType replace(int pos, const ItemType& newEntry) =0;  
	//int getFrequencyOf(const ItemType& newEntry) const;    
	//bool contains(const ItemType& newEntry) const;   
	//vector<ItemType> toVector() const;   
	~LinkedList();
};
#endif
