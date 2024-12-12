#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Declare a vector of strings with initial values
    vector<string> names = {"abdullah", "atik", "rana"};

    // Use a range-based for loop to print all names
    cout << "Printing names using range-based for loop:\n";
    for (auto name : names) {
        cout << name << endl;
    }

    // Use a traditional for loop to print all names by index
    cout << "\nPrinting names using index-based for loop:\n";
    for (int i = 0; i < names.size(); i++) {
        cout << names[i] << "\n";
    }

    // Access specific elements of the vector
    cout << "\nAccessing specific elements of the vector:\n";
    cout << "First element: " << names[0] << endl;
    cout << "Second element: " << names[1] << endl;

    // Access the first and last elements using front() and back()
    cout << "\nUsing front() and back() to access elements:\n";
    cout << "First element using front(): " << names.front() << endl;
    cout << "Last element using back(): " << names.back() << endl;

    // Access elements using at() method
    cout << "\nAccessing element using at():\n";
    cout << "Second element using at(): " << names.at(1) << endl;

    // Add a new element to the vector using push_back()
    names.push_back("tomal");
    cout << "\nAfter adding a new element using push_back():\n";
    cout << "Last element: " << names.back() << endl;

    // Display the size of the vector
    cout << "\nCurrent size of the vector: " << names.size() << endl;

    // Check if the vector is empty
    cout << "\nIs the vector empty? (1 for Yes, 0 for No): " << names.empty() << endl;

    // Additional Topics:

    // Insert an element at a specific position
    names.insert(names.begin() + 1, "shuvo");
    cout << "\nAfter inserting an element at position 1:\n";
    for (auto name : names) {
        cout << name << " ";
    }
    cout << endl;

    // Remove an element from a specific position
    names.erase(names.begin() + 2);
    cout << "\nAfter removing the element at position 2:\n";
    for (auto name : names) {
        cout << name << " ";
    }
    cout << endl;

    // Clear all elements from the vector
    names.clear();
    cout << "\nAfter clearing the vector:\n";
    cout << "Vector size: " << names.size() << endl;
    cout << "Is the vector empty? (1 for Yes, 0 for No): " << names.empty() << endl;

    return 0;
}

