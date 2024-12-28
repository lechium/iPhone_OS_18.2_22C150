//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMFMessage, HMFTimer, NSString, NSUUID;
@protocol HMDMessageHandlerQueuedMessageDelegate;

__attribute__((visibility("hidden")))
@interface HMDMessageHandlerQueuedMessage : HMFObject
{
    id <HMDMessageHandlerQueuedMessageDelegate> _delegate;	// 8 = 0x8
    HMFMessage *_message;	// 16 = 0x10
    HMFTimer *_timer;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x0010000000675f2b
- (void).cxx_destruct;	// IMP=0x0000000000675eeb
@property(readonly) HMFTimer *timer; // @synthesize timer=_timer;
@property(readonly) HMFMessage *message; // @synthesize message=_message;
@property __weak id <HMDMessageHandlerQueuedMessageDelegate> delegate; // @synthesize delegate=_delegate;
- (id)logIdentifier;	// IMP=0x0000000000675e18
- (id)attributeDescriptions;	// IMP=0x0000000000675cfa
- (id)privateDescription;	// IMP=0x0000000000675ce8
- (void)timerDidFire:(id)arg1;	// IMP=0x0000000000675bb5
@property(readonly, copy) NSString *name;
@property(readonly, copy) NSUUID *identifier;
- (void)suspendTimer;	// IMP=0x0000000000675ad8
- (void)resumeTimer;	// IMP=0x0000000000675a9b
- (id)initWithMessage:(id)arg1 timeInterval:(double)arg2;	// IMP=0x00000000006759c8
- (id)initWithMessage:(id)arg1;	// IMP=0x00000000006759ae

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
