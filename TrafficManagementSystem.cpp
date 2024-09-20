#include <iostream>
#include <string>
using namespace std;

class TrafficLight {
private:
    string lightColor;

public:
    TrafficLight() {} // Default constructor
    ~TrafficLight() {} // Destructor

    void setLightColor(string color) {
        lightColor = color;
    }

    void displayLightColor() {
        cout << "Current Traffic Light: " << lightColor << endl;
    }
};

class TrafficManagementSystem {
private:
    TrafficLight trafficLight;

public:
    TrafficManagementSystem() {} // Default constructor
    ~TrafficManagementSystem() {} // Destructor

    void manageTraffic() {
        string color;
        cout << "Set traffic light color (Red/Yellow/Green): ";
        cin >> color;
        trafficLight.setLightColor(color);
        trafficLight.displayLightColor();
    }
};

int main() {
    TrafficManagementSystem system;
    system.manageTraffic();
    return 0;
}
