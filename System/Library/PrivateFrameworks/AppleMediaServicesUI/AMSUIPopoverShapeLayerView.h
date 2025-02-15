//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class AMSUIPopoverShapeLayerMaskView;

__attribute__((visibility("hidden")))
@interface AMSUIPopoverShapeLayerView : UIView
{
    _Bool _shapeLayerPathNeedsUpdate;	// 8 = 0x8
    _Bool _popoverBackgroundColorIsOpaque;	// 9 = 0x9
    _Bool _arrowVisible;	// 10 = 0xa
    _Bool _arrowOffsetWasFlipped;	// 11 = 0xb
    _Bool _arrowDirectionWasFlipped;	// 12 = 0xc
    unsigned long long _arrowDirection;	// 16 = 0x10
    double _arrowOffset;	// 24 = 0x18
    UIView *_viewToMaskWhenContentExtendsOverArrow;	// 32 = 0x20
    AMSUIPopoverShapeLayerMaskView *_shapeLayerMaskView;	// 40 = 0x28
}

+ (double)cornerRadius;	// IMP=0x00600000000794fc
+ (double)arrowBase;	// IMP=0x00600000000794ee
- (void).cxx_destruct;	// IMP=0x000000000007b3bd
@property(retain) AMSUIPopoverShapeLayerMaskView *shapeLayerMaskView; // @synthesize shapeLayerMaskView=_shapeLayerMaskView;
@property _Bool arrowDirectionWasFlipped; // @synthesize arrowDirectionWasFlipped=_arrowDirectionWasFlipped;
@property _Bool arrowOffsetWasFlipped; // @synthesize arrowOffsetWasFlipped=_arrowOffsetWasFlipped;
@property _Bool arrowVisible; // @synthesize arrowVisible=_arrowVisible;
@property _Bool popoverBackgroundColorIsOpaque; // @synthesize popoverBackgroundColorIsOpaque=_popoverBackgroundColorIsOpaque;
@property _Bool shapeLayerPathNeedsUpdate; // @synthesize shapeLayerPathNeedsUpdate=_shapeLayerPathNeedsUpdate;
@property(nonatomic) __weak UIView *viewToMaskWhenContentExtendsOverArrow; // @synthesize viewToMaskWhenContentExtendsOverArrow=_viewToMaskWhenContentExtendsOverArrow;
- (void)didMoveToWindow;	// IMP=0x000000000007b206
- (void)_loadNecessaryViews;	// IMP=0x000000000007b163
- (void)_updateShapeLayerPath;	// IMP=0x000000000007a91c
- (double)_leftAndRightStartYLocationForBounds:(struct CGRect)arg1;	// IMP=0x000000000007a81a
- (double)_upAndDownStartingXLocationForBounds:(struct CGRect)arg1;	// IMP=0x000000000007a71c
- (void)_addLeftRightArrowCurveForPath:(id)arg1 bounds:(struct CGRect)arg2 startPoint:(struct CGPoint)arg3 endPoint:(struct CGPoint)arg4 peakPoint:(struct CGPoint)arg5 isPinned:(_Bool)arg6;	// IMP=0x000000000007a4e1
- (void)_addTopBottomArrowCurveForPath:(id)arg1 bounds:(struct CGRect)arg2 startPoint:(struct CGPoint)arg3 endPoint:(struct CGPoint)arg4 peakPoint:(struct CGPoint)arg5 isPinned:(_Bool)arg6;	// IMP=0x000000000007a246
- (void)_addLeadingPinnedCurveToPath:(id)arg1 bounds:(struct CGRect)arg2 startPoint:(struct CGPoint)arg3 endPoint:(struct CGPoint)arg4;	// IMP=0x000000000007a139
- (void)_addLeadingPinnedCurveToPath:(id)arg1 bounds:(struct CGRect)arg2 startPoint:(struct CGPoint)arg3;	// IMP=0x000000000007a026
- (void)_addTopBottomRoundedRectWithGapForPath:(id)arg1 bounds:(struct CGRect)arg2;	// IMP=0x0000000000079de3
- (void)_addLeftRightRoundedRectWithGapForPath:(id)arg1 bounds:(struct CGRect)arg2;	// IMP=0x0000000000079b91
- (void)_addRoundedRectExcludingTopLeftCornerForPath:(id)arg1 bounds:(struct CGRect)arg2;	// IMP=0x00000000000799f8
@property double arrowOffset; // @synthesize arrowOffset=_arrowOffset;
- (void)setNeedsLayout;	// IMP=0x0000000000079931
@property unsigned long long arrowDirection; // @synthesize arrowDirection=_arrowDirection;
- (void)_updatePathAnimationState;	// IMP=0x0000000000079882
- (void)layoutSubviews;	// IMP=0x000000000007978b
- (_Bool)wouldPinForOffset:(double)arg1;	// IMP=0x0000000000079741
- (void)_updateShapeLayerPathIfNeeded;	// IMP=0x0000000000079712
- (id)_shadowPath;	// IMP=0x000000000007970a
- (struct CGSize)_shadowOffset;	// IMP=0x00000000000796f4
- (double)_shadowRadius;	// IMP=0x00000000000796eb
- (double)_shadowOpacity;	// IMP=0x00000000000796e2
- (struct UIEdgeInsets)_shadowInsets;	// IMP=0x00000000000796c4
- (double)maxNonPinnedOffset;	// IMP=0x000000000007962f
- (double)minNonPinnedOffset;	// IMP=0x0000000000079592
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000007950a
@property(readonly) double arrowHeight;

@end

