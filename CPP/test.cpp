#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int a, b=10;
    ofstream outfile("myfile.txt", std::ios::app);
    if(outfile.is_open()){
        outfile << "First line written into file.\n";
        outfile << "Second line written";
        outfile.close();
        cout<<"Data written into file: ";
    } else {
        cerr << "unable to open file"<<endl;
    }
}