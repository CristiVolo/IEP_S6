#ifndef UREA_CREAM_HPP
#define UREA_CREAM_HPP
#include "HandCream.hpp"

class UreaCream: public HandCream
{
    uint8_t mUreaConcentration_u8 = 5;

public:
    UreaCream();
    UreaCream(
        const   std::string& name,
        double  price,
        uint8_t quantity,
        uint8_t ureaConcentration
    );                                          /** constructor */
    UreaCream( const UreaCream& ureaCream_obj );                                   /** copy constructor                     */
    UreaCream& operator=( const UreaCream& ureaCream_obj );                        /** copy assignment operator             */
    ~UreaCream() = default;                                                        /** destructor  */
    uint8_t get_UreaConcentration() const;
    void print_UreaConcentration_n();
};

#endif