//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNTransportButton, UIColor, UIImageView, UIView;

__attribute__((visibility("hidden")))
@interface CNPropertySimpleTransportCell
{
    CNTransportButton *_transportIcon1;	// 24 = 0x18
    CNTransportButton *_transportIcon2;	// 32 = 0x20
    CNTransportButton *_transportIcon3;	// 40 = 0x28
    UIImageView *_starView;	// 48 = 0x30
    _Bool _allowsActions;	// 56 = 0x38
    _Bool _shouldShowBadge;	// 57 = 0x39
    _Bool _shouldShowTransportButtons;	// 58 = 0x3a
    _Bool _needsUpdateTouchAreas;	// 59 = 0x3b
    UIImageView *_standardStarView;	// 64 = 0x40
    UIColor *_actionsColor;	// 72 = 0x48
    UIView *_badgeView;	// 80 = 0x50
}

+ (id)standardStarView;	// IMP=0x00600000002c98bc
+ (void)_updateStarImageForView:(id)arg1;	// IMP=0x00600000002c980f
- (void).cxx_destruct;	// IMP=0x00000000002c9688
@property(nonatomic) _Bool needsUpdateTouchAreas; // @synthesize needsUpdateTouchAreas=_needsUpdateTouchAreas;
@property(retain, nonatomic) UIView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) UIColor *actionsColor; // @synthesize actionsColor=_actionsColor;
@property(readonly, nonatomic) UIImageView *standardStarView; // @synthesize standardStarView=_standardStarView;
@property(nonatomic) _Bool shouldShowTransportButtons; // @synthesize shouldShowTransportButtons=_shouldShowTransportButtons;
@property(nonatomic) _Bool shouldShowBadge; // @synthesize shouldShowBadge=_shouldShowBadge;
@property(nonatomic) _Bool allowsActions; // @synthesize allowsActions=_allowsActions;
- (void)transportButtonClicked:(id)arg1;	// IMP=0x00000000002c9460
- (_Bool)shouldPerformDefaultAction;	// IMP=0x00000000002c9417
- (id)variableConstraints;	// IMP=0x00000000002c8962
- (id)rightMostView;	// IMP=0x00000000002c88ad
- (void)updateStarIcon;	// IMP=0x00000000002c8770
- (void)updateTransportButtons;	// IMP=0x00000000002c85f9
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000002c84f1
- (void)updateWithPropertyItem:(id)arg1;	// IMP=0x00000000002c849b
- (void)setCardGroupItem:(id)arg1;	// IMP=0x00000000002c833c
- (void)updateLabelNeedingHuggingContent;	// IMP=0x00000000002c82f5
@property(readonly, nonatomic) _Bool shouldShowStar;
@property(readonly, nonatomic) UIView *standardBadgeView;
@property(readonly, nonatomic) CNTransportButton *transportIcon3;
@property(readonly, nonatomic) CNTransportButton *transportIcon2;
@property(readonly, nonatomic) CNTransportButton *transportIcon1;
@property(readonly, nonatomic) CNTransportButton *standardTransportIcon;
- (void)layoutSubviews;	// IMP=0x00000000002c7d3d
- (void)_contentSizeCategoryDidChange:(id)arg1;	// IMP=0x00000000002c7c22
- (void)prepareForReuse;	// IMP=0x00000000002c7be2
- (void)dealloc;	// IMP=0x00000000002c7b6d
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000002c7ad3

@end
