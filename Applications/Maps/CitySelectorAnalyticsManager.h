//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface CitySelectorAnalyticsManager : NSObject
{
    struct CitySelectorEvent event;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_utilityQueue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000c44a78
- (void)cleanUp;	// IMP=0x0010000000c44a6b
- (void)logEvent;	// IMP=0x0010000000c44a46
- (void)citySelectorRevealed;	// IMP=0x0010000000c4493c
- (id)init;	// IMP=0x0010000000c448d2

@end
