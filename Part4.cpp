#include <iostream>

using namespace std;

int main() {
    
    int numOfPeople;
    int slicesPerPerson;
    int slicesPerPizza;

    cout << "\n\nHow many people will be attending the pizza party? ";
    cin >> numOfPeople;
    cout << "\n\n How many slices of pizza will each person eat?";
    cin >> slicesPerPerson;
    cout << "\n\nHow many slices are included in each pizza? ";
    cin >> slicesPerPizza;

    int totatlSlicesNeeded = numOfPeople *  slicesPerPerson;
    int pizzasNeeded = totatlSlicesNeeded / slicesPerPizza;
    
    if(totatlSlicesNeeded % slicesPerPizza != 0) { // add a pizza if there's a remainder to 
        pizzasNeeded++; // or pizzasNeeded += 1
    }
    
    int leftOverSlices = slicesPerPizza - (totatlSlicesNeeded % slicesPerPizza);

    cout << "You will need to order " << pizzasNeeded << " pizzas.\n";
    cout << " There will be " << leftOverSlices << " leftover slices.\n";

    
    return 0;
}