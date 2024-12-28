//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class CALayer, CAShapeLayer, UIBezierPath;

__attribute__((visibility("hidden")))
@interface _UITextHighlightBackgroundView : UIView
{
    UIBezierPath *_visiblePath;	// 8 = 0x8
    CALayer *_shadowLayer;	// 16 = 0x10
    CAShapeLayer *_highlightLayer;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000094823c
@property(readonly, nonatomic) CAShapeLayer *highlightLayer; // @synthesize highlightLayer=_highlightLayer;
@property(readonly, nonatomic) CALayer *shadowLayer; // @synthesize shadowLayer=_shadowLayer;
@property(copy, nonatomic) UIBezierPath *visiblePath; // @synthesize visiblePath=_visiblePath;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000947fa4

@end
