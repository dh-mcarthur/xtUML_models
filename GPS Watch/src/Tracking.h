/*----------------------------------------------------------------------------
 * File:  Tracking.h
 *
 * UML Component (Module) Declaration (Operations and Signals)
 *
 * (C) Copyright 1998-2012 Mentor Graphics Corporation.  All rights reserved.
 *--------------------------------------------------------------------------*/

#ifndef TRACKING_H
#define TRACKING_H
#ifdef	__cplusplus
extern	"C"	{
#endif
/*
The Tracking component encapsulates the entire application software. This is the 
only component in the system from which code will be generated for the final 
product.
*/

extern void Tracking_HR_heartRateChanged( r4_t );
extern void Tracking_HR_registerListener( void );
extern void Tracking_HR_unregisterListener( void );
extern void Tracking_LOC_locationUpdate( GPSWatch_sdt_Location );
extern void Tracking_LOC_registerListener( void );
extern void Tracking_LOC_unregisterListener( void );
extern r4_t Tracking_UTIL_getDistance( GPSWatch_sdt_Location, GPSWatch_sdt_Location );
extern void Tracking_UI_lapResetPressed( void );
extern void Tracking_UI_lightPressed( void );
extern void Tracking_UI_modePressed( void );
extern void Tracking_UI_setData( s2_t, r4_t );
extern void Tracking_UI_setTargetPressed( void );
extern void Tracking_UI_setTime( i_t );
extern void Tracking_UI_startStopPressed( void );


#ifdef	__cplusplus
}
#endif
#endif  /* TRACKING_H */
