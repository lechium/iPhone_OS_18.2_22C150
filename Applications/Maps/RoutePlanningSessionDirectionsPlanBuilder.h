//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString, NavigationSession, RoutePlanningSession;

@interface RoutePlanningSessionDirectionsPlanBuilder : NSObject
{
    MISSING_TYPE *_session;	// 8 = 0x8
    NavigationSession *_navigationSession;	// 16 = 0x10
    unsigned long long _fidelity;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000083347f
@property(nonatomic) unsigned long long fidelity; // @synthesize fidelity=_fidelity;
@property(retain, nonatomic) NavigationSession *navigationSession; // @synthesize navigationSession=_navigationSession;
@property(retain, nonatomic) RoutePlanningSession *session; // @synthesize session=_session;
- (id)_timingForTransportType:(long long)arg1;	// IMP=0x0010000000833326
- (id)_transitPreferences;	// IMP=0x00100000008331f8
- (void)_addTimingToPlan:(id)arg1;	// IMP=0x0010000000832f8c
- (void)_addTransitOptionsToPlan:(id)arg1;	// IMP=0x0010000000832e0b
- (void)_addOriginDestinationToPlan:(id)arg1;	// IMP=0x001000000083212c
- (id)buildDirectionsPlan;	// IMP=0x0010000000831be6
- (id)initWithRoutePlanningSession:(id)arg1 fidelity:(unsigned long long)arg2;	// IMP=0x0010000000831a05
- (id)initWithSessionStack:(id)arg1 fidelity:(unsigned long long)arg2;	// IMP=0x001000000083170b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

