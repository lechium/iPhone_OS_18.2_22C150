//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray;

@interface _TtC8MapsSync23MapsSyncStoreController : NSObject
{
    MISSING_TYPE *storeSubscriptionTypes;	// 8 = 0x8
    MISSING_TYPE *_store;	// 16 = 0x10
    MISSING_TYPE *_delegate;	// 24 = 0x18
    MISSING_TYPE *_callbackQueue;	// 32 = 0x20
    MISSING_TYPE *_barrierQueue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000080de0
- (id)init;	// IMP=0x0000000000080d80
- (void)storeDidChangeWithTypes:(id)arg1;	// IMP=0x0000000000080ce0
- (id)initWithNotifyForChanges:(id)arg1 delegate:(id)arg2;	// IMP=0x00000000000807d0
- (id)initWithConfig:(id)arg1 notifyForChanges:(id)arg2 callbackQueue:(id)arg3 delegate:(id)arg4;	// IMP=0x0000000000080620
@property(nonatomic, copy) NSArray *storeSubscriptionTypes;

@end

