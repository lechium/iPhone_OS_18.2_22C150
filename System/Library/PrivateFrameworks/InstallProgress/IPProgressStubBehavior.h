//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IPXPCEventSubscriptionBlackhole, NSString;
@protocol IPProgressServerBehaviorDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface IPProgressStubBehavior : NSObject
{
    IPXPCEventSubscriptionBlackhole *_streamBlackhole;	// 8 = 0x8
    id <IPProgressServerBehaviorDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000100db
@property(nonatomic) __weak id <IPProgressServerBehaviorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)identityWasUninstalled:(id)arg1;	// IMP=0x00000000000100ae
- (void)progressForIdentity:(id)arg1 finishedWithState:(unsigned long long)arg2;	// IMP=0x00000000000100a8
- (void)progressForIdentity:(id)arg1 changed:(id)arg2;	// IMP=0x00000000000100a2
- (void)progressForIdentityInitiated:(id)arg1;	// IMP=0x000000000001009c
- (void)resume;	// IMP=0x0000000000010025
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
- (id)initWithEventStreamName:(id)arg1;	// IMP=0x000000000000ff22

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
