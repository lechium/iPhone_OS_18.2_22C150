//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface QLTAnalyticsManager : NSObject
{
}

+ (id)sharedManager;	// IMP=0x008000000000e654
- (void)sendCacheSizeEventWithCacheSize:(unsigned long long)arg1;	// IMP=0x000000000000e6a9
- (void)_sendEvent:(id)arg1;	// IMP=0x000000000000e410
- (id)_eventsQueue;	// IMP=0x000000000000e363

@end
