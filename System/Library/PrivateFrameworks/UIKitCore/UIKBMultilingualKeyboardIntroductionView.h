//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class TUIPredictionView, UIButton, UIKBMultilingualIntroductionArrowView, UIKeyboardInputMode, UILabel, UIMultiscriptCandidateView, _UIBackdropView;

__attribute__((visibility("hidden")))
@interface UIKBMultilingualKeyboardIntroductionView : UIView
{
    UIKeyboardInputMode *_inputMode;	// 8 = 0x8
    _UIBackdropView *_backdropView;	// 16 = 0x10
    UILabel *_titleLabel;	// 24 = 0x18
    UILabel *_descriptionLabel;	// 32 = 0x20
    UIButton *_continueButton;	// 40 = 0x28
    UIKBMultilingualIntroductionArrowView *_arrowView;	// 48 = 0x30
    UIView *_highlight;	// 56 = 0x38
    UIMultiscriptCandidateView *_multiscriptCandidateView;	// 64 = 0x40
    UIView *_artworkView;	// 72 = 0x48
    TUIPredictionView *_predictionView;	// 80 = 0x50
}

+ (id)displayArtwork:(id)arg1;	// IMP=0x00600000012d9ac9
+ (id)displayDescription:(id)arg1;	// IMP=0x00600000012d9885
+ (id)displayTitle:(id)arg1;	// IMP=0x00600000012d96ed
+ (_Bool)shouldShowIntroductionForInputMode:(id)arg1;	// IMP=0x00600000012d94c6
- (void).cxx_destruct;	// IMP=0x00000000012dd83a
@property(retain, nonatomic) TUIPredictionView *predictionView; // @synthesize predictionView=_predictionView;
@property(retain, nonatomic) UIView *artworkView; // @synthesize artworkView=_artworkView;
@property(retain, nonatomic) UIMultiscriptCandidateView *multiscriptCandidateView; // @synthesize multiscriptCandidateView=_multiscriptCandidateView;
@property(retain, nonatomic) UIView *highlight; // @synthesize highlight=_highlight;
@property(retain, nonatomic) UIKBMultilingualIntroductionArrowView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) UIButton *continueButton; // @synthesize continueButton=_continueButton;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) _UIBackdropView *backdropView; // @synthesize backdropView=_backdropView;
@property(retain, nonatomic) UIKeyboardInputMode *inputMode; // @synthesize inputMode=_inputMode;
- (void)_updateContainer;	// IMP=0x00000000012dd12e
- (void)_updatePath;	// IMP=0x00000000012dce5a
- (void)continueButtonTapped;	// IMP=0x00000000012dce16
- (long long)backdropStyleForRenderConfig:(id)arg1;	// IMP=0x00000000012dce01
- (void)layoutSubviews;	// IMP=0x00000000012dcbe1
- (id)initWithInputMode:(id)arg1 frame:(struct CGRect)arg2;	// IMP=0x00000000012d9f33

@end
