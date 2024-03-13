#include <iostream>
using namespace std;
class Bird {
public:
    bool hasFeathers = true; // Default value for hasFeathers
};

class Canary : public Bird {
public:
    string colour = "yellow"; // Default value for colour
};

int main() {
    Canary canary;
    cout << "Canary has feathers: " << canary.hasFeathers << endl;
    cout << "Canary colour: " << canary.colour << endl;
    return 0;
}
