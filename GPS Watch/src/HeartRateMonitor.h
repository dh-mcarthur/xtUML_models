/*----------------------------------------------------------------------------
 * File:  HeartRateMonitor.h
 *
 * UML Component (Module) Declaration (Operations and Signals)
 *
 * (C) Copyright 1998-2012 Mentor Graphics Corporation.  All rights reserved.
 *--------------------------------------------------------------------------*/

#ifndef HEARTRATEMONITOR_H
#define HEARTRATEMONITOR_H
#ifdef	__cplusplus
extern	"C"	{
#endif
/*
Simulates a pulse monitor hardware/firmware. This component is only behavioral and included for testing purposes.
*/

extern void HeartRateMonitor_HR_heartRateChanged( r4_t );
extern void HeartRateMonitor_HR_registerListener( void );
extern void HeartRateMonitor_HR_unregisterListener( void );


#ifdef	__cplusplus
}
#endif
#endif  /* HEARTRATEMONITOR_H */
