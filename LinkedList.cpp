#include "LinkedList.h"

template<class ItemType> LinkedList<ItemType>::LinkedList(){
    itemCount = 0;    headPtr = nullptr;
}
template<class ItemType> int LinkedList<ItemType>::getLength() const{
    return itemCount;
}
template<class ItemType> bool LinkedList<ItemType>::isEmpty() const{
    return itemCount == 0;
}
template<class ItemType> bool LinkedList<ItemType>::add(const ItemType& newEntry){ 
    Node<ItemType>* newNode = new Node<ItemType>();
    Node* end = *headPtr;
    newNode->setItem(newEntry);
    newNode->setNext(nullptr);
    if (headPtr==nullptr){
        headPtr=newNode;
        return true;
    }else{
        while (end->next != nullptr)
        {
            end = end->next;
        }
        end->next = newNode;
        itemCount++;
        return true;
    }
}
template<class ItemType> bool LinkedList<ItemType>::remove(const ItemType& anEntry){
    bool found = false;   
    Node<ItemType>* curPtr = headPtr;    
    while (!found && (curPtr != nullptr)){ 
        if(curPtr->getItem() == anEntry){ 
            found = true;       
        }else{
            curPtr = curPtr->getNext();
        }    
    }if (found){
        curPtr->setItem(headPtr->getItem());       
        Node<ItemType>* nodeToDeletePtr = headPtr;
        nodeToDeletePtr->setNext(nullptr); 
        delete nodeToDeletePtr; 
        nodeToDeletePtr = nullptr; 
        itemCount--;
    } 
return found;
}
template<class ItemType> void LinkedList<ItemType>::clear() {
    Node<ItemType>* nodeToDeletePtr = headPtr;
    while (headPtr != nullptr) {
        headPtr = headPtr->getNext();
        nodeToDeletePtr->setNext(nullptr); 
        delete nodeToDeletePtr;
        nodeToDeletePtr = headPtr;
    } 
}
/*template<class ItemType> int LinkedList<ItemType>::getFrequencyOf(const ItemType& newEntry) const {
    int frequency = 0;
    Node<ItemType>* curPtr = headPtr;
    for (int i = 0; i < itemCount && curPtr != nullptr; i++) {
        if (curPtr->getItem() == newEntry) {
            frequency++; 
        }
        curPtr = curPtr->getNext(); 
    }    return frequency; 
}
template<class ItemType> bool LinkedList<ItemType>::contains(const ItemType& newEntry) const {
    return getFrequencyOf(newEntry) > 0; 
}
template<class ItemType> vector<ItemType> LinkedList<ItemType>::toVector() const {
    vector<ItemType> ListContents;
    Node<ItemType>* curPtr = headPtr;
    for (int i = 0; i < itemCount && curPtr != nullptr; i++) {
        ListContents.push_back(curPtr->getItem());
        curPtr = curPtr->getNext(); 
    }    return ListContents; 
}*/
template<class ItemType> void LinkedList<ItemType>::display() {
    Node<ItemType>* curPtr = headPtr; 
    if (headPtr==nullptr){
        cout << "this list is empty!";
        return;
    }else{
        cout << endl;
        while(cur!=nullptr){
            cout<< cur->getItem()<<" ";
            cur=cur->next;
        }
    }
}
template<class ItemType> LinkedList<ItemType>::~LinkedList() {
    clear();
}
