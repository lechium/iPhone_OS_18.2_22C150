//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEORouteHypothesizer, geo_isolater;

__attribute__((visibility("hidden")))
@interface GEORouteHypothesizerDelayer : NSObject
{
    struct __CFBinaryHeap *_minHeap;	// 8 = 0x8
    GEORouteHypothesizer *_nextHypothesizer;	// 16 = 0x10
    geo_isolater *_isolater;	// 24 = 0x18
}

+ (void)checkin;	// IMP=0x006000000070dbf9
- (void).cxx_destruct;	// IMP=0x000000000070dfd8
- (void)dealloc;	// IMP=0x000000000070df9e
- (void)delayStartOfHypothesizer:(id)arg1;	// IMP=0x000000000070deb2
- (void)_setNextHypothesizer:(id)arg1;	// IMP=0x000000000070deac
- (id)init;	// IMP=0x000000000070dbff

@end
