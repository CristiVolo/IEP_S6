#include "HandCream.hpp"
#include <iostream>

HandCream::HandCream( 
    const std::string& name,
    double price
): 
    mName_str ( name ),
    mPrice_dbl( price )
{};

HandCream::HandCream( const HandCream& handCream_obj )
{
    mName_str  = handCream_obj.get_Name();
    mPrice_dbl = handCream_obj.get_Price();
}

HandCream& HandCream::operator=( const HandCream& handCream_obj )
{
    if( this == &handCream_obj )
        return *this;
    mName_str  = handCream_obj.get_Name();
    mPrice_dbl = handCream_obj.get_Price();
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

void HandCream::print_Name_n()
{
    std::cout << mName_str << std::endl;
}

void HandCream::print_Price_n()
{
    std::cout << mPrice_dbl << std::endl;
}
