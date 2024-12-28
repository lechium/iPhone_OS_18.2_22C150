//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HMFObject.h"

@class NSDate, NSSet;

__attribute__((visibility("hidden")))
@interface HMFMemoryObservance : HMFObject
{
    double _debounceInterval;	// 8 = 0x8
    NSSet *_events;	// 16 = 0x10
    NSDate *_lastUpdateDate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000003d4f3
@property(copy) NSDate *lastUpdateDate; // @synthesize lastUpdateDate=_lastUpdateDate;
@property(readonly, copy) NSSet *events; // @synthesize events=_events;
@property(readonly) double debounceInterval; // @synthesize debounceInterval=_debounceInterval;
- (id)initWithDebounceInterval:(double)arg1 events:(id)arg2;	// IMP=0x000000000003d3c3

@end
