//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreRoutine/RTLocation.h>

@class NSString;

@interface RTLocation (RTCoreDataTransformable)
+ (id)createWithMapItemMO:(id)arg1;	// IMP=0x00100000002345bf
+ (id)createWithManagedObject:(id)arg1;	// IMP=0x0010000000234497
+ (int)convertLocationReferenceFrame:(int)arg1;	// IMP=0x001000000031d319
- (id)locationAtDistance:(double)arg1 course:(double)arg2;	// IMP=0x001000000031e821
- (void)_distanceBetweenShiftedLocation:(id)arg1 unshiftedLocation:(id)arg2 locationShifter:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x001000000031e4e8
- (void)distanceFromLocation:(id)arg1 locationShifter:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000031e017
- (double)distanceFromLocation:(id)arg1 locationShifter:(id)arg2 error:(id *)arg3;	// IMP=0x001000000031d90d
- (id)initWithCLCircularRegion:(id)arg1;	// IMP=0x001000000031d7ec
- (id)initWithCLLocationCoordinate2D:(struct CLLocationCoordinate2D *)arg1;	// IMP=0x001000000031d750
- (id)initWithRTPair:(id)arg1;	// IMP=0x001000000031d5aa
- (id)initWithCLLocation:(id)arg1;	// IMP=0x001000000031d44f
- (id)initWithRTPLocation:(id)arg1;	// IMP=0x001000000031d32d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
