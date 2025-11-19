#include <cstdint>
#include <array>
#include <iostream>
#include <iomanip>

//Defining the initial hash values, these serve as the starting point for the PoW computation
const std::array<std::uint32_t, 8> INITIAL_HASH_VALUES = {
    0x6a09e667, 0xbb67ae85, 0x3c6ef372, 0xa54ff53a, 
    0x510e527f, 0x9b05688c, 0x1f83d9ab, 0x5be0cd19
};

int main () {
    std::cout << "SHA-256 Initial Hash Values (H):" << std::endl;

    for (const auto& h_val : INITIAL_HASH_VALUES) {
    // Print each (H) value in hex form
    std::cout << "0x" << std::hex << h_val << std::endl;
    //0x outputted for visual clarity
    }

    return 0;
};


