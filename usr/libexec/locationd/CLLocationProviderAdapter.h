//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLLocationProviderAdapter
{
}

- (id)syncgetName;	// IMP=0x002000000044c73d
- (_Bool)syncgetIsSimulationEnabled;	// IMP=0x001000000044c71e
- (_Bool)syncgetLocationUnavailable;	// IMP=0x001000000044c700
- (void)fetchLocationWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000044c5c3
- (_Bool)syncgetLocationPrivate:(void *)arg1;	// IMP=0x001000000044c595
- (_Bool)syncgetLocation:(CDStruct_c17e8280 *)arg1;	// IMP=0x001000000044c567
- (_Bool)syncgetNotification:(const int *)arg1 data:(void *)arg2;	// IMP=0x001000000044c534
- (void)sendSimulatedLocationUnavailable;	// IMP=0x001000000044c516
- (void)sendSimulatedLocation:(id)arg1;	// IMP=0x001000000044c374
- (void)setSimulationEnabled:(_Bool)arg1;	// IMP=0x001000000044c31d
- (void)shutdown;	// IMP=0x001000000044c2e0
- (void)start;	// IMP=0x001000000044c2a0
- (void)register:(byref id)arg1 forNotification:(int)arg2 distanceFilter:(double)arg3;	// IMP=0x001000000044c05c
- (void)updateNotification:(int)arg1 withRegistrationInfo:(id)arg2 forClient:(byref id)arg3;	// IMP=0x001000000044be3b
- (void *)locationProvider;	// IMP=0x001000000044be08

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

