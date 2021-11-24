#include "HandCream.hpp"
#include <iostream>

HandCream::HandCream()
{
    std::cout << "CALLED: HandCream no-arg constructor\n";
};

HandCream::HandCream( 
    const std::string& name,
    double price,
    uint8_t quantity
): 
    mName_str   ( name ),
    mPrice_dbl  ( price ),
    mQuantity_u8( quantity )
{};

HandCream::HandCream( const HandCream& handCream_obj )
{
    mName_str    = handCream_obj.get_Name();
    mPrice_dbl   = handCream_obj.get_Price();
    mQuantity_u8 = handCream_obj.get_Quantity();
}

HandCream& HandCream::operator=( const HandCream& handCream_obj )
{
    if( this == &handCream_obj )
        return *this;
    mName_str  = handCream_obj.get_Name();
    mPrice_dbl = handCream_obj.get_Price();
    mQuantity_u8 = handCream_obj.get_Quantity();
    return *this;
}

std::string HandCream::get_Name() const
{
    return mName_str;
}

double HandCream::get_Price() const
{
    return mPrice_dbl;
}

uint8_t HandCream::get_Quantity() const
{
    return mQuantity_u8;
}

void HandCream::print_Name_n()
{
    std::cout << mName_str << std::endl;
}

void HandCream::print_Price_n()
{
    std::cout << mPrice_dbl << std::endl;
}

void HandCream::print_Quantity_n()
{
    std::cout << mQuantity_u8 << std::endl;
}
