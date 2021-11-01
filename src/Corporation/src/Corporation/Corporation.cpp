#include "Corporation.hpp"
#include <iostream>


Corporation::Corporation( 
    const std::string&      name,
    const std::string&      countryHQ,
    const std::string&      principalIndustry,
    double                  revenue2020Bil
):
    mName_str              ( name ),
    mCountryHQ_str         ( countryHQ ),
    mPrincipalIndustry_str ( principalIndustry ),
    mRevenue2020Bil_d      ( revenue2020Bil )
{};

Corporation::Corporation( const Corporation& corp_obj )
{
    mName_str              = corp_obj.get_Name();
    mCountryHQ_str         = corp_obj.get_CountryHQ();
    mPrincipalIndustry_str = corp_obj.get_PrincipalIndustry();
    mRevenue2020Bil_d      = corp_obj.get_Revenue2020Bil();
}

Corporation& Corporation::operator=( const Corporation& corp_obj )
{
    if( this == &corp_obj )
        return *this;
    mName_str              = corp_obj.get_Name();
    mCountryHQ_str         = corp_obj.get_CountryHQ();
    mPrincipalIndustry_str = corp_obj.get_PrincipalIndustry();
    mRevenue2020Bil_d      = corp_obj.get_Revenue2020Bil();
    return *this;
}

std::string Corporation::get_Name() const
{
    return mName_str;
}

std::string Corporation::get_CountryHQ() const
{
    return mCountryHQ_str;
}

std::string Corporation::get_PrincipalIndustry() const
{
    return mPrincipalIndustry_str;
}

double Corporation::get_Revenue2020Bil() const
{
    return mRevenue2020Bil_d;
}

void Corporation::display_Details()
{
    std::cout << "\nName -> " << mName_str << "\nHQ's country -> " << mCountryHQ_str;
}
