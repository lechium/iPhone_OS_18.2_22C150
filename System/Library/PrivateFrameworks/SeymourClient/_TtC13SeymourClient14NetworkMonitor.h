//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC13SeymourClient14NetworkMonitor : NSObject
{
    MISSING_TYPE *airplaneModeObserver;	// 8 = 0x8
    MISSING_TYPE *coreTelephonyObserver;	// 16 = 0x10
    MISSING_TYPE *queue;	// 24 = 0x18
    MISSING_TYPE *reachabilityObserver;	// 32 = 0x20
    MISSING_TYPE *wifiObserver;	// 40 = 0x28
    MISSING_TYPE *delegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000a6fe0
- (id)init;	// IMP=0x00000000000a6f80
- (void)airplaneModeChanged;	// IMP=0x00000000000a7110

@end
