#ifndef HAND_CREAM_HPP
#define HAND_CREAM_HPP

#include <string>

class HandCream
{
    std::string mName_str;
    double      mPrice_dbl;
    
public:
    HandCream() = default;
    HandCream(
        const  std::string& name,
        double price
    );                                          /** constructor */
    HandCream( const HandCream& handCream_obj );                                   /** copy constructor                     */
    HandCream& operator=( const HandCream& handCream_obj );                        /** copy assignment operator             */
    ~HandCream() = default;                                                        /** destructor  */
    std::string get_Name() const;
    int get_Price() const;
    void print_Name_n();                                                           /** print the name field, with new line character */
    void print_Price_n();
};

#endif