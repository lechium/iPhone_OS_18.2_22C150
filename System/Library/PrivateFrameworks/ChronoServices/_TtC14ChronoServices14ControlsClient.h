//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC14ChronoServices14ControlsClient : NSObject
{
    MISSING_TYPE *_calloutQueue;	// 8 = 0x8
    MISSING_TYPE *_queue;	// 16 = 0x10
    MISSING_TYPE *_queue_connection;	// 24 = 0x18
    MISSING_TYPE *_queue_controlHosts;	// 32 = 0x20
    MISSING_TYPE *_lock;	// 40 = 0x28
    MISSING_TYPE *_lock_subscriptions;	// 48 = 0x30
    MISSING_TYPE *_lock_sandboxExtensions;	// 56 = 0x38
    MISSING_TYPE *_lock_environmentData;	// 64 = 0x40
    MISSING_TYPE *_calloutQueue_liveControlsDidChangePublisher;	// 80 = 0x50
    MISSING_TYPE *$__lazy_storage_$_liveControlsDidChangePublisher;	// 88 = 0x58
    MISSING_TYPE *_calloutQueue_previewControlsDidChangePublisher;	// 96 = 0x60
    MISSING_TYPE *$__lazy_storage_$_previewControlsDidChangePublisher;	// 104 = 0x68
    MISSING_TYPE *handleSystemEnvironmentDidChange;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00000000000b9860
- (id)init;	// IMP=0x00000000000b0140
- (void)previewControlsDidChange:(id)arg1;	// IMP=0x00000000000ba9c0
- (void)liveControlsDidChange:(id)arg1;	// IMP=0x00000000000ba530
- (void)systemEnvironmentDidChange:(id)arg1;	// IMP=0x00000000000ba4f0

@end

