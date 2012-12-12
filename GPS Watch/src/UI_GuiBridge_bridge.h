/*----------------------------------------------------------------------------
 * File:  UI_GuiBridge_bridge.h
 *
 * Description:
 * Methods for bridging to an external entity.
 *
 * External Entity:  Graphical User Interface (GuiBridge)
 * 
 * (C) Copyright 1998-2012 Mentor Graphics Corporation.  All rights reserved.
 *--------------------------------------------------------------------------*/

#ifndef UI_GUIBRIDGE_BRIDGE_H
#define UI_GUIBRIDGE_BRIDGE_H
#ifdef	__cplusplus
extern	"C"	{
#endif


extern void UI_GuiBridge_feedSetTargetPressedEvent( Escher_xtUMLEvent_t * );
extern void UI_GuiBridge_feedModePressedEvent( Escher_xtUMLEvent_t * );
extern void UI_GuiBridge_feedLightPressedEvent( Escher_xtUMLEvent_t * );
extern void UI_GuiBridge_feedLapResetPressedEvent( Escher_xtUMLEvent_t * );
extern void UI_GuiBridge_feedStartStopPressedEvent( Escher_xtUMLEvent_t * );
extern void UI_GuiBridge_setData( i_t, r4_t );
extern void UI_GuiBridge_setTime( i_t );
extern void UI_GuiBridge_connect( void );
extern void UI_GuiBridge_sendModePressed( void );
extern void UI_GuiBridge_sendLightPressed( void );
extern void UI_GuiBridge_sendLapResetPressed( void );
extern void UI_GuiBridge_sendStartStopPressed( void );
extern void UI_GuiBridge_sendTargetPressed( void );

#ifdef	__cplusplus
}
#endif
#endif   /* UI_GUIBRIDGE_BRIDGE_H */
