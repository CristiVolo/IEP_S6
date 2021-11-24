#ifndef UREA_CREAM_HPP
#define UREA_CREAM_HPP

class UreaCream: public HandCream
{
    uint8_t mUreaConcentration_u8;
    
public:
    UreaCream() = default;
    UreaCream(
        const  std::string& name,
        double price
    );                                          /** constructor */
    UreaCream( const UreaCream& ureaCream_obj );                                   /** copy constructor                     */
    UreaCream& operator=( const UreaCream& ureaCream_obj );                        /** copy assignment operator             */
    ~UreaCream() = default;                                                        /** destructor  */
};

#endif