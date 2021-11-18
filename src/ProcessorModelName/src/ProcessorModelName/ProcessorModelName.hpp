#ifndef PROCESSOR_MODEL_NAME_HPP
#define PROCESSOR_MODEL_NAME_HPP

#include <string>

class ProcessorModelName
{
    std::string mName_str;
    
    ProcessorModelName( const ProcessorModelName& procModelName_obj );             /** copy constructor                     */
    
public:
    ProcessorModelName() = default;
    ProcessorModelName( const std::string& name );                                 /** constructor */
    ProcessorModelName& operator=( const ProcessorModelName& procModelName_obj );  /** copy assignment operator             */
    ~ProcessorModelName() = default;                                               /** destructor  */
    std::string get_Name() const;
    void print_Name_n();                                                           /** print the name field, with new line character */
};

#endif