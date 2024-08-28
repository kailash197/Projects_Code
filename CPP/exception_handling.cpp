#include <iostream>
#include <stdexcept>

using namespace std;

class DivideByZeroException : public std::runtime_error {
public:
    DivideByZeroException() : std::runtime_error("Error: Division by zero!") {}
};

class NegativeValueException : public std::runtime_error {
public:
    NegativeValueException() : std::runtime_error("Error: Negative value encountered!") {}
};

int divide(int numerator, int denominator) {
    if (denominator == 0) {
        throw DivideByZeroException();
    }
    if (numerator < 0 || denominator < 0) {
        throw NegativeValueException();
    }
    return numerator / denominator;
}

int main() {
    int nof_persons = 100, nof_teams = 0;

    try {
        int nof_person_per_team = divide(nof_persons, nof_teams);
        cout << "Result: " << nof_person_per_team << endl;
    } catch (const DivideByZeroException& e) {
        cerr << e.what() << endl;
    } catch (const NegativeValueException& e) {
        cerr << e.what() << endl;
    } catch (const std::exception& e) {
        cerr << "General exception: " << e.what() << endl;
    } catch (...){
        cerr <<"Other exceptions not included in std::exception"<<endl;
    }

    nof_persons=-100, nof_teams=10;
        try {
        int nof_person_per_team = divide(nof_persons, nof_teams);
        cout << "Result: " << nof_person_per_team << endl;
    } catch (const DivideByZeroException& e) {
        cerr << e.what() << endl;
    } catch (const NegativeValueException& e) {
        cerr << e.what() << endl;
    } catch (const std::exception& e) {
        cerr << "General exception: " << e.what() << endl;
    }catch (...){
        cerr <<"Other exceptions not included in std::exception"<<endl;
    }
    
    nof_persons=100, nof_teams=10;
    try {
        int nof_person_per_team = divide(nof_persons, nof_teams);
        cout << "Result: " << nof_person_per_team << endl;
    } catch (const DivideByZeroException& e) {
        cerr << e.what() << endl;
    } catch (const NegativeValueException& e) {
        cerr << e.what() << endl;
    } catch (const std::exception& e) {
        cerr << "General exception: " << e.what() << endl;
    }catch (...){
        cerr <<"Other exceptions not included in std::exception"<<endl;
    }

    return 0;
}
/*
Error: Division by zero!
Error: Negative value encountered!
Result: 10
*/