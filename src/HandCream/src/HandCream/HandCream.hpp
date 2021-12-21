#ifndef HAND_CREAM_HPP
#define HAND_CREAM_HPP

#include <string>

class HandCream
{
    double      mPrice_dbl    = 10;
    uint8_t     mQuantity_u8  = 100;
    std::string mName_str     = "Handsan";
public:
    
    HandCream();
    HandCream(
        const   std::string& name,
        double  price,
        uint8_t quantity
    );                                          /** constructor */
    HandCream( const HandCream& handCream_obj );                                   /** copy constructor                     */
    HandCream& operator=( const HandCream& handCream_obj );                        /** copy assignment operator             */
    ~HandCream() = default;                                                        /** destructor  */
    std::string get_Name() const;
    double get_Price() const;
    uint8_t get_Quantity() const;
    void print_Name_n();                                                           /** print the name field, with new line character */
    void print_Price_n();
    void print_Quantity_n();
};

#endif