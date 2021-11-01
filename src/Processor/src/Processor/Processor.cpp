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

Processor::Processor( const Processor& proc_obj )
{
    mName_str          = proc_obj.get_Name();
    mBrand_str         = proc_obj.get_Brand();
    mFreqGhz_d         = proc_obj.get_FreqGhz();
    mNoCores_u8        = proc_obj.get_NoCores();
    mNoThreads_u8      = proc_obj.get_NoThreads();
    mTurboBoostLimit_d = proc_obj.get_TurboBoostLimit();
    mCooler_b          = proc_obj.get_Cooler();
}

Processor& Processor::operator=( const Processor& proc_obj )
{
    if( this == &proc_obj )
        return *this;
    mName_str          = proc_obj.get_Name();
    mBrand_str         = proc_obj.get_Brand();
    mFreqGhz_d         = proc_obj.get_FreqGhz();
    mNoCores_u8        = proc_obj.get_NoCores();
    mNoThreads_u8      = proc_obj.get_NoThreads();
    mTurboBoostLimit_d = proc_obj.get_TurboBoostLimit();
    mCooler_b          = proc_obj.get_Cooler();
    return *this;
}

std::string Processor::get_Name() const
{
    return mName_str;
}

std::string Processor::get_Brand() const
{
    return mBrand_str;
}

double Processor::get_FreqGhz() const
{
    return mFreqGhz_d;
}

uint8_t Processor::get_NoCores() const
{
    return mNoCores_u8;
}

uint8_t Processor::get_NoThreads() const
{
    return mNoThreads_u8;
}

double Processor::get_TurboBoostLimit() const
{
    return mTurboBoostLimit_d;
}

bool Processor::get_Cooler() const
{
    return mCooler_b;
}

void Processor::display_Details()
{
    std::cout << "\nName -> " << mName_str << "\nBrand -> " << mBrand_str << "\nFrequency ( GHz ) -> " << mFreqGhz_d;
}
