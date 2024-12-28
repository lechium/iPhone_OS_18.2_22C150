//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APSConnection, NSString;
@protocol MAPushServiceConnectionDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MAPushServiceConnection : NSObject
{
    NSObject<OS_dispatch_queue> *_pushServiceQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_subscriptionRequestQueue;	// 16 = 0x10
    id <MAPushServiceConnectionDelegate> _delegate;	// 24 = 0x18
    APSConnection *_connection;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001c40f0
@property(readonly, nonatomic) APSConnection *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) id <MAPushServiceConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *subscriptionRequestQueue; // @synthesize subscriptionRequestQueue=_subscriptionRequestQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *pushServiceQueue; // @synthesize pushServiceQueue=_pushServiceQueue;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;	// IMP=0x00000000001c3f84
- (void)connection:(id)arg1 channelSubscriptionsFailedWithFailures:(id)arg2;	// IMP=0x00000000001c3c99
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x00000000001c3c93
- (unsigned long long)_subscribedChannelCount;	// IMP=0x00000000001c3c46
- (id)subscribedChannels;	// IMP=0x00000000001c3950
- (id)_publicChannelForPushChannel:(id)arg1;	// IMP=0x00000000001c37d7
- (void)_unsubscribeFromChannel:(id)arg1;	// IMP=0x00000000001c3702
- (void)unsubscribeFromChannel:(id)arg1;	// IMP=0x00000000001c362d
- (void)_subscribeToChannel:(id)arg1;	// IMP=0x00000000001c351e
- (void)subscribeToChannel:(id)arg1;	// IMP=0x00000000001c3449
- (id)_APSConnectionEnvironment;	// IMP=0x00000000001c33df
- (void)dealloc;	// IMP=0x00000000001c3372
- (id)initWithDelegate:(id)arg1;	// IMP=0x00000000001c3104

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
