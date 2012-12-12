/*----------------------------------------------------------------------------
 * File:  Location.h
 *
 * UML Component (Module) Declaration (Operations and Signals)
 *
 * (C) Copyright 1998-2012 Mentor Graphics Corporation.  All rights reserved.
 *--------------------------------------------------------------------------*/

#ifndef LOCATION_H
#define LOCATION_H
#ifdef	__cplusplus
extern	"C"	{
#endif
/*
Simulates a the GPS hardware/firmware. This component is only behavioral and included for testing purposes.
*/

extern r4_t Location_UTIL_getDistance( GPSWatch_sdt_Location, GPSWatch_sdt_Location );
extern void Location_LOC_locationUpdate( GPSWatch_sdt_Location );
extern void Location_LOC_registerListener( void );
extern void Location_LOC_unregisterListener( void );


#ifdef	__cplusplus
}
#endif
#endif  /* LOCATION_H */
