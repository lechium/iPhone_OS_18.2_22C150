//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC24SessionPushNotifications10PushServer : NSObject
{
    MISSING_TYPE *_eventPublisher;	// 8 = 0x8
    MISSING_TYPE *_tokenPublisher;	// 16 = 0x10
    MISSING_TYPE *_subscriptionExceedingReducedBudgetPublisher;	// 24 = 0x18
    MISSING_TYPE *_unsubscribedActivityPublisher;	// 32 = 0x20
    MISSING_TYPE *queue;	// 40 = 0x28
    MISSING_TYPE *calloutQueue;	// 48 = 0x30
    MISSING_TYPE *apsQueue;	// 56 = 0x38
    MISSING_TYPE *connections;	// 64 = 0x40
    MISSING_TYPE *connectionFactory;	// 72 = 0x48
    MISSING_TYPE *subscriptionStore;	// 112 = 0x70
    MISSING_TYPE *publicTokenStore;	// 152 = 0x98
    MISSING_TYPE *tokenStore;	// 192 = 0xc0
    MISSING_TYPE *budgetServer;	// 232 = 0xe8
    MISSING_TYPE *topicsByPriority;	// 280 = 0x118
    MISSING_TYPE *cancellableSubscriptions;	// 288 = 0x120
}

- (void).cxx_destruct;	// IMP=0x000000000003ab10
- (id)init;	// IMP=0x000000000003aab0

@end
