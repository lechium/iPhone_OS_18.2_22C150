//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _HKActivityRingViewSizingDirective : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    double _width;	// 16 = 0x10
    double _outerRingOffset;	// 24 = 0x18
    double _ringThickness;	// 32 = 0x20
    double _ringInterspacing;	// 40 = 0x28
}

+ (id)sortedRingRatioDirectives;	// IMP=0x00600000000030aa
+ (id)activityRingSizingDirectiveWithIdentifier:(id)arg1 width:(double)arg2 outerRingOffset:(double)arg3 ringThickness:(double)arg4 ringInterspacing:(double)arg5;	// IMP=0x00600000000034da
- (void).cxx_destruct;	// IMP=0x0000000000003bfa
@property(nonatomic) double ringInterspacing; // @synthesize ringInterspacing=_ringInterspacing;
@property(nonatomic) double ringThickness; // @synthesize ringThickness=_ringThickness;
@property(nonatomic) double outerRingOffset; // @synthesize outerRingOffset=_outerRingOffset;
@property(nonatomic) double width; // @synthesize width=_width;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;	// IMP=0x0000000000003b0d

@end

