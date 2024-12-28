//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CABackdropLayer, CAGradientLayer, CPSButton, CPSVibrantLabel, NSString, UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface CPSClipLoadingView : UIView
{
    UIView *_backdropView;	// 8 = 0x8
    CABackdropLayer *_backdropLayer;	// 16 = 0x10
    UIView *_clipNameBackdropView;	// 24 = 0x18
    UIView *_clipNameContainerView;	// 32 = 0x20
    UILabel *_clipNameLabel;	// 40 = 0x28
    UIView *_clipNameProgressView;	// 48 = 0x30
    UIView *_errorContainerView;	// 56 = 0x38
    CPSVibrantLabel *_clipUnavailableLabel;	// 64 = 0x40
    CPSButton *_retryButton;	// 72 = 0x48
    CDUnknownBlockType _reloadHandler;	// 80 = 0x50
    CDUnknownBlockType _deferredActions;	// 88 = 0x58
    UIImageView *_heroImageView;	// 96 = 0x60
    UIView *_labelContainerView;	// 104 = 0x68
    _Bool _labelsNeedUpdate;	// 112 = 0x70
    _Bool _animationHasStarted;	// 113 = 0x71
    _Bool _loadingHasFailed;	// 114 = 0x72
    long long _progressChangeAnimationCount;	// 120 = 0x78
    UILabel *_poweredByLabel;	// 128 = 0x80
    CAGradientLayer *_gradientLayer;	// 136 = 0x88
    UIView *_gradientView;	// 144 = 0x90
    _Bool _poweredByThirdParty;	// 152 = 0x98
    float _loadingProgress;	// 156 = 0x9c
    NSString *_name;	// 160 = 0xa0
    NSString *_provider;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x000000000001ffe3
@property(readonly, nonatomic) float loadingProgress; // @synthesize loadingProgress=_loadingProgress;
@property(nonatomic, getter=isPoweredByThirdParty) _Bool poweredByThirdParty; // @synthesize poweredByThirdParty=_poweredByThirdParty;
@property(copy, nonatomic) NSString *provider; // @synthesize provider=_provider;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)_textScaleUpSpringAnimation;	// IMP=0x000000000001fefe
- (id)_backdropEffectRemovalAnimationForKeyPath:(id)arg1;	// IMP=0x000000000001feb0
- (id)_basicAnimationToDecreaseOpacity;	// IMP=0x000000000001fe73
- (id)_springAnimationToDecreaseOpacity;	// IMP=0x000000000001fe1e
- (id)_animationForTranslationY:(double)arg1;	// IMP=0x000000000001fd80
- (void)_reloadTapped:(id)arg1;	// IMP=0x000000000001fd66
- (void)_showCompletionAnimation:(CDUnknownBlockType)arg1;	// IMP=0x000000000001fb46
- (void)_updateConicGradientRotation;	// IMP=0x000000000001f9f1
- (void)_revealBackgroundAndLabels;	// IMP=0x000000000001f7bd
- (void)_startAnimationIfNeeded;	// IMP=0x000000000001f696
- (void)_updateLoadingProgress;	// IMP=0x000000000001f5c0
- (_Bool)_loadingIsComplete;	// IMP=0x000000000001f5a4
- (void)finishLoadingWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001efff
- (void)setLoadingProgress:(float)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001edc5
- (void)setBackgroundImage:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000001eba1
@property(readonly, nonatomic) UIImage *backgroundImage;
- (void)setLoadingHasFailed:(_Bool)arg1 animated:(_Bool)arg2 reason:(id)arg3 reloadHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000001e884
- (void)layoutSubviews;	// IMP=0x000000000001de8d
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001de40
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000001d1d8

@end
