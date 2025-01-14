//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class CAShapeLayer, CNAvatarViewController, UIActivityIndicatorView, UIImageView, UILabel, UITapGestureRecognizer, UIView, _TtC10ContactsUI49CNPosterOnboardingSettingsAnimationViewController;
@protocol CNAvatarImageProvider, CNMeCardSharingAvatarProvider, CNMeCardSharingAvatarViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNMeCardSharingAvatarViewController : UIViewController
{
    _Bool _isWaitingForPosterPreviews;	// 8 = 0x8
    _Bool _hasImage;	// 9 = 0x9
    _Bool _posterPreviewsGenerationTimedOut;	// 10 = 0xa
    _Bool _needsReload;	// 11 = 0xb
    id <CNMeCardSharingAvatarViewControllerDelegate> _delegate;	// 16 = 0x10
    UIView *_avatarContainerView;	// 24 = 0x18
    CAShapeLayer *_circularLayer;	// 32 = 0x20
    UIImageView *_imageView;	// 40 = 0x28
    UILabel *_addPhotoLabel;	// 48 = 0x30
    UIActivityIndicatorView *_activityIndicator;	// 56 = 0x38
    _TtC10ContactsUI49CNPosterOnboardingSettingsAnimationViewController *_posterAnimationController;	// 64 = 0x40
    id <CNMeCardSharingAvatarProvider> _avatarProvider;	// 72 = 0x48
    id <CNAvatarImageProvider> _fallbackImageProvider;	// 80 = 0x50
    CNAvatarViewController *_avatarViewController;	// 88 = 0x58
    UITapGestureRecognizer *_tapGestureRecognizer;	// 96 = 0x60
    long long _mode;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000002f6b26
@property(nonatomic) _Bool needsReload; // @synthesize needsReload=_needsReload;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) CNAvatarViewController *avatarViewController; // @synthesize avatarViewController=_avatarViewController;
@property(retain, nonatomic) id <CNAvatarImageProvider> fallbackImageProvider; // @synthesize fallbackImageProvider=_fallbackImageProvider;
@property(retain, nonatomic) id <CNMeCardSharingAvatarProvider> avatarProvider; // @synthesize avatarProvider=_avatarProvider;
@property(retain, nonatomic) _TtC10ContactsUI49CNPosterOnboardingSettingsAnimationViewController *posterAnimationController; // @synthesize posterAnimationController=_posterAnimationController;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UILabel *addPhotoLabel; // @synthesize addPhotoLabel=_addPhotoLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) CAShapeLayer *circularLayer; // @synthesize circularLayer=_circularLayer;
@property(retain, nonatomic) UIView *avatarContainerView; // @synthesize avatarContainerView=_avatarContainerView;
@property(nonatomic) _Bool posterPreviewsGenerationTimedOut; // @synthesize posterPreviewsGenerationTimedOut=_posterPreviewsGenerationTimedOut;
@property(nonatomic) _Bool hasImage; // @synthesize hasImage=_hasImage;
@property(nonatomic) _Bool isWaitingForPosterPreviews; // @synthesize isWaitingForPosterPreviews=_isWaitingForPosterPreviews;
@property(nonatomic) __weak id <CNMeCardSharingAvatarViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)togglePosterAnimation;	// IMP=0x00000000002f68a8
@property(readonly, nonatomic) _Bool isPosterAnimationPaused;
@property(readonly, nonatomic) _Bool isPosterAnimationPausable;
- (_Bool)showsPosterAnimation;	// IMP=0x00000000002f6785
- (void)didTapAvatarView:(id)arg1;	// IMP=0x00000000002f6739
- (void)updateImageAnimated:(_Bool)arg1 newImage:(id)arg2 placeHolder:(_Bool)arg3 additionalAnimatedChanges:(CDUnknownBlockType)arg4;	// IMP=0x00000000002f65a6
- (void)updateViewsToUseGeneratedImage:(id)arg1 forSize:(struct CGSize)arg2 usingFallback:(_Bool)arg3;	// IMP=0x00000000002f63ef
- (void)updateViewsToUseGeneratedAvatarImage:(id)arg1 forSize:(struct CGSize)arg2;	// IMP=0x00000000002f63d8
- (void)updateViewsToUseGeneratedPosterImage:(id)arg1 forSize:(struct CGSize)arg2;	// IMP=0x00000000002f63c4
- (void)removePosterAnimationController;	// IMP=0x00000000002f6363
- (void)addPosterAnimationController:(id)arg1;	// IMP=0x00000000002f5dd0
- (struct CGSize)portraitScreenSize;	// IMP=0x00000000002f5ce7
- (void)removePosterAnimationLoadingSpinner;	// IMP=0x00000000002f5c23
- (void)addPosterAnimationLoadingSpinner;	// IMP=0x00000000002f5786
- (void)reloadPosterImage;	// IMP=0x00000000002f54f9
- (void)reloadAvatarImage;	// IMP=0x00000000002f536f
- (void)reload;	// IMP=0x00000000002f529d
- (void)updateWithAvatarProvider:(id)arg1;	// IMP=0x00000000002f5246
- (struct CGRect)frameForContainerView;	// IMP=0x00000000002f50ba
- (void)viewWillLayoutSubviews;	// IMP=0x00000000002f4eca
- (void)viewIsAppearing:(_Bool)arg1;	// IMP=0x00000000002f4e75
- (void)viewDidLoad;	// IMP=0x00000000002f4de4
- (void)configureSubviews;	// IMP=0x00000000002f4c4c
- (void)loadView;	// IMP=0x00000000002f4ab0
- (id)initWithAvatarProvider:(id)arg1 mode:(long long)arg2;	// IMP=0x00000000002f497e
- (id)initWithAvatarProvider:(id)arg1;	// IMP=0x00000000002f496a

@end

