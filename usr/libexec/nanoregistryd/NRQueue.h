//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface NRQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
}

+ (id)assetDownloadQueue;	// IMP=0x0040000000024a6c
+ (id)delayPairingRequestQueue;	// IMP=0x0010000000024977
+ (id)firstUnlockQueue;	// IMP=0x0010000000024882
+ (id)switchCompletionBlockQueue;	// IMP=0x00100000000247be
+ (id)nearbyWatchBulletinQueue;	// IMP=0x00100000000247b6
+ (id)xpcPairingQueue;	// IMP=0x00100000000246b0
+ (id)registryDaemonQueue;	// IMP=0x00100000000245ec
+ (id)newQueueWithLabel:(id)arg1 withTargetQueue:(id)arg2 withAttributes:(id)arg3;	// IMP=0x00100000000243f9
+ (id)serialQueueWithLabel:(id)arg1 withTargetQueue:(id)arg2;	// IMP=0x00100000000243dc
+ (id)newQueueWithLabel:(id)arg1 withAttributes:(id)arg2;	// IMP=0x00100000000243c5
+ (id)serialQueueWithLabel:(id)arg1;	// IMP=0x00100000000243a6
+ (id)globalQueueWithIdentifier:(long long)arg1;	// IMP=0x0010000000024325
+ (id)mainQueue;	// IMP=0x00100000000242c7
- (void).cxx_destruct;	// IMP=0x0020000000024c3b
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)resume;	// IMP=0x0010000000024c23
- (void)suspend;	// IMP=0x0010000000024c15
- (void)dispatchAfter:(double)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000024bb3
- (void)dispatchSync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000024b76
- (void)dispatchAsync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000024b5f
@property(readonly, nonatomic) NSString *label;
- (void)dealloc;	// IMP=0x0010000000024251
- (id)initWithDispatchQueue:(id)arg1;	// IMP=0x00100000000241e6

@end

