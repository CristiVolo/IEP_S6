#ifndef PROCESSOR_MODEL_NAME_HPP
#define PROCESSOR_MODEL_NAME_HPP

#include <string>

class ProcessorModelName
{
    std::string mName_str;
    
    ProcessorModelName( const ProcessorModelName& procModelName_obj );             /** copy constructor                     */
    ProcessorModelName& operator=( const ProcessorModelName& procModelName_obj );  /** copy assignment operator             */
    
public:
    ProcessorModelName( const std::string& name );                                 /** constructor */
    ~ProcessorModelName() = default;                                               /** destructor  */
};

#endif