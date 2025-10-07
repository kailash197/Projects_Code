#include <iostream>
#include <list>
#include <algorithm> // For sort, reverse

using namespace std;

int main() {
    // 1. Initialization
    list<int> lst1; // An empty list of integers
    list<int> lst2(5, 10); // A list with 5 elements, all initialized to 10
    list<int> lst3 = {1, 2, 3, 4, 5}; // List initialization

    // 2. Inserting elements
    lst1.push_back(1); // Adds 1 to the end
    lst1.push_back(2); // Adds 2 to the end
    lst1.push_front(0); // Adds 0 to the front

    // 3. Accessing elements
    cout << "First element in lst1: " << lst1.front() << endl; // Access the first element
    cout << "Last element in lst1: " << lst1.back() << endl;   // Access the last element

    // 4. Iterating over the list
    cout << "Elements in lst3: ";
    for (int x : lst3) { // Range-based for loop
        cout << x << " ";
    }
    cout << endl;

    // 5. Modifying elements
    auto it = lst3.begin();
    advance(it, 2); // Move iterator to the third element
    *it = 20; // Modify the third element

    // 6. Inserting at specific positions
    it = lst3.begin();
    advance(it, 3); // Move iterator to the fourth element
    lst3.insert(it, 15); // Insert 15 at the fourth position

    // 7. Erasing elements
    it = lst3.begin();
    advance(it, 1); // Move iterator to the second element
    lst3.erase(it); // Erase the second element

    // 8. Checking size
    cout << "Size of lst3: " << lst3.size() << endl;

    // 9. Sorting the list
    lst3.sort(); // Sort in ascending order

    // 10. Reversing the list
    lst3.reverse(); // Reverse the order

    // 11. Clearing the list
    lst3.clear(); // Removes all elements

    // 12. Checking if the list is empty
    if (lst3.empty()) {
        cout << "lst3 is empty." << endl;
    }

    return 0;
}
/*
First element in lst1: 0
Last element in lst1: 2
Elements in lst3: 1 2 3 4 5 
Size of lst3: 5
lst3 is empty.
*/