//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC11SessionCoreP33_0305B71F931612257040B50ABDE1CB866Client : NSObject
{
    MISSING_TYPE *_target;	// 0 = 0x0
    MISSING_TYPE *pid;	// 0 = 0x0
    MISSING_TYPE *processIdentifier;	// 0 = 0x0
    MISSING_TYPE *hasActivityListenerEntitlement;	// 0 = 0x0
    MISSING_TYPE *hasRemoteActivityAccessorEntitlement;	// 0 = 0x0
    MISSING_TYPE *processManager;	// 0 = 0x0
    MISSING_TYPE *lock;	// 0 = 0x0
    MISSING_TYPE *delegate;	// 0 = 0x0
    MISSING_TYPE *_lock_subscriptionOptions;	// 0 = 0x0
    MISSING_TYPE *_lock_pendingChangeAck;	// 0 = 0x0
    MISSING_TYPE *_lock_bufferedChanges;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00000000000b9010
- (id)init;	// IMP=0x00000000000b8f90
- (id)activityDescriptorContentStatesWithError:(id *)arg1;	// IMP=0x00000000000bc130
- (id)subscribeWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000bbec0
- (id)activityDescriptorForIdentifier:(id)arg1;	// IMP=0x00000000000bbbe0
- (id)activityDescriptorsWithError:(id *)arg1;	// IMP=0x00000000000bb6a0
- (void)unsubscribe;	// IMP=0x00000000000bc1d0

@end

