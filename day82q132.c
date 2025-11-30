#include <stdio.h>

// Define enumeration for traffic lights
enum TrafficLight {
    RED,
    YELLOW,
    GREEN
};

int main() {
    enum TrafficLight light;

    // Example: loop through all traffic light states
    for (light = RED; light <= GREEN; light++) {
        switch (light) {
            case RED:
                printf("RED -> Stop\n");
                break;
            case YELLOW:
                printf("YELLOW -> Wait\n");
                break;
            case GREEN:
                printf("GREEN -> Go\n");
                break;
            default:
                printf("Invalid light\n");
        }
    }

    return 0;
}
