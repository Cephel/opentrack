#include "ftnoir_filter_ewma2.h"
#include "facetracknoir/plugin-support.h"

extern "C" OPENTRACK_EXPORT Metadata* CALLING_CONVENTION GetMetadata()
{
	return new FTNoIR_FilterDll;
}
