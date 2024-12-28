//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CoordinatorPromiseProvider, CoordinatorPromiseSpecification, IXOwnedDataPromise, NSString;
@protocol AssetDataConsumer, CoordinatorPromiseDataConsumerDelegate, OS_dispatch_queue;

@interface CoordinatorPromiseDataConsumer : NSObject
{
    IXOwnedDataPromise *_dataPromise;	// 8 = 0x8
    id <CoordinatorPromiseDataConsumerDelegate> _delegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    CoordinatorPromiseProvider *_promiseProvider;	// 32 = 0x20
    CoordinatorPromiseSpecification *_specification;	// 40 = 0x28
    id <AssetDataConsumer> _streamAdapter;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000000c48e3
@property(readonly, copy) NSString *description;
- (void)truncateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000c461b
- (void)suspendWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000c4526
- (void)resetWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000c4211
- (void)prepareWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000c3f90
- (void)finishWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000c3e9b
- (void)consumeData:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000c3d6a
- (void)consumeData:(id)arg1 andWaitWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000c3c39

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
