//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HKNumericAxis.h"

@class HKDisplayType, NSArray;

__attribute__((visibility("hidden")))
@interface HKAppleWalkingSteadinessAxis : HKNumericAxis
{
    NSArray *_cachedAxisLabels;	// 8 = 0x8
    HKDisplayType *_displayType;	// 16 = 0x10
}

+ (id)standardAxisWithDisplayType:(id)arg1;	// IMP=0x00600000002b6572
- (void).cxx_destruct;	// IMP=0x00000000002b6d97
@property(retain, nonatomic) HKDisplayType *displayType; // @synthesize displayType=_displayType;
@property(retain, nonatomic) NSArray *cachedAxisLabels; // @synthesize cachedAxisLabels=_cachedAxisLabels;
- (id)_axisLabelsForClassificationsWithDisplayType:(id)arg1;	// IMP=0x00000000002b6894
- (struct CGPoint)renderPositionForLabelLocation:(id)arg1 rect:(struct CGRect)arg2 zoomScale:(double)arg3 contentOffset:(struct CGPoint)arg4 constantOffset:(double)arg5 isHorizontal:(_Bool)arg6 optionalOffset:(struct CGPoint)arg7;	// IMP=0x00000000002b6854
- (id)findAxisLabelsInModelRange:(id)arg1 zoomScale:(double)arg2;	// IMP=0x00000000002b66e7
- (id)initWithDisplayType:(id)arg1;	// IMP=0x00000000002b65bf

@end

