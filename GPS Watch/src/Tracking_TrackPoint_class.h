/*----------------------------------------------------------------------------
 * File:  Tracking_TrackPoint_class.h
 *
 * Class:       TrackPoint  (TrackPoint)
 * Component:   Tracking
 *
 * (C) Copyright 1998-2012 Mentor Graphics Corporation.  All rights reserved.
 *--------------------------------------------------------------------------*/

#ifndef TRACKING_TRACKPOINT_CLASS_H
#define TRACKING_TRACKPOINT_CLASS_H

#ifdef	__cplusplus
extern	"C"	{
#endif

/*
 * Structural representation of application analysis class:
 *   TrackPoint  (TrackPoint)
 */
struct Tracking_TrackPoint {

  /* application analysis class attributes */
  i_t time;  /* - time */
  r4_t longitude;  /* - longitude */
  r4_t latitude;  /* - latitude */
  r4_t speed;  /* - speed */

  /* relationship storage */
  /* Note:  No storage needed for TrackPoint->TrackLog[R1] */
  Tracking_TrackPoint * TrackPoint_R2_follows;
  Tracking_TrackPoint * TrackPoint_R2_preceeds;
  /* Note:  No storage needed for TrackPoint->TrackLog[R3] */
};

      
/*
 * R2 is Simple Reflexive:  0..1:0..1
 *  Formalizing TrackPoint follows participant
 *  Participant TrackPoint preceeds formalizer
 */
/* Navigation phrase:  R2.'follows' */
extern void Tracking_TrackPoint_R2_Link_follows( Tracking_TrackPoint *, Tracking_TrackPoint * );
extern void Tracking_TrackPoint_R2_Unlink_follows( Tracking_TrackPoint *, Tracking_TrackPoint * );
/* Navigation phrase:  R2.'preceeds' */
extern void Tracking_TrackPoint_R2_Link_preceeds( Tracking_TrackPoint *, Tracking_TrackPoint * );
extern void Tracking_TrackPoint_R2_Unlink_preceeds( Tracking_TrackPoint *, Tracking_TrackPoint * );
extern void Tracking_TrackPoint_R3_Link( Tracking_TrackLog *, Tracking_TrackPoint * );
extern void Tracking_TrackPoint_R3_Unlink( Tracking_TrackLog *, Tracking_TrackPoint * );


#define Tracking_TrackPoint_MAX_EXTENT_SIZE 200
extern Escher_Extent_t pG_Tracking_TrackPoint_extent;

#ifdef	__cplusplus
}
#endif

#endif  /* TRACKING_TRACKPOINT_CLASS_H */


