//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UIRoundedRectShadowView
{
    struct UIEdgeInsets _shadowOutsets;	// 16 = 0x10
    double _maskCornerRadius;	// 48 = 0x30
}

+ (struct UIEdgeInsets)_expansionInsetForShadowImage;	// IMP=0x0000000000d6d172
+ (_Bool)_shouldCutoutShadow;	// IMP=0x0000000000d6ca89
@property(readonly, nonatomic) double maskCornerRadius; // @synthesize maskCornerRadius=_maskCornerRadius;
- (void)_loadImageIfNecessary;	// IMP=0x0000000000d6cba5
- (void)_updateShadowOutsetsIfNecessary;	// IMP=0x0000000000d6cb34
- (void)layoutSubviews;	// IMP=0x0000000000d6caf3
- (struct CGRect)frameWithContentWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000d6ca91
- (id)initWithCornerRadius:(double)arg1;	// IMP=0x0000000000d6ca3f

@end
