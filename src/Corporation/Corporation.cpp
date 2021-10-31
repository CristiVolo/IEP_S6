#include "Corporation.hpp"

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