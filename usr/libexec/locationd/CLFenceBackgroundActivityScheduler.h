//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface CLFenceBackgroundActivityScheduler : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    CDUnknownBlockType _registeredBlock;	// 16 = 0x10
}

@property(copy, nonatomic) CDUnknownBlockType registeredBlock; // @synthesize registeredBlock=_registeredBlock;
- (void)handleBackgroundTask:(id)arg1;	// IMP=0x0010000000879d64
- (void)scheduleBackgroundTask;	// IMP=0x00100000008796e5
- (void)registerDailyBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000879543
- (void)dealloc;	// IMP=0x00100000008794f9
- (id)initWithQueue:(id)arg1;	// IMP=0x0010000000879499
- (id)init;	// IMP=0x001000000087946e

@end

