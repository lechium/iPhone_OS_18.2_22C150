//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSArray;

@interface SSSCropOverlayView : UIView
{
    NSArray *_cornerViews;	// 8 = 0x8
    NSArray *_grabberViews;	// 16 = 0x10
    UIView *_containerView;	// 24 = 0x18
    NSArray *_lineViews;	// 32 = 0x20
    double _cornerGrabberAlpha;	// 40 = 0x28
    double _lineAlpha;	// 48 = 0x30
    double _lineGrabberAlpha;	// 56 = 0x38
}

+ (double)_outsetAmountForHandles;	// IMP=0x004000000003ce1d
- (void).cxx_destruct;	// IMP=0x002000000003df2f
@property(nonatomic) double lineGrabberAlpha; // @synthesize lineGrabberAlpha=_lineGrabberAlpha;
@property(nonatomic) double lineAlpha; // @synthesize lineAlpha=_lineAlpha;
@property(nonatomic) double cornerGrabberAlpha; // @synthesize cornerGrabberAlpha=_cornerGrabberAlpha;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x001000000003d89c
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x001000000003d671
- (id)_viewsToHitTest;	// IMP=0x001000000003d646
- (struct SSSCropOverlayGrabPosition)grabPositionForLocation:(struct CGPoint)arg1;	// IMP=0x001000000003d59f
- (void)layoutSubviews;	// IMP=0x001000000003d141
- (struct CGRect)_frameForGrabberAtEdge:(unsigned long long)arg1 inSize:(struct CGSize)arg2 dimension:(double)arg3;	// IMP=0x001000000003d044
- (struct CGRect)_frameForLineAtEdge:(unsigned long long)arg1 inSize:(struct CGSize)arg2 dimension:(double)arg3;	// IMP=0x001000000003cf28
- (struct CGRect)_frameForViewInCorner:(unsigned long long)arg1 inSize:(struct CGSize)arg2 cornerSize:(struct CGSize)arg3;	// IMP=0x001000000003ce36
- (id)_orderedRectEdges;	// IMP=0x001000000003ce10
- (id)_orderedRectCorners;	// IMP=0x001000000003ce03
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x001000000003cd9c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000003c67c

@end
