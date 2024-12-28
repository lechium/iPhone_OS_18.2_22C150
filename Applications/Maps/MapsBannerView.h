//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class BNBannerSource, BannerItem, MISSING_TYPE, MapsBannerContentView, NSString;
@protocol SBUISystemApertureAccessoryView;

@interface MapsBannerView : UIView
{
    MISSING_TYPE *_aperturePresentation;	// 8 = 0x8
    BNBannerSource *_target;	// 16 = 0x10
    BannerItem *_item;	// 24 = 0x18
    MapsBannerContentView *_contentView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000c76471
@property(readonly, nonatomic) MapsBannerContentView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) _Bool aperturePresentation; // @synthesize aperturePresentation=_aperturePresentation;
@property(readonly, nonatomic) BannerItem *item; // @synthesize item=_item;
@property(readonly, nonatomic) __weak BNBannerSource *target; // @synthesize target=_target;
@property(readonly, nonatomic) double bannerAccessoryViewTrailingInset;
@property(readonly, nonatomic) double bannerAccessoryViewLeadingInset;
- (id)initWithTarget:(id)arg1 item:(id)arg2 aperturePresentation:(_Bool)arg3;	// IMP=0x0010000000c75e86

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) UIView<SBUISystemApertureAccessoryView> *detachedMinimalView;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIView<SBUISystemApertureAccessoryView>",?,R,N

@property(nonatomic) _Bool expanded;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UIView<SBUISystemApertureAccessoryView> *leadingView;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIView<SBUISystemApertureAccessoryView>",?,R,N

@property(readonly, nonatomic) UIView<SBUISystemApertureAccessoryView> *minimalView;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIView<SBUISystemApertureAccessoryView>",?,R,N

@property(nonatomic) _Bool showsControls;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(readonly) Class superclass;
@property(readonly, nonatomic) UIView<SBUISystemApertureAccessoryView> *trailingView;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIView<SBUISystemApertureAccessoryView>",?,R,N


@end
