//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NEKEnvironment, NSString, PSYServiceSyncSession, PSYSyncCoordinator;

@interface NEKSyncCoordinator : NSObject
{
    NEKEnvironment *_environment;	// 8 = 0x8
    struct os_unfair_lock_s _shadowLock;	// 16 = 0x10
    unsigned long long _syncRestrictionShadow;	// 24 = 0x18
    PSYServiceSyncSession *_session;	// 32 = 0x20
    PSYSyncCoordinator *_syncCoordinator;	// 40 = 0x28
}

+ (id)receivedReunionSyncNotificationString;	// IMP=0x0020000000029dd4
+ (id)receivedStartSyncNotificationString;	// IMP=0x0010000000029dc7
- (void).cxx_destruct;	// IMP=0x002000000002a38f
@property(retain, nonatomic) PSYSyncCoordinator *syncCoordinator; // @synthesize syncCoordinator=_syncCoordinator;
@property(retain, nonatomic) PSYServiceSyncSession *session; // @synthesize session=_session;
- (void)syncCoordinatorDidChangeSyncRestriction:(id)arg1;	// IMP=0x001000000002a26d
- (void)syncCoordinator:(id)arg1 didInvalidateSyncSession:(id)arg2;	// IMP=0x001000000002a1a6
- (void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2;	// IMP=0x0010000000029f9d
- (_Bool)okToPerformDeltaSync;	// IMP=0x0010000000029f3d
- (id)environment;	// IMP=0x0010000000029f27
- (id)initWithEnvironment:(id)arg1;	// IMP=0x0010000000029de1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
