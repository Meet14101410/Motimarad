#include <iostream>
#include <string>

struct VillageProfile {
    std::string name = "Moti Marad";
    std::string taluka = "Dhoraji";
    std::string district = "Rajkot";
    int pincode = 360410;
    bool is_large_village = true;
};

int main() {
    VillageProfile moti_marad;
    
    std::cout << "--- Village Information: " << moti_marad.name << " ---\n";
    std::cout << "Taluka:   " << moti_marad.taluka << "\n";
    std::cout << "District: " << moti_marad.district << "\n";
    std::cout << "Pincode:  " << moti_marad.pincode << "\n";
    std::cout << "Status:   " << (moti_marad.is_large_village ? "Major Rural Hub" : "Standard Village") << std::endl;
    
    return 0;
}
