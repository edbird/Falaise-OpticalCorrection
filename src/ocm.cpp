// OpticalCorrectionModule implementation

#include "ocm.h"

DPP_MODULE_REGISTRATION_IMPLEMENT(OpticalCorrectionModule, "OpticalCorrectionModule");

// Construct
OpticalCorrectionModule::OpticalCorrectionModule() : dpp::base_module()
{
}

// Free
OpticalCorrectionModule::~OpticalCorrectionModule()
{
    this->reset();
}

// Init
void OpticalCorrectionModule::initialize(const datatools::properties& config,
                                         datatools::service_manager& flservices,
                                         dpp::module_handle_dict_type& moduledict)
{


    
    
    this->_set_initialized(true);
}

// Process
dpp::base_module::process_status OpticalCorrectionModule::process(datatools::things& workitem)
{

    // check if workitem has the SD bank
    if(workitem.has("SD"))
    {
        // do something

        mctools::simulated_data& sd{workitem.get("SD")};
        if(sd ...)
        {

        }
        else
        {
            // ...
        }
    }
    else
    {
        // TODO: return failure
    }

    return PROCESS_OK;
}


// Reset
void OpticalCorrectionModule::reset()
{
    this->_set_initialized(false);
}
