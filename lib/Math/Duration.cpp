#include "Duration.h"

// Constructor definition
Duration::Duration(int min) : minutes(min) {}

// Function definition
int Duration::getMinutes() const {
    return minutes;
}
