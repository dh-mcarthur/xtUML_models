/*----------------------------------------------------------------------------
 * File:  LOG_bridge.h
 *
 * Description:
 * Methods for bridging to an external entity.
 *
 * External Entity:  Logging (LOG)
 * 
 * (C) Copyright 1998-2012 Mentor Graphics Corporation.  All rights reserved.
 *--------------------------------------------------------------------------*/

#ifndef LOG_BRIDGE_H
#define LOG_BRIDGE_H
#ifdef	__cplusplus
extern	"C"	{
#endif


extern void LOG_LogSuccess( c_t[ESCHER_SYS_MAX_STRING_LEN] );
extern void LOG_LogFailure( c_t[ESCHER_SYS_MAX_STRING_LEN] );
extern void LOG_LogInfo( c_t[ESCHER_SYS_MAX_STRING_LEN] );
extern void LOG_LogDate( Escher_Date_t, c_t[ESCHER_SYS_MAX_STRING_LEN] );
extern void LOG_LogTime( c_t[ESCHER_SYS_MAX_STRING_LEN], Escher_TimeStamp_t );
extern void LOG_LogReal( c_t[ESCHER_SYS_MAX_STRING_LEN], r4_t );
extern void LOG_LogInteger( i_t );

#ifdef	__cplusplus
}
#endif
#endif   /* LOG_BRIDGE_H */
