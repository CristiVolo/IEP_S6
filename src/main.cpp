#include <iostream>
#include <string>
#include <Corporation/Corporation.hpp>
#include <Processor/Processor.hpp>

Corporation& ref_loc_stCorp()
{
    static Corporation corp_obj( 
        "Intel",
        "California", 
        "Computer hardware", 
        77.87 
    );
    return corp_obj;
}

Processor& ref_loc_stProc()
{

    std::string brand_str = ref_loc_stCorp().get_Name();
    std::cout << "\nInside ref_loc_stProc() -> " << brand_str;
    static Processor proc_obj(
        "Intel Core i9",
        brand_str,
        3.5,
        8,
        16,
        5.3,
        true
    );
    return proc_obj;
}

int main( void )
{
    //ref_loc_stProc().display_Details();      Brand does not display????
    //ref_loc_stProc();
    return 0;
}
