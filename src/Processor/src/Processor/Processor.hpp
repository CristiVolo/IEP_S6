#ifndef PROCESSOR_HPP
#define PROCESSOR_HPP

#include <string>

class Processor
{
    std::string        mName_str;
    std::string        mBrand_str;
    double             mFreqGhz_d;
    uint8_t            mNoCores_u8;
    uint8_t            mNoThreads_u8;
    double             mTurboBoostLimit_d;
    bool               mCooler_b;

public:
    Processor( 
    const std::string& name,
    const std::string& brand,
    double             freqGhz,
    uint8_t            oCores,
    uint8_t            noThreads,
    double             turboBoostLimit,
    bool               cooler
);                                                      /** constructor                          */
    ~Processor() = default;                             /** destructor                           */
    Processor( const Processor& proc_obj );             /** copy constructor                     */
    Processor& operator=( const Processor& proc_obj );  /** copy assignment operator             */
    std::string get_Name() const;                             /** getter for Name                      */
    std::string get_Brand() const;                            /** getter for Brand                     */
    double get_FreqGhz() const;                               /** getter for FreqGhz                   */
    uint8_t get_NoCores() const;                              /** getter for NoCores                   */
    uint8_t get_NoThreads() const;                            /** getter for NoThreads                 */
    double get_TurboBoostLimit() const;                       /** getter for TurboBoostLimit           */
    bool get_Cooler() const;                                  /** getter for Cooler                    */
    void display_Details();                             /** print the members of a proc instance */
};

#endif