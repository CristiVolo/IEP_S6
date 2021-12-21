#include "UreaCream.hpp"
#include <iostream>

UreaCream::UreaCream():HandCream()
{
    std::cout << "CALLED: UreaCream no-arg constructor\n";
};

UreaCream::UreaCream(
        const   std::string& name,
        double  price,
        uint8_t quantity,
        uint8_t ureaConcentration
):
    HandCream(name, price, quantity),
    mUreaConcentration_u8( ureaConcentration )
{};

UreaCream::UreaCream( const UreaCream& ureaCream_obj )
{

}

UreaCream& UreaCream::operator=( const UreaCream& ureaCream_obj )
{
    if( this == &ureaCream_obj )
        return *this;
    HandCream::operator=(ureaCream_obj);
    mUreaConcentration_u8 = ureaCream_obj.get_UreaConcentration();
    return *this;
}

uint8_t UreaCream::get_UreaConcentration() const
{
    return mUreaConcentration_u8;
}

void UreaCream::print_UreaConcentration_n()
{
    std::cout << mUreaConcentration_u8 << std::endl;
}