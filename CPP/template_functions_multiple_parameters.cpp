#include <iostream>

template <typename T1, typename T2>
bool compareSensorData(T1 sensor1_reading1, T2 sensor2_reading1, T1 sensor1_reading2, T2 sensor2_reading2) {
    return (sensor1_reading1 == sensor1_reading2) && (sensor2_reading1 == sensor2_reading2);
}

int main() {
    double temperature1 = 25.5, temperature2 = 25.5;
    int altitude1 = 300, altitude2 = 300;

    if (compareSensorData(temperature1, altitude1, temperature2, altitude2)) {
        std::cout << "Sensor readings are consistent." << std::endl;
    } else {
        std::cout << "Sensor readings are not consistent." << std::endl;
    }

    // Example with different sensor data types
    float battery1 = 75.5f, battery2 = 75.5f;
    long gps1 = 987654321, gps2 = 987654321;

    if (compareSensorData(battery1, gps1, battery2, gps2)) {
        std::cout << "Sensor readings are consistent." << std::endl;
    } else {
        std::cout << "Sensor readings are not consistent." << std::endl;
    }

    return 0;
}
/* 
Sensor readings are consistent.
Sensor readings are consistent.
*/
