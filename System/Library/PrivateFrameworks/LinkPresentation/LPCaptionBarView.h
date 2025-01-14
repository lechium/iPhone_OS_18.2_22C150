//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LPCaptionBarAccessoryView, LPCaptionBarButtonView, LPCaptionBarPresentationProperties, LPCaptionBarStyle, LPCollaborationFooterView, LPComponentView, LPInlineMediaPlaybackInformation, LPPlayButtonView, LPVerticalTextStackView, NSRegularExpression, NSString, UIVisualEffectView;
@protocol LPTextStyleable, LPTextStyleable><LPSubtitleButtonContainer;

__attribute__((visibility("hidden")))
@interface LPCaptionBarView
{
    LPCaptionBarStyle *_style;	// 8 = 0x8
    LPCaptionBarPresentationProperties *_presentationProperties;	// 16 = 0x10
    LPComponentView *_leftIconView;	// 24 = 0x18
    LPComponentView *_rightIconView;	// 32 = 0x20
    LPPlayButtonView *_playButton;	// 40 = 0x28
    LPCaptionBarAccessoryView *_leftAccessoryView;	// 48 = 0x30
    LPCaptionBarAccessoryView *_rightAccessoryView;	// 56 = 0x38
    LPCaptionBarButtonView *_buttonView;	// 64 = 0x40
    LPComponentView *_leftIconBadgeView;	// 72 = 0x48
    LPComponentView *_rightIconBadgeView;	// 80 = 0x50
    UIVisualEffectView *_blurEffectView;	// 88 = 0x58
    LPComponentView<LPTextStyleable> *_aboveTopCaptionView;	// 96 = 0x60
    LPComponentView<LPTextStyleable> *_topCaptionView;	// 104 = 0x68
    LPComponentView<LPTextStyleable><LPSubtitleButtonContainer> *_bottomCaptionView;	// 112 = 0x70
    LPComponentView<LPTextStyleable> *_belowBottomCaptionView;	// 120 = 0x78
    LPVerticalTextStackView *_textStackView;	// 128 = 0x80
    LPInlineMediaPlaybackInformation *_inlinePlaybackInformation;	// 136 = 0x88
    _Bool _hasEverBuilt;	// 144 = 0x90
    _Bool _useProgressSpinner;	// 145 = 0x91
    LPCollaborationFooterView *_collaborationFooterView;	// 152 = 0x98
    NSRegularExpression *_emphasizedTextExpression;	// 160 = 0xa0
    struct UIEdgeInsets _textSafeAreaInset;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x0000000000103cad
@property(copy, nonatomic) NSRegularExpression *emphasizedTextExpression; // @synthesize emphasizedTextExpression=_emphasizedTextExpression;
@property(retain, nonatomic) LPCollaborationFooterView *collaborationFooterView; // @synthesize collaborationFooterView=_collaborationFooterView;
@property(nonatomic) struct UIEdgeInsets textSafeAreaInset; // @synthesize textSafeAreaInset=_textSafeAreaInset;
@property(nonatomic) _Bool useProgressSpinner; // @synthesize useProgressSpinner=_useProgressSpinner;
- (id)layoutExclusionsForView:(id)arg1;	// IMP=0x0000000000103968
- (_Bool)hasIconViewEqualToComponentView:(id)arg1;	// IMP=0x0000000000103943
- (id)primaryIconView;	// IMP=0x000000000010391b
- (id)playable;	// IMP=0x00000000001038fe
- (id)subtitleButton;	// IMP=0x0000000000103829
- (id)button;	// IMP=0x00000000001037bd
- (void)updateTextStack;	// IMP=0x00000000001030aa
- (void)_buildViewsForCaptionBarIfNeeded;	// IMP=0x0000000000101b22
- (void)addSubview:(id)arg1;	// IMP=0x0000000000101a64
- (void)setPresentationProperties:(id)arg1;	// IMP=0x0000000000101a50
- (struct CGSize)_layoutCaptionBarForSize:(struct CGSize)arg1 applyingLayout:(_Bool)arg2;	// IMP=0x00000000000fd4fc
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000fd4e8
- (void)layoutComponentView;	// IMP=0x00000000000fd49a
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x00000000000fd3df
- (void)animateInWithBaseAnimation:(id)arg1 currentTime:(double)arg2;	// IMP=0x00000000000fd021
- (void)animateOut;	// IMP=0x00000000000fccf5
- (void)setPlaybackInformation:(id)arg1;	// IMP=0x00000000000fcc6b
- (id)initWithHost:(id)arg1 style:(id)arg2 presentationProperties:(id)arg3;	// IMP=0x00000000000fcab6
- (id)initWithHost:(id)arg1;	// IMP=0x00000000000fcaa8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

