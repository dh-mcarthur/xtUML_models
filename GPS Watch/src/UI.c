/*----------------------------------------------------------------------------
 * File:  UI.c
 *
 * UML Component Port Messages
 * Component/Module Name:  UI
 *
 * (C) Copyright 1998-2012 Mentor Graphics Corporation.  All rights reserved.
 *--------------------------------------------------------------------------*/
/*
 Simulates the user interface and has the ability to connect an external GUI.

It is using the BridgePoint Java API to connect to the GUI in Verifier mode.
There are also handwritten C code that implments parts of this component to 
allow generated code to connect to the exact same GUI.
 */

#include "GPSWatch_sys_types.h"
#include "UI_GuiBridge_bridge.h"
#include "Tracking.h"
#include "UI_classes.h"

/*
 * Interface:  UI
 * Provided Port:  UI
 * To Provider Message:  setTime
 */
void
UI_UI_setTime( i_t p_time)
{
  /* GuiBridge::setTime( time:PARAM.time ) */
  XTUML_OAL_STMT_TRACE( 1, "GuiBridge::setTime( time:PARAM.time )" );
  UI_GuiBridge_setTime( p_time );
}

/*
 * Interface:  UI
 * Provided Port:  UI
 * To Provider Message:  setData
 */
void
UI_UI_setData( s2_t p_unit, r4_t p_value)
{
  /* IF ( ( PARAM.unit == km ) ) */
  XTUML_OAL_STMT_TRACE( 1, "IF ( ( PARAM.unit == km ) )" );
  if ( ( p_unit == GPSWatch_Unit_km_e ) ) {
    /* GuiBridge::setData( unit:0, value:PARAM.value ) */
    XTUML_OAL_STMT_TRACE( 2, "GuiBridge::setData( unit:0, value:PARAM.value )" );
    UI_GuiBridge_setData( 0, p_value );
  }
  else if ( ( p_unit == GPSWatch_Unit_meters_e ) ) {
    /* GuiBridge::setData( unit:1, value:PARAM.value ) */
    XTUML_OAL_STMT_TRACE( 2, "GuiBridge::setData( unit:1, value:PARAM.value )" );
    UI_GuiBridge_setData( 1, p_value );
  }
  else if ( ( p_unit == GPSWatch_Unit_minPerKm_e ) ) {
    /* GuiBridge::setData( unit:2, value:PARAM.value ) */
    XTUML_OAL_STMT_TRACE( 2, "GuiBridge::setData( unit:2, value:PARAM.value )" );
    UI_GuiBridge_setData( 2, p_value );
  }
  else if ( ( p_unit == GPSWatch_Unit_kmPerHour_e ) ) {
    /* GuiBridge::setData( unit:3, value:PARAM.value ) */
    XTUML_OAL_STMT_TRACE( 2, "GuiBridge::setData( unit:3, value:PARAM.value )" );
    UI_GuiBridge_setData( 3, p_value );
  }
  else if ( ( p_unit == GPSWatch_Unit_miles_e ) ) {
    /* GuiBridge::setData( unit:4, value:PARAM.value ) */
    XTUML_OAL_STMT_TRACE( 2, "GuiBridge::setData( unit:4, value:PARAM.value )" );
    UI_GuiBridge_setData( 4, p_value );
  }
  else if ( ( p_unit == GPSWatch_Unit_yards_e ) ) {
    /* GuiBridge::setData( unit:5, value:PARAM.value ) */
    XTUML_OAL_STMT_TRACE( 2, "GuiBridge::setData( unit:5, value:PARAM.value )" );
    UI_GuiBridge_setData( 5, p_value );
  }
  else if ( ( p_unit == GPSWatch_Unit_feet_e ) ) {
    /* GuiBridge::setData( unit:6, value:PARAM.value ) */
    XTUML_OAL_STMT_TRACE( 2, "GuiBridge::setData( unit:6, value:PARAM.value )" );
    UI_GuiBridge_setData( 6, p_value );
  }
  else if ( ( p_unit == GPSWatch_Unit_minPerMile_e ) ) {
    /* GuiBridge::setData( unit:7, value:PARAM.value ) */
    XTUML_OAL_STMT_TRACE( 2, "GuiBridge::setData( unit:7, value:PARAM.value )" );
    UI_GuiBridge_setData( 7, p_value );
  }
  else if ( ( p_unit == GPSWatch_Unit_mph_e ) ) {
    /* GuiBridge::setData( unit:8, value:PARAM.value ) */
    XTUML_OAL_STMT_TRACE( 2, "GuiBridge::setData( unit:8, value:PARAM.value )" );
    UI_GuiBridge_setData( 8, p_value );
  }
  else if ( ( p_unit == GPSWatch_Unit_bpm_e ) ) {
    /* GuiBridge::setData( unit:9, value:PARAM.value ) */
    XTUML_OAL_STMT_TRACE( 2, "GuiBridge::setData( unit:9, value:PARAM.value )" );
    UI_GuiBridge_setData( 9, p_value );
  }
  else if ( ( p_unit == GPSWatch_Unit_laps_e ) ) {
    /* GuiBridge::setData( unit:10, value:PARAM.value ) */
    XTUML_OAL_STMT_TRACE( 2, "GuiBridge::setData( unit:10, value:PARAM.value )" );
    UI_GuiBridge_setData( 10, p_value );
  }
}

/*
 * Interface:  UI
 * Provided Port:  UI
 * From Provider Message:  lapResetPressed
 */
void
UI_UI_lapResetPressed()
{
  Tracking_UI_lapResetPressed();
}

/*
 * Interface:  UI
 * Provided Port:  UI
 * From Provider Message:  startStopPressed
 */
void
UI_UI_startStopPressed()
{
  Tracking_UI_startStopPressed();
}

/*
 * Interface:  UI
 * Provided Port:  UI
 * From Provider Message:  lightPressed
 */
void
UI_UI_lightPressed()
{
  Tracking_UI_lightPressed();
}

/*
 * Interface:  UI
 * Provided Port:  UI
 * From Provider Message:  modePressed
 */
void
UI_UI_modePressed()
{
  Tracking_UI_modePressed();
}

/*
 * Interface:  UI
 * Provided Port:  UI
 * From Provider Message:  setTargetPressed
 */
void
UI_UI_setTargetPressed()
{
  Tracking_UI_setTargetPressed();
}

/*
 * UML Domain Functions (Synchronous Services)
 */


/*
 * Domain Function:  RunTestCase
 */
void
UI_RunTestCase()
{
  /* TestCase::execute() */
  XTUML_OAL_STMT_TRACE( 1, "TestCase::execute()" );
  UI_TestCase_op_execute();

}


/*
 * Domain Function:  init
 */
void
UI_init()
{
  /* GuiBridge::connect(  ) */
  XTUML_OAL_STMT_TRACE( 1, "GuiBridge::connect(  )" );
  UI_GuiBridge_connect();

}

#if UI_MAX_CLASS_NUMBERS > 0
/* xtUML class info (collections, sizes, etc.) */
Escher_Extent_t * const UI_class_info[ UI_MAX_CLASS_NUMBERS ] = {
  UI_CLASS_INFO_INIT
};
#endif

/*
 * Array of pointers to the class event dispatcher method.
 * Index is the (model compiler enumerated) number of the state model.
 */
const EventTaker_t UI_EventDispatcher[ UI_STATE_MODELS ] = {
  UI_class_dispatchers
};

void UI_execute_initialization()
{
  /*
   * Initialization Function:  init
   * Component:  UI
   */
  UI_init();

}
