#include "ProcessorModelName.hpp"
#include <iostream>

ProcessorModelName::ProcessorModelName( const std::string& name ): mName_str( name ){};

ProcessorModelName& ProcessorModelName::operator=( const ProcessorModelName& procModelName_obj )
{
    if( this == &procModelName_obj )
        return *this;
    mName_str = procModelName_obj.get_Name();
    return *this;
}

std::string ProcessorModelName::get_Name() const
{
    return mName_str;
}

void ProcessorModelName::print_Name_n()
{
    std::cout << mName_str << std::endl;
}