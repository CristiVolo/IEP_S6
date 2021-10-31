#ifndef CORPORATION_HPP
#define CORPORATION_HPP

#include <string>

class Corporation
{
    std::string mName_str;
    std::string mCountryHQ_str;
    std::string mPrincipalIndustry_str;
    double      mRevenue2020Bil_d;

public:
    Corporation(
        const std::string&  name,
        const std::string&  countryHQ,
        const std::string&  principalIndustry,
        double              revenue2020Bil
    );                                                       /** constructor              */
    ~Corporation() = default;                                /** destructor               */
    Corporation( const Corporation& corp_obj );              /** copy constructor         */
    Corporation& operator=( const Corporation& corp_obj );   /** copy assignment operator */
    std::string get_Name();                                  /** getter for Name          */
    void display_Details();                                  /** print the members of a corp instance */
};

#endif