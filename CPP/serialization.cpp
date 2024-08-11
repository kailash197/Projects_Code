#include <iostream>
#include <fstream>
using namespace std;

class Employee{
    public:
    string name;
    int employee_id;
    string department; 

    friend ofstream& operator<<(ofstream& ofs, Employee& e);
    friend ifstream& operator>>(ifstream& ifs, Employee& e);
};
ofstream& operator<<(ofstream& ofs, Employee& e){
    ofs<<e.name<<endl;
    ofs<<e.employee_id<<endl;
    ofs<<e.department<<endl;
    return ofs;
}

ifstream& operator>>(ifstream& ifs, Employee& e){
    ifs >> e.name >> e.employee_id >> e.department;
    return ifs;
}

int main(){
    Employee e1;
    e1.name="John";
    e1.employee_id=234;
    e1.department="Sales";

    //Store individual member variable into file
    string employee_filename = "employee.txt";
    ofstream outfile(employee_filename, ios::trunc);
    //Option1
    // outfile<<e1.name<<endl;
    // outfile<<e1.employee_id<<endl;
    // outfile<<e1.department<<endl;

    //Option2: serilization
    outfile<<e1;
    outfile.close();

    //Read from the file
    ifstream infile(employee_filename);

    string line;
    Employee read_employee;
    if (infile.is_open()){
        //Option1: 
        // while(!infile.eof()){
        //     getline(infile, line);
        //     cout<<line<<endl;
        // }

        //Option2: deserialization
        infile >> read_employee;
        cout << read_employee.name <<endl;
        cout<<read_employee.employee_id<<endl;
        cout<<read_employee.department<<endl;
        
        infile.close();
    } else {
        cerr<<employee_filename<<" doesn't exist!"<<endl;
        return 1;
    }






    return 0;
}