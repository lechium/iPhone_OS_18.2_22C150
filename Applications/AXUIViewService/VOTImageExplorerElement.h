//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIAccessibilityElement.h>

@class AXMVisionFeature;

@interface VOTImageExplorerElement : UIAccessibilityElement
{
    _Bool _flippedYAxis;	// 8 = 0x8
    AXMVisionFeature *_feature;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000156ef
@property(nonatomic) _Bool flippedYAxis; // @synthesize flippedYAxis=_flippedYAxis;
@property(readonly, nonatomic) AXMVisionFeature *feature; // @synthesize feature=_feature;
- (id)_accessibilityScrollStatus;	// IMP=0x0010000000015635
- (struct CGRect)accessibilityFrame;	// IMP=0x00100000000154eb
- (_Bool)isAccessibilityElement;	// IMP=0x00100000000154e3
- (_Bool)_accessibilityShouldIncludeRemoteParentCustomActions;	// IMP=0x00100000000154db
- (unsigned int)_accessibilityMediaAnalysisOptions;	// IMP=0x00100000000154d3
- (id)initWithImageView:(id)arg1 forFeature:(id)arg2 hasFlippedYAxis:(_Bool)arg3;	// IMP=0x0010000000015440

@end
