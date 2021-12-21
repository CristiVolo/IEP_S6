#include "ProcessorModelName.hpp"
#include <iostream>

ProcessorModelName::ProcessorModelName( const std::string& name ): mName_str( name ), mIsLocked_b( false ){};

ProcessorModelName::ProcessorModelName( const ProcessorModelName& procModelName_obj)
{
    mName_str = procModelName_obj.get_Name();
    mIsLocked_b = procModelName_obj.get_LockStatus();
}

ProcessorModelName& ProcessorModelName::operator=( const ProcessorModelName& procModelName_obj )
{
    if( this == &procModelName_obj )
        return *this;
    mName_str = procModelName_obj.get_Name();
    mIsLocked_b = procModelName_obj.get_LockStatus();
    return *this;
}

std::string ProcessorModelName::get_Name() const
{
    return mName_str;
}

bool ProcessorModelName::get_LockStatus() const
{
    return mIsLocked_b;
}

void ProcessorModelName::print_Name_n()
{
    std::cout << mName_str << std::endl;
}

void ProcessorModelName::print_LockStatus_n()
{
    std::cout << mName_str << std::endl;
}

void ProcessorModelName::set_LockStatus(bool isLocked)
{
    mIsLocked_b = isLocked;
}

void ProcessorModelName::ask_LockStatus()
{
    if(mIsLocked_b) std::cout << "Locked resource!\n";
    else            std::cout << "Resource available!\n";
}