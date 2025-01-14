//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, NSString;
@protocol OS_dispatch_source;

@interface NDChronoKitExtension
{
    NSObject<OS_dispatch_source> *_delayTimer;	// 40 = 0x28
}

+ (id)requestDelayQueue;	// IMP=0x0020000000051b00
- (void).cxx_destruct;	// IMP=0x002000000005191b
- (void)extensionWasRemovedFromScreen:(id)arg1;	// IMP=0x00100000000518e5
- (void)removeObserver:(id)arg1;	// IMP=0x00100000000517a3
- (void)addObserver:(id)arg1;	// IMP=0x0010000000051574
- (_Bool)isHandlingBackgroundURLSessionWithIdentifier:(id)arg1 withSessionUUID:(id)arg2;	// IMP=0x00100000000514b3
- (_Bool)backgroundUpdatesEnabled;	// IMP=0x00100000000514ab
- (_Bool)canBeSuspended;	// IMP=0x00100000000514a3
- (_Bool)shouldElevateDiscretionaryPriority;	// IMP=0x001000000005149b
- (_Bool)wakeForSessionIdentifier:(id)arg1 withSessionUUID:(id)arg2 wakeRequirement:(long long)arg3;	// IMP=0x001000000005136e
- (_Bool)supportsWakes;	// IMP=0x0010000000051366
- (id)containerURL;	// IMP=0x00100000000512f2
- (void)_onqueue_resetRequestDelay;	// IMP=0x001000000005129c
- (void)setupDelayTimer;	// IMP=0x00100000000511c5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

