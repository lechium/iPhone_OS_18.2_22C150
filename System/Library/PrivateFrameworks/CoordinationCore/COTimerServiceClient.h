//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject;
@protocol OS_nw_activity, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface COTimerServiceClient
{
    int _clientLifetimeActivityCompletionReason;	// 8 = 0x8
    NSObject<OS_nw_activity> *_clientLifetimeActivity;	// 16 = 0x10
    NSObject<OS_xpc_object> *_clientLifetimeActivityMetrics;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000007d3d0
@property(nonatomic) int clientLifetimeActivityCompletionReason; // @synthesize clientLifetimeActivityCompletionReason=_clientLifetimeActivityCompletionReason;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *clientLifetimeActivityMetrics; // @synthesize clientLifetimeActivityMetrics=_clientLifetimeActivityMetrics;
@property(readonly, nonatomic) NSObject<OS_nw_activity> *clientLifetimeActivity; // @synthesize clientLifetimeActivity=_clientLifetimeActivity;
- (void)changeClientLifetimeActivityMetrics:(CDUnknownBlockType)arg1;	// IMP=0x000000000007d2ba
- (void)donateClientLifetimeActivityCompletionReason:(int)arg1;	// IMP=0x000000000007d21b
- (void)dealloc;	// IMP=0x000000000007d1ac
- (id)initWithConnection:(id)arg1;	// IMP=0x000000000007d083

@end

