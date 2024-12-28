//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFPreferences, NSString;
@protocol OS_dispatch_queue;

@interface ADOnDemandAssetSubscriber : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    AFPreferences *_preferences;	// 16 = 0x10
    CDUnknownBlockType _invalidationHandler;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000d893d
- (void)requestLifecycleObserver:(id)arg1 requestWasCancelledWithInfo:(id)arg2 forReason:(long long)arg3 origin:(long long)arg4 client:(id)arg5 successorInfo:(id)arg6;	// IMP=0x00100000000d8937
- (void)requestLifecycleObserver:(id)arg1 requestDidEndWithInfo:(id)arg2 origin:(long long)arg3 client:(id)arg4;	// IMP=0x00100000000d8931
- (void)_invalidate;	// IMP=0x00100000000d88b5
- (void)requestLifecycleObserver:(id)arg1 requestWillBeginWithInfo:(id)arg2 origin:(long long)arg3 client:(id)arg4;	// IMP=0x00100000000d87c0
- (void)_setupIfNecessary;	// IMP=0x00100000000d873d
- (id)initWithPreferences:(id)arg1 invalidationHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d863a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
