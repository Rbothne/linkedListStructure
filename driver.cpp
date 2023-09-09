
#include <string>
#include <iostream>
using namespace std;
#include "LinkedList.h"
int main(){   
    LinkedList<string> newList;
    while(1){
    cout << "hey what do you want to do:" << endl;
    cout << endl << "1 Add an Item";
    cout << endl << "2 Remove an Item";
    cout << endl << "3 Show total # of items";
    cout << endl << "4 Display the list";
    cout << endl << "5 EXIT";
    int ui;
    string ux;

    cin >> ui;
    switch(ui) {
      case '1' :
         cout << "what item would you like to add?" << endl; 
         cin >> ux;
         newList.add(ux);
         break;
      case '2' :
         cout << "what item would you like to remove?" << endl; 
         cin >> ux;
         newList.remove(ux);
      case '3' :
         cout << newList.getLength();
         break;
      case '4' :
         newList.display();
         break;
      case '5' :
         break;
      default :
         cout << "Invalid menu option" << endl;
        }
    }
    if(ui==5){
  return 0;
    }
}
