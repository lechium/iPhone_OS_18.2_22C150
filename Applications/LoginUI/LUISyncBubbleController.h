//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface LUISyncBubbleController : NSObject
{
    int _currentBubbleUID;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_syncBubbleQueue;	// 16 = 0x10
    CDUnknownBlockType _completionHandler;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000001ebd7
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) int currentBubbleUID; // @synthesize currentBubbleUID=_currentBubbleUID;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *syncBubbleQueue; // @synthesize syncBubbleQueue=_syncBubbleQueue;
- (void)_queue_terminateBubbleForID:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001e98a
- (void)waitUntilSyncBubbleIsTerminatedForUser:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001e978
- (void)scheduleSyncBubbleTerminationForUser:(id)arg1;	// IMP=0x001000000001e972
- (id)init;	// IMP=0x001000000001e91a

@end

