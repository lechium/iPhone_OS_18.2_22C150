//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_os_log;

__attribute__((visibility("hidden")))
@interface AEConcretePerformancePrimitivesInFlightInterval : NSObject
{
    _Bool _isEnded;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    unsigned long long _signpostID;	// 24 = 0x18
    NSObject<OS_os_log> *_log;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000db8f
- (void)endInterval;	// IMP=0x000000000000da94
- (void)dealloc;	// IMP=0x000000000000d994

@end

