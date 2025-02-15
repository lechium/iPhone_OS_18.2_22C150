//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIColor, UIImage;

@interface SignStyle : NSObject
{
    _Bool _dimmed;	// 8 = 0x8
}

+ (CDStruct_a1deb1f2)_scaledMetricsForStyle:(unsigned int)arg1 baseMetrics:(CDStruct_a1deb1f2)arg2;	// IMP=0x0040000000884704
+ (CDStruct_a1deb1f2)_defaultJunctionArrowMetricsForStyle:(unsigned int)arg1;	// IMP=0x00100000008846a6
+ (CDStruct_a1deb1f2)_defaultArrowMetricsForStyle:(unsigned int)arg1;	// IMP=0x0010000000884648
+ (CDStruct_a1deb1f2)junctionArrowMetricsForStyle:(unsigned int)arg1;	// IMP=0x0010000000884629
+ (CDStruct_a1deb1f2)arrowMetricsForStyle:(unsigned int)arg1;	// IMP=0x001000000088460a
+ (CDStruct_a1deb1f2)_metricsForStyle:(unsigned int)arg1 scaledToMatchReferenceSize:(struct CGSize)arg2 contentScale:(double)arg3 baseMetrics:(CDStruct_a1deb1f2)arg4;	// IMP=0x00100000008845a8
+ (CDStruct_a1deb1f2)arrowMetricsForStyle:(unsigned int)arg1 scaledToMatchReferenceSize:(struct CGSize)arg2 contentScale:(double)arg3;	// IMP=0x0010000000884525
+ (CDStruct_a1deb1f2)junctionArrowMetricsForStyle:(unsigned int)arg1 scaledToMatchReferenceSize:(struct CGSize)arg2 contentScale:(double)arg3;	// IMP=0x00100000008844a2
+ (CDStruct_a1deb1f2)junctionArrowMetricsForStyle:(unsigned int)arg1 scaledToMatchReferenceSize:(struct CGSize)arg2 forView:(id)arg3;	// IMP=0x001000000088437e
+ (CDStruct_a1deb1f2)arrowMetricsForStyle:(unsigned int)arg1 scaledToMatchReferenceSize:(struct CGSize)arg2 forView:(id)arg3;	// IMP=0x001000000088425a
+ (id)sharedSignStyle;	// IMP=0x0010000000884114
@property(readonly, nonatomic, getter=isDimmed) _Bool dimmed; // @synthesize dimmed=_dimmed;
@property(readonly, nonatomic) UIColor *accentColor;
@property(readonly, nonatomic) UIColor *foregroundColor;
- (id)dimmedForegroundColor;	// IMP=0x00100000008841a1
@property(readonly, nonatomic) UIImage *squareSignImage;

@end

