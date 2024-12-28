//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HAP2LoggingObject.h"

@class HAP2Lock, NSOperation, NSOperationQueue, NSString;

__attribute__((visibility("hidden")))
@interface HAP2SerializedOperationQueue : HAP2LoggingObject
{
    NSOperation *_lastOperation;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    HAP2Lock *_lock;	// 24 = 0x18
    NSOperationQueue *_queue;	// 32 = 0x20
}

+ (id)commonOperationQueue;	// IMP=0x004000000012ae1a
- (void).cxx_destruct;	// IMP=0x000000000012abe6
@property(readonly, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) HAP2Lock *lock; // @synthesize lock=_lock;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)_swapLastOperation:(id)arg1;	// IMP=0x000000000012aa6e
- (void)assertCurrentQueue;	// IMP=0x000000000012aa68
- (void)addConcurrentBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000012a9ff
- (void)addConcurrentOperation:(id)arg1;	// IMP=0x000000000012a996
- (void)addBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000012a943
- (void)addOperation:(id)arg1;	// IMP=0x000000000012a4d3
@property(nonatomic) __weak NSOperation *lastOperation; // @synthesize lastOperation=_lastOperation;
- (id)initWithName:(id)arg1 operationQueue:(id)arg2;	// IMP=0x000000000012a321
- (id)initWithName:(id)arg1;	// IMP=0x000000000012a2ab
- (id)init;	// IMP=0x000000000012a262

@end
