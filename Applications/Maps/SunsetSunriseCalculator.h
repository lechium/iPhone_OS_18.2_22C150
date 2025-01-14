//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOAlmanac;

@interface SunsetSunriseCalculator : NSObject
{
    GEOAlmanac *_almanac;	// 8 = 0x8
}

+ (id)sharedCalculator;	// IMP=0x0020000000c96bfd
- (void).cxx_destruct;	// IMP=0x0020000000c970f2
@property(readonly, nonatomic) GEOAlmanac *almanac; // @synthesize almanac=_almanac;
- (id)_sunriseForLocation:(id)arg1;	// IMP=0x0010000000c96fe5
- (id)_sunsetForLocation:(id)arg1;	// IMP=0x0010000000c96ee2
- (long long)currentStateForLocation:(id)arg1 offsetThreshold:(double)arg2;	// IMP=0x0010000000c96ca8
- (id)init;	// IMP=0x0010000000c96c52

@end

