#ifndef PROCESSOR_HPP
#define PROCESSOR_HPP

#include <string>

class Processor
{
    const std::string& mName_str;
    const std::string& mBrand_str;
    double             mFreqGhz_d;
    uint8_t            mNoCores_u8;
    uint8_t            mNoThreads_u8;
    double             mTurboBoostLimit_d;
    bool               mCooler_b;

public:
    Processor( 
    const std::string&    name,
    const std::string&    brand,
    double                freqGhz,
    uint8_t               noCores,
    uint8_t               noThreads,
    double                turboBoostLimit,
    bool                  cooler
);                                                      /** constructor              */
    ~Processor() = default;                             /** destructor               */
    Processor( const Processor& proc_obj );             /** copy constructor         */
    Processor& operator=( const Processor& proc_obj );  /** copy assignment operator */
    void display_Details();                             /** print the members of a proc instance */
};

#endif