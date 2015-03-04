#ifndef __dovo_searchStatus__
#define __dovo_searchStatus__

/**
@file
Subclass of searchStatus, which is generated by wxFormBuilder.
*/

#include "gui.h"

//// end generated include
#include "engine.h"
#include <wx/timer.h>

/** Implementing searchStatus */
class dovo_searchStatus : public searchStatus
{
	protected:
		// Handlers for searchStatus events.
		void OnStop( wxCommandEvent& event );
	public:
		/** Constructor */
		dovo_searchStatus( wxWindow* parent );
	//// end generated class members

		~dovo_searchStatus();
		wxTimer timer;
		void OnTimer( wxTimerEvent& event );
		DICOMFileScanner *m_scanner;

};

#endif // __dovo_searchStatus__