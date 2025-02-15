//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FBWorkspaceServiceDispatchingQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_targetQueue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000025b30
- (void)performAsync:(CDUnknownBlockType)arg1 withHandoff:(id)arg2;	// IMP=0x0000000000025a8e
- (void)performAsync:(CDUnknownBlockType)arg1;	// IMP=0x00000000000259f6
- (id)backingQueueIfExists;	// IMP=0x00000000000259ee
- (void)assertBarrierOnQueue;	// IMP=0x00000000000259e4
- (id)_initWithTargetQueue:(id)arg1;	// IMP=0x00000000000258f8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

