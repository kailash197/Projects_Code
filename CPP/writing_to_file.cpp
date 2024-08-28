#include <iostream>
#include <fstream>

int main() {
    std::string filename = "example.txt";
    // Open a file in append mode
    std::ofstream outfile(filename, std::ios::app); //ios::app open in append mode
    // std::ofstream outfile("example.txt");//creates new file if doesn't exist. default: std::ios::trunc mode

    if (outfile.is_open()) {
        // Write some data to the file
        outfile << "This is some text appended to the file."<<std::endl;
        outfile << "Another line of text appended."<<std::endl;
        outfile.close();
        std::cout << "Data has been appended to the file." << std::endl;
    } else {
        std::cerr << "Unable to open file." << std::endl;
    }

    //now read and display the contents
    std::ifstream infile(filename);//ios::in, ios::out are flags 
    //file must exist before opening
    std::string line;
    if (infile.is_open()) // (!infile) is an option to check
    {
        // Option 1:
        // while(std::getline(infile, line)){
        //     std::cout<< line << std::endl;
        // }

        //Option 2:
        while(!infile.eof()){
            std::getline(infile, line);
            std::cout<<line<<std::endl;
        }
        if (infile.eof()) std::cout<<std::endl<<"end of file reached."<<std::endl;
        infile.close();
    } else {
        std::cerr << "File not found! " << filename<<std::endl;
        return 1;
    }      


    return 0;
}
/*
Data has been appended to the file.
This is some text appended to the file.
Another line of text appended.
This is some text appended to the file.
Another line of text appended.


end of file reached.
*/