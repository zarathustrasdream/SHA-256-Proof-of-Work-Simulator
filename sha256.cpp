#include <cstdint>
#include <array>
#include <iostream>

//Defining the initial hash values, these serve as the starting point for the PoW computation
const std::array<std::uint32_t, 8> INITIAL_HASH_VALUES = {
    0x6a09e667, 0xbb67ae85, 0x3c6ef372, 0xa54ff53a, 
    0x510e527f, 0x9b05688c, 0x1f83d9ab, 0x5be0cd19
};

