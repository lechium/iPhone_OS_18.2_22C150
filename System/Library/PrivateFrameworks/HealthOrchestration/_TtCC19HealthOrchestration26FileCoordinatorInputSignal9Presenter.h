//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSOperationQueue, NSURL;

__attribute__((visibility("hidden")))
@interface _TtCC19HealthOrchestration26FileCoordinatorInputSignal9Presenter : NSObject
{
    MISSING_TYPE *observedURL;	// 0 = 0x0
    MISSING_TYPE *presentedItemOperationQueue;	// 688128 = 0xa8000
    MISSING_TYPE *signal;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x000000000001bb50
- (id)init;	// IMP=0x000000000001baf0
- (void)presentedItemDidChange;	// IMP=0x000000000001ba80
@property(nonatomic, readonly) NSOperationQueue *presentedItemOperationQueue; // @synthesize presentedItemOperationQueue;
@property(nonatomic, readonly) NSURL *presentedItemURL;

@end
