//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableDictionary, NSMutableSet, NSString, _UIAsyncInvocation;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _UIViewServiceDeputyManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    _UIAsyncInvocation *_invalidationInvocation;	// 16 = 0x10
    NSMutableDictionary *_connectionHandlers;	// 24 = 0x18
    NSLock *_connectionHandlersLock;	// 32 = 0x20
    NSMutableSet *_deputies;	// 40 = 0x28
    id _delegate;	// 48 = 0x30
}

+ (id)exportedInterfaceSupportingDeputyInterfaces:(id)arg1;	// IMP=0x00100000018eb2fd
+ (void)initialize;	// IMP=0x00100000018eade9
@property id delegate; // @synthesize delegate=_delegate;
- (void)viewControllerOperator:(id)arg1 didCreateServiceViewControllerOfClass:(Class)arg2;	// IMP=0x00000000018ec0c1
- (void)checkDeputyForRotation:(id)arg1;	// IMP=0x00000000018ebe27
- (void)unregisterDeputyClass:(Class)arg1;	// IMP=0x00000000018ebcb4
- (void)registerDeputyClass:(Class)arg1 withConnectionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000018ebaf4
- (void)forwardInvocation:(id)arg1;	// IMP=0x00000000018eba4c
- (void)__requestConnectionToDeputyOfClass:(Class)arg1 fromHostObject:(byref id)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000018eb82e
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x00000000018eb7e5
- (void)__prototype_requestConnectionToDeputyFromHostObject:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000018eb7df
- (Class)_deputyClassForConnectionSelector:(SEL)arg1;	// IMP=0x00000000018eb63a
- (void)_invalidateUnconditionallyThen:(CDUnknownBlockType)arg1;	// IMP=0x00000000018eb053
- (void)invalidate;	// IMP=0x00000000018eb03d
- (void)dealloc;	// IMP=0x00000000018eafc5
- (id)init;	// IMP=0x00000000018eae90
- (void)_objc_initiateDealloc;	// IMP=0x00000000018eae18

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
