//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface OspreyDeferredObject : NSObject
{
    id _promised;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_deferralQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_fulfillmentQueue;	// 24 = 0x18
    NSObject<OS_dispatch_group> *_fulfillmentGroup;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000043d6
- (void)fulfilledWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000042f8
- (void)fulfill:(id)arg1;	// IMP=0x000000000000423e
- (id)initWithFulfillmentQueue:(id)arg1;	// IMP=0x0000000000004118

@end

