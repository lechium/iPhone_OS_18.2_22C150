//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SKPaymentQueueClient;
@protocol SKRequestDelegate;

__attribute__((visibility("hidden")))
@interface SKRequestInternal : NSObject
{
    long long _backgroundTaskIdentifier;	// 8 = 0x8
    SKPaymentQueueClient *_client;	// 16 = 0x10
    id <SKRequestDelegate> _delegate;	// 24 = 0x18
    long long _state;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000016f64
- (void)dealloc;	// IMP=0x0000000000016ed6
- (id)init;	// IMP=0x0000000000016e94

@end
