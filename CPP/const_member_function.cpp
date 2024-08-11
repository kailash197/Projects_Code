#include <iostream>
#include <string>

using namespace std;

class Person {
public:
    Person(const string& fName, const string& lName) : firstName(fName), lastName(lName) {}
    const string& getFirstName() const;
    const string& getLastName() const;
    string getName() const;  // Note that getName now returns a string, not a const string&

private:
    string firstName;
    string lastName;
};

const string& Person::getFirstName() const {
    return firstName;
}

const string& Person::getLastName() const {
    return lastName;
}

string Person::getName() const {
    // Concatenate the first and last name and return the result
    return firstName + " " + lastName;
}

int main() {
    Person myP("John", "Doe");
    cout << myP.getFirstName() << endl;
    cout << myP.getName() << endl;  // This will now correctly output "John Doe"
    return 0;
}
