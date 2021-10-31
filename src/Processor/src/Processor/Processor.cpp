#include "Processor.hpp"
#include <iostream>

Processor::Processor( 
    const std::string&    name,
    const std::string&    brand,
    double                freqGhz,
    uint8_t               noCores,
    uint8_t               noThreads,
    double                turboBoostLimit,
    bool                  cooler
):
    mName_str           ( name ),
    mBrand_str          ( brand ),
    mFreqGhz_d          ( freqGhz ),
    mNoCores_u8         ( noCores ),
    mNoThreads_u8       ( noThreads ),
    mTurboBoostLimit_d  ( turboBoostLimit ),
    mCooler_b           ( cooler )  
{
    std::cout << "\nInside Processor constructor -> " << mBrand_str;
};

void Processor::display_Details()
{
    std::cout << "\nName -> " << mName_str << "\nBrand -> " << mBrand_str << "\nFrequency ( GHz ) -> " << mFreqGhz_d;
}
