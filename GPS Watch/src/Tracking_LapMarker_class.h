/*----------------------------------------------------------------------------
 * File:  Tracking_LapMarker_class.h
 *
 * Class:       LapMarker  (LapMarker)
 * Component:   Tracking
 *
 * (C) Copyright 1998-2012 Mentor Graphics Corporation.  All rights reserved.
 *--------------------------------------------------------------------------*/

#ifndef TRACKING_LAPMARKER_CLASS_H
#define TRACKING_LAPMARKER_CLASS_H

#ifdef	__cplusplus
extern	"C"	{
#endif

/*
 * Structural representation of application analysis class:
 *   LapMarker  (LapMarker)
 */
struct Tracking_LapMarker {

  /* application analysis class attributes */
  i_t lapTime;  /* - lapTime */

  /* relationship storage */
  /* Note:  No storage needed for LapMarker->TrackLog[R5] */
};

extern void Tracking_LapMarker_R5_Link( Tracking_TrackLog *, Tracking_LapMarker * );
extern void Tracking_LapMarker_R5_Unlink( Tracking_TrackLog *, Tracking_LapMarker * );


#define Tracking_LapMarker_MAX_EXTENT_SIZE 200
extern Escher_Extent_t pG_Tracking_LapMarker_extent;

#ifdef	__cplusplus
}
#endif

#endif  /* TRACKING_LAPMARKER_CLASS_H */


