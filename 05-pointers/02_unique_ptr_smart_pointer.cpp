/**
 * Problem: Modern RAII with std::unique_ptr (Smart Pointers)
 * Author: Bhavishya Dewangan
 */
#include <iostream>
#include <memory>

class HardwareSensor {
public:
    HardwareSensor(const std::string &name) : sensorName(name) {
        std::cout << "[INIT] Sensor '" << sensorName << "' activated.\n";
    }
    ~HardwareSensor() {
        std::cout << "[DESTROY] Sensor '" << sensorName << "' safely powered down.\n";
    }
    void readData() const {
        std::cout << "[READ] " << sensorName << " telemetry streaming at 3.3V.\n";
    }
private:
    std::string sensorName;
};

int main() {
    std::cout << "Entering RAII scope...\n";
    {
        std::unique_ptr<HardwareSensor> dht = std::make_unique<HardwareSensor>("DHT22 Temp Sensor");
        dht->readData();
        // Memory automatically freed when dht exits scope without explicit delete!
    }
    std::cout << "Exited RAII scope successfully.\n";
    return 0;
}
