//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, RDClientInterestCache, RDDefaults, RDStateCache, SRAuthorizationStore;
@protocol OS_dispatch_queue;

@interface RDNotifier : NSObject
{
    NSObject<OS_dispatch_queue> *_q;	// 8 = 0x8
    RDDefaults *_defaults;	// 16 = 0x10
    RDStateCache *_stateCache;	// 24 = 0x18
    RDClientInterestCache *_clientInterestCache;	// 32 = 0x20
    SRAuthorizationStore *_authStore;	// 40 = 0x28
}

+ (void)initialize;	// IMP=0x0020000000023950
- (void)dealloc;	// IMP=0x0020000000023cc0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
