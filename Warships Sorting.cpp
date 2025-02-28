#include <iostream> 
#include <string>
using namespace std;
struct Warship {
    string Name;
    string Type;
    string ServiceNumber;
    int Size;
};

int main() {
    Warship ships[10] = {
        {"USS Gerald R. Ford", "Aircraft Carrier", "CVN-78", 5},
        {"USS Zumwalt", "Destroyer", "DDG-1000", 3},
        {"USS  Virginia", "Submarine", "SSN-774", 4},
        {"USS Independence", "Littorial Combat Ship", "LCS-2", 2},
        {"USS America", "Amphibious Assault Ship", "LHA-6", 4}, 
        {"USS John Finn", "Destroyer", "DDG-1001", 3},
        {"USS New York", "Amphibious Transport", "LPD-21", 4}, 
        {"USS Michael Monsoor", "Destroyer", "DDG-1001", 3}, 
        {"USS Arlington", "Amphibious Transport Dock", "LPD-24", 4}, 
        {"USS Portland", "Amphibious Transport Dock", "LPD-27", 4} 
    };
    for (int i = 0; i < 10; i++)
    { 
        cout << "Name: " << ships[i].Name << endl;
        cout << "Type: " << ships[i].Type << endl;
        cout << "Service Number: " << ships[i].ServiceNumber << endl;
        cout << "Size: " << ships[i].Size << endl;
        cout << "----------------------" << endl;
     }
     return 0;
    }
