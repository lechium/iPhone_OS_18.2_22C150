//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MUHairlineView, MURatingsCallToActionViewModel, MUScrollableStackView, NSArray, NSString;
@protocol MUPlaceRibbonViewDelegate, MUScrollAnalyticActionObserving;

__attribute__((visibility("hidden")))
@interface MUPlaceRibbonView : UIView
{
    MUScrollableStackView *_contentStackView;	// 8 = 0x8
    MURatingsCallToActionViewModel *_callToActionViewModel;	// 16 = 0x10
    struct CGPoint _beginAnalyticsScrollingPoint;	// 24 = 0x18
    MUHairlineView *_topHairline;	// 40 = 0x28
    MUHairlineView *_bottomHairline;	// 48 = 0x30
    id <MUScrollAnalyticActionObserving> _analyticsDelegate;	// 56 = 0x38
    id <MUPlaceRibbonViewDelegate> _delegate;	// 64 = 0x40
    NSArray *_viewModels;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000121d04
@property(retain, nonatomic) NSArray *viewModels; // @synthesize viewModels=_viewModels;
@property(nonatomic) __weak id <MUPlaceRibbonViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <MUScrollAnalyticActionObserving> analyticsDelegate; // @synthesize analyticsDelegate=_analyticsDelegate;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x0000000000121c24
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x0000000000121bf1
- (void)reloadVisibility;	// IMP=0x000000000012185d
- (id)_visibleRibbonItemViews;	// IMP=0x00000000001217b2
@property(readonly, nonatomic) _Bool hasContent;
- (void)_updateAppearance;	// IMP=0x00000000001212df
@property(readonly, nonatomic) _Bool showTopAndBottomSeparators;
- (void)layoutSubviews;	// IMP=0x0000000000120fd3
- (void)_setupStackView;	// IMP=0x0000000000120b89
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000120b2c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
