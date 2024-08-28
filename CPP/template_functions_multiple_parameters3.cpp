#include <iostream>

template <typename T1, typename T2, typename T3>
class SensorFusion {
private:
    T1 gpsData;
    T2 imuData;
    T3 barometerData;

public:
    SensorFusion(T1 gps, T2 imu, T3 barometer) : gpsData(gps), imuData(imu), barometerData(barometer) {}

    void estimatePosition() const {
        std::cout << "Estimated Position based on sensor fusion:\\n";
        std::cout << "GPS: " << gpsData << ", IMU: " << imuData << ", Barometer: " << barometerData << std::endl;
    }

    T1 getGpsData() const {
        return gpsData;
    }

    T2 getImuData() const {
        return imuData;
    }

    T3 getBarometerData() const {
        return barometerData;
    }
};

int main() {
    SensorFusion<double, double, double> fusion1(51.5074, 0.1278, 100.5);
    SensorFusion<float, int, double> fusion2(40.7128f, 100, 15.5);

    fusion1.estimatePosition();
    fusion2.estimatePosition();

    return 0;
}
/*
Estimated Position based on sensor fusion:\nGPS: 51.5074, IMU: 0.1278, Barometer: 100.5
Estimated Position based on sensor fusion:\nGPS: 40.7128, IMU: 100, Barometer: 15.5
*/