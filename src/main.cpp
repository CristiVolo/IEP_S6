#include <iostream>
#include <string>
#include <Corporation/Corporation.hpp>
#include <Processor/Processor.hpp>
#include <ProcessorModelName/ProcessorModelName.hpp>

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
    //ref_loc_stProc().display_Details();      //Brand does not display????
    //ref_loc_stProc();
    //ProcessorModelName procModName_obj("asd");
    
    //std::cout << procModName_obj.get_Name();

     
    /*
    Item 10: 
        Have assignment operators return a reference to *this.
    **********************************************************
    **/
    /*
    Step 1:
        Declare and instantiate a new ProcessorModelName object,
            and initialise its field with
            the "Intel Core i3" string.
        Declare 9 other ProcessorModelName references;
            the default constructor auto-instantiates 
            the objects. 
        Edit: some of them need initialisation to prove points later on.
        Print: string field of 'a'.
    **/
    ProcessorModelName a("Intel Core i3");
    ProcessorModelName b0, c0, d0;
    ProcessorModelName b1("Intel Core i5"), c1, d1;
    ProcessorModelName b2, c2, d2;

    std::cout << "a.mName_str: ";
    a.print_Name_n();

    /*
    Step 2:
        Chain-assignment: each object, through the assignment operator,
            will have the "Intel Core i3" string assigned to its string field.
        Order: right-to-left evaluation; 
            b0's field is assigned; the result of the 'b0 = a' operation,
            a.k.a. the updated 'b0', is assigned to 'c0'; the freshly updated 'c0'
            is assigned to 'd0', completing the chain assignment.
        Print: string fields of the 3 new updated objects.
    **/
    d0 = c0 = (b0 = a);

    std::cout << "b0.mName_str: ";
    b0.print_Name_n();

    std::cout << "c0.mName_str: ";
    c0.print_Name_n();

    std::cout << "d0.mName_str: ";
    d0.print_Name_n();

    /*
    Step 3:
        Controlled order: the parantheses dictate the assignment order;
            the string field's value of 'b1' is "Intel Core i5",
            and 'c1' will be the first object to be updated;
            further down the line, 'd1' is updated using the 
            previous assignment's result ( the new 'c1' ), 
            and its field will be "Intel Core i5";
            but the last assignment, 'd1' = 'a',
            updates 'd1' with "Intel Core i3".
        Print: string fields of the 3 new updated objects.
    **/
    ( d1 = ( c1 = b1 ) ) = a;

    std::cout << "b1.mName_str: ";
    b1.print_Name_n();

    std::cout << "c1.mName_str: ";
    c1.print_Name_n();

    std::cout << "d1.mName_str: ";
    d1.print_Name_n();


    /*
    Step 4:
        Uninitilised objects: let's repeat Step 3, but this time,
            'b' ( 'b2' here ) is not initialised,
            and the field's value will be a null pointer,
            this chains to 'c2', then 'd2', but the last one
            is "saved" by 'a', which updates 'd2' with
            "Intel Core i3".
        Print: string fields of the 3 new updated objects.
    **/
    ( d2 = ( c2 = b2 ) ) = a;

    std::cout << "b2.mName_str: ";
    b2.print_Name_n();

    std::cout << "c2.mName_str: ";
    c2.print_Name_n();

    std::cout << "d2.mName_str: ";
    d2.print_Name_n();

    /*
    Item 11: 
        Handle assignment to self in operator=.
    **********************************************************
    **/
    /*
    Step 1:
        
    **/

    return 0;
}
