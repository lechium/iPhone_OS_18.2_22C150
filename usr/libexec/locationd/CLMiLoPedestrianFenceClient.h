//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol CLIntersiloUniverse, CLPedestrianFenceServiceProtocol, OS_dispatch_queue;

@interface CLMiLoPedestrianFenceClient : NSObject
{
    id <CLIntersiloUniverse> _universe;	// 8 = 0x8
    id <CLPedestrianFenceServiceProtocol> _pedestrianFenceManager;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 24 = 0x18
    _Bool _sessionActive;	// 32 = 0x20
    NSString *_fenceIdStr;	// 40 = 0x28
    CDUnknownBlockType _onMotionMeasurements;	// 48 = 0x30
    CDUnknownBlockType _onStatusReport;	// 56 = 0x38
    CDUnknownBlockType _onErrorIndication;	// 64 = 0x40
    float _radius;	// 72 = 0x48
    _Bool _valid;	// 76 = 0x4c
    _Bool _fenceActive;	// 77 = 0x4d
    CDUnknownBlockType _onMotionMeasurement;	// 80 = 0x50
}

@property(copy, nonatomic) CDUnknownBlockType onMotionMeasurement; // @synthesize onMotionMeasurement=_onMotionMeasurement;
@property(readonly, nonatomic) _Bool fenceActive; // @synthesize fenceActive=_fenceActive;
@property(nonatomic) _Bool valid; // @synthesize valid=_valid;
- (void)sessionStatusReport:(id)arg1;	// IMP=0x0010000000129d51
- (void)didFailWithError:(long long)arg1;	// IMP=0x0010000000129ba8
- (void)didExitFence:(id)arg1;	// IMP=0x001000000012987f
- (void)endSession;	// IMP=0x001000000012975f
- (void)startSession;	// IMP=0x001000000012963f
- (void)clearFence;	// IMP=0x00100000001292f4
- (void)setFence;	// IMP=0x0010000000128ef4
- (void)dealloc;	// IMP=0x0010000000128e7a
- (id)initInUniverse:(id)arg1 andIdentifier:(id)arg2 andRadiusInMeters:(float)arg3 andCallback:(CDUnknownBlockType)arg4 andStatusCallback:(CDUnknownBlockType)arg5 andErrorCallback:(CDUnknownBlockType)arg6;	// IMP=0x0010000000128d28
- (id)init;	// IMP=0x0010000000128d10

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
