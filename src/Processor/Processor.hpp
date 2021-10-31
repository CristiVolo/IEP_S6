#ifndef PROCESSOR_HPP
#define PROCESSOR_HPP

class Processor
{
    const std::string& mName_str;
    const std::string& mBrand_str;
    double             mFreqGhz_d;
    uint8_t            mNoCores_u8;
    uint8_t            mNoThreads_u8;
    uint16_t           mTurboBoostLimit_u16;
    bool               mCooler_b;

public:
    Processor( 
    const std::string&    name,
    const std::string&    brand,
    double                freqGhz,
    uint8_t               noCores,
    uint8_t               noThreads,
    uint16_t              turboBoostLimit,
    bool                  cooler
);                                                      /** constructor              */
    ~Processor() = default;                             /** destructor               */
    Processor( const Processor& proc_obj );             /** copy constructor         */
    Processor& operator=( const Processor& proc_obj );  /** copy assignment operator */
};

#endif  PROCESSOR_HPP