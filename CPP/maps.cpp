#include <iostream>
#include <map>

int main() {
    // Create a map that maps strings to integers
    std::map<std::string, int> population;

    // Insert elements into the map
    population["India"] = 1400;
    population["USA"] = 331;
    population["China"] = 1441;

    // Access elements by key
    std::cout << "Population of India: " << population["India"] << " million" << std::endl;

    // Check if a key exists
    if (population.find("Brazil") != population.end()) {
        std::cout << "Population of Brazil: " << population["Brazil"] << " million" << std::endl;
    } else {
        std::cout << "Brazil is not in the map." << std::endl;
    }

    // Iterate through the map
    for (const auto& pair : population) {
        std::cout << pair.first << ": " << pair.second << " million" << std::endl;
    }

    return 0;
}
