#include "Processor.hpp"

Processor::Processor( 
    const std::string&    name,
    const std::string&    brand,
    double                freqGhz,
    uint8_t               noCores,
    uint8_t               noThreads,
    uint16_t              turboBoostLimit,
    bool                  cooler
):
    mName_str           ( name ),
    mBrand_str          ( brand ),
    mFreqGhz_d          ( freqGhz ),
    mNoCores_u8         ( noCores ),
    mNoThreads_u8       ( noThreads ),
    mTurboBoostLimit_u16( turboBoostLimit ),
    mCooler_b           ( cooler )  
{};