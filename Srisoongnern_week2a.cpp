#include <iostream>
using namespace std;

class inventory
{
private:
    int itemNumber;   // An int that holds the item's number
    int quantity;     // An int for holding the quantity of the items on hand
    double cost;      // A double for holding the wholesale per-unit cost of the item
    double totalCost; // A double for holding the total inventory cost of the item (calculated as quantity times cost)

public:
    inventory() // DefaultConstructor - Sets all the member variables to 0
    {
        itemNumber = 0;
        quantity = 0;
        cost = 0;
        totalCost = 0;
    };
    inventory(int itemNum, int quantityNum, double costNum) : itemNumber(itemNum), quantity(quantityNum), cost(costNum) // Constructor #2
    {
        setTotalCost();
    }

    // Set functions
    void setItemNumber(int itemNum) // Accepts an integer argument that is copied to the itemNumber member variable
    {

        itemNumber = itemNum;
    }

    void setQuantity(int quantityNum) // Accepts an integer argument that is copied to the quantity member variable
    {

        quantity = quantityNum;
    }

    void setCost(double costNum) // Accepts a double argument that is copied to the cost member variable
    {

        cost = costNum;
    }

    void setTotalCost() // Calculates the total inventory cost for the item (quantity times cost) and stores the result in totalCost
    {
        totalCost = cost * quantity;
    }

    // Get functions
    int getItemNumber() const { return itemNumber; }
    int getQuantity() const { return quantity; }
    double getCost() const { return cost; }
    double getTotalCost() const { return totalCost; }
};

// item1 will be input from user and item2 will be fixed number and item3 will be default
int main()
{
    int itemNum;
    int quantityNum;
    double costNum;

    // Create an instance using the default constructor
    inventory item1;
    inventory item3;

    // Create an instance using the parameterized constructor
    cout << "Input item1 number: ";
    cin >> itemNum;
    while (itemNum < 0)
    {
        cout << "Item number can't be less than zero, please input again: ";
        cin >> itemNum;
    }

    cout << "Input item1 quantity: ";
    cin >> quantityNum;
    while (quantityNum < 0)
    {
        cout << "Quantity number can't be less than zero, please input again: ";
        cin >> quantityNum;
    }

    cout << "Input item1 cost: ";
    cin >> costNum;
    while (costNum < 0)
    {
        cout << "Cost of the item can't be less than zero, please input again: ";
        cin >> costNum;
    }

    // Update item1 using setters
    item1.setItemNumber(itemNum);
    item1.setQuantity(quantityNum);
    item1.setCost(costNum);
    item1.setTotalCost();

    // Update fixed value for item2
    inventory item2(2, 3, 4.4);

    // Print all result
    // item1
    cout << "----------------------------\n"
         << "The item Number #" << item1.getItemNumber() << '\n'
         << "The Quantity of this item #" << item1.getQuantity() << '\n'
         << "The Cost of this item $" << item1.getCost() << '\n'
         << "The Total Cost of this item $" << item1.getTotalCost() << '\n';
    // item2
    cout << "----------------------------\n"
         << "The item Number #" << item2.getItemNumber() << '\n'
         << "The Quantity of this item #" << item2.getQuantity() << '\n'
         << "The Cost of this item $" << item2.getCost() << '\n'
         << "The Total Cost of this item $" << item2.getTotalCost() << '\n';
    // item3
    cout << "----------------------------\n"
         << "The item Number #" << item3.getItemNumber() << '\n'
         << "The Quantity of this item #" << item3.getQuantity() << '\n'
         << "The Cost of this item $" << item3.getCost() << '\n'
         << "The Total Cost of this item $" << item3.getTotalCost() << '\n';

    return 0;
}