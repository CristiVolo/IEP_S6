#ifndef PROCESSOR_MODEL_NAME_HPP
#define PROCESSOR_MODEL_NAME_HPP

#include <string>

class ProcessorModelName
{
    std::string mName_str;
    bool mIsLocked_b = false;
    
public:
    ProcessorModelName();
    ProcessorModelName( const std::string& name );                                 /** constructor */
    ProcessorModelName( const ProcessorModelName& procModelName_obj );             /** copy constructor                     */
    ProcessorModelName& operator=( const ProcessorModelName& procModelName_obj );  /** copy assignment operator             */
    ~ProcessorModelName() = default;                                               /** destructor  */
    std::string get_Name() const;
    bool get_LockStatus() const;
    void print_Name_n();                                                           /** print the name field, with new line character */
    void print_LockStatus_n();   
    void set_LockStatus(bool isLocked);
    void ask_LockStatus();
};

#endif