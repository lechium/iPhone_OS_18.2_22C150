//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC21UserNotificationsCore11SyncService : NSObject
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *inboundMessaging;	// 24 = 0x18
    MISSING_TYPE *outboundMessaging;	// 40 = 0x28
    MISSING_TYPE *service;	// 56 = 0x38
    MISSING_TYPE *flushInterval;	// 72 = 0x48
    MISSING_TYPE *queue;	// 80 = 0x50
    MISSING_TYPE *queue_pendingDismissalPayloads;	// 88 = 0x58
    MISSING_TYPE *queue_pendingDismissalIDs;	// 96 = 0x60
    MISSING_TYPE *queue_pendingFeeds;	// 104 = 0x68
    MISSING_TYPE *queue_pendingSectionID;	// 112 = 0x70
    MISSING_TYPE *queue_pendingUniversalSectionID;	// 128 = 0x80
    MISSING_TYPE *queue_flushTimer;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x000000000014c030
- (void)dealloc;	// IMP=0x000000000014bfa0
- (id)init;	// IMP=0x000000000014bf00

@end
