//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class MISSING_TYPE, NSString;

@interface _TtC16HealthExperience21AsynchronousOperation : NSOperation
{
    MISSING_TYPE *_autoFinishesOnCancel;	// 8 = 0x8
    MISSING_TYPE *operationState;	// 16 = 0x10
    MISSING_TYPE *workLock;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001bc00
- (id)init;	// IMP=0x000000000001b9e0
@property(nonatomic, readonly) NSString *description;
- (void)main;	// IMP=0x000000000001b640
- (void)cancel;	// IMP=0x000000000001b520
- (void)start;	// IMP=0x000000000001b330
- (_Bool)isFinished;	// IMP=0x000000000001aef0
- (_Bool)isExecuting;	// IMP=0x000000000001ae30
- (_Bool)isCancelled;	// IMP=0x000000000001adf0
- (_Bool)isAsynchronous;	// IMP=0x000000000001ade0

// Remaining properties
@property(nonatomic, readonly) _Bool asynchronous;
@property(nonatomic, readonly) _Bool cancelled;
@property(nonatomic, readonly) _Bool executing;
@property(nonatomic, readonly) _Bool finished;

@end

