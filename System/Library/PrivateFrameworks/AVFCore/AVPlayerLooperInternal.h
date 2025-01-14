//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVPlayerItem, AVQueuePlayer, AVWeakReference, NSError, NSMutableArray;
@protocol AVCallbackCancellation, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVPlayerLooperInternal : NSObject
{
    AVQueuePlayer *loopingPlayer;	// 8 = 0x8
    AVPlayerItem *loopingItem;	// 16 = 0x10
    NSMutableArray *loopingItemCopies;	// 24 = 0x18
    CDStruct_e83c9415 loopRange;	// 32 = 0x20
    long long loopCount;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *ivarAccessQueue;	// 88 = 0x58
    long long playerOriginalActionAtItemEnd;	// 96 = 0x60
    CDStruct_1b6d18a9 forwardPlaybackStartTime;	// 104 = 0x68
    AVPlayerItem *lastEnqueuedLoopingItem;	// 128 = 0x80
    _Bool waitingForLastLoopingCopyToFinish;	// 136 = 0x88
    long long status;	// 144 = 0x90
    NSError *error;	// 152 = 0x98
    id <AVCallbackCancellation> playerCurrentItemKVOInvoker;	// 160 = 0xa0
    NSMutableArray *loopingItemStatusKVOInvokers;	// 168 = 0xa8
    AVWeakReference *weakReference;	// 176 = 0xb0
    _Bool existingItemsPrecede;	// 184 = 0xb8
    _Bool listeningForItemFailedToPlayToEndTime;	// 185 = 0xb9
}

@end

