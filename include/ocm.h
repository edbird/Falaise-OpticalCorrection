//! \file       ocm.h
//! \brief      Birks Optical Correction Module for Falaise
//! \details    Birks Optical Correction Module for Falaise written by ecb edward.birdsall@postgrad.manchester.ac.uk

#ifndef OPTICALCORRECTIONMODULE_HH
#define OPTICALCORRECTIONMODULE_HH

// Bayeux
#include "bayeux/dpp/base_module.h"


class OpticalCorrectionModule : public dpp::base_module
{

    public:

    //! Construct module
    OpticalCorrectionModule();

    //! Free module
    virtual
    ~OpticalCorrectionModule();

    //! Configure module
    virtual
    void initialize(const datatools::properties& config,
                    datatools::service_manager& flservices,
                    dpp::module_handle_dict_type& moduledict);

    //! Process supplied data record
    virtual
    void dpp::base_module::process_status process(datatools::things& workitem);

    //! Reset
    virtual
    void reset();


    private:

    DPP_MODULE_REGISTRATION_INTERFACE(OpticalCorrectionModule)

};


#endif // OPTICALCORRECTIONMODULE_HH
