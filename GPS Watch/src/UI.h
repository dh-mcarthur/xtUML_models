/*----------------------------------------------------------------------------
 * File:  UI.h
 *
 * UML Component (Module) Declaration (Operations and Signals)
 *
 * (C) Copyright 1998-2012 Mentor Graphics Corporation.  All rights reserved.
 *--------------------------------------------------------------------------*/

#ifndef UI_H
#define UI_H
#ifdef	__cplusplus
extern	"C"	{
#endif
/*
Simulates the user interface and has the ability to connect an external GUI.

It is using the BridgePoint Java API to connect to the GUI in Verifier mode.
There are also handwritten C code that implments parts of this component to 
allow generated code to connect to the exact same GUI.
*/

extern void UI_UI_lapResetPressed( void );
extern void UI_UI_lightPressed( void );
extern void UI_UI_modePressed( void );
extern void UI_UI_setData( s2_t, r4_t );
extern void UI_UI_setTargetPressed( void );
extern void UI_UI_setTime( i_t );
extern void UI_UI_startStopPressed( void );


#ifdef	__cplusplus
}
#endif
#endif  /* UI_H */
