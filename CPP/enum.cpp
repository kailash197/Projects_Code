#include <iostream>
using namespace std;

enum Day {
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

enum Department {CS=1, ECE, IT=5, CIVIL, MECHA=9};

enum Card { CLUB, SPADE, DIAMOND, HEARTS};

enum Menu {NEW, OPEN, SAVE, CLOSE};

enum Feedback {POOR, SATISFACTORY, GOOD, EXCELLENT};

typedef float marks;
typedef int rollNumber;

int main() {
    marks m1, m2, m3;
    rollNumber r1, r2, r3;

    m1 = 2.5;
    m2 = 4.5;
    cout << "Total marks: " << (m1+m2) << endl<< endl;

    Day today = Wednesday;
    
    if (today == Wednesday) {
        std::cout << "Today is Wednesday!" << std::endl;
    }
    
    // Print all days
    for (int i = Monday; i <= Sunday; ++i) {
        switch (static_cast<Day>(i)) {
            case Monday: std::cout << "Monday" << std::endl; break;
            case Tuesday: std::cout << "Tuesday" << std::endl; break;
            case Wednesday: std::cout << "Wednesday" << std::endl; break;
            case Thursday: std::cout << "Thursday" << std::endl; break;
            case Friday: std::cout << "Friday" << std::endl; break;
            case Saturday: std::cout << "Saturday" << std::endl; break;
            case Sunday: std::cout << "Sunday" << std::endl; break;
        }
    }

    return 0;
}
/*
Total marks: 7

Today is Wednesday!
Monday
Tuesday
Wednesday
Thursday
Friday
Saturday
Sunday

*/