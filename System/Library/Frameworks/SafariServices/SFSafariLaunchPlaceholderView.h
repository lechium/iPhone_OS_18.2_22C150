//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSString, UIBarButtonItem, UIButton, UIImageView, UILabel, UINavigationBar, UITextView, UIToolbar;

__attribute__((visibility("hidden")))
@interface SFSafariLaunchPlaceholderView : UIView
{
    _Bool _forAuthentication;	// 8 = 0x8
    UIToolbar *_bottomToolbar;	// 16 = 0x10
    UIImageView *_browserIconView;	// 24 = 0x18
    CDUnknownBlockType _dismissalHandler;	// 32 = 0x20
    CDUnknownBlockType _openHandler;	// 40 = 0x28
    UITextView *_linkCaptionTextView;	// 48 = 0x30
    UILabel *_linkTitleLabel;	// 56 = 0x38
    UINavigationBar *_topNavigationBar;	// 64 = 0x40
    UIBarButtonItem *_dismissButton;	// 72 = 0x48
    UIButton *_largeButton;	// 80 = 0x50
    _Bool _showContinueButton;	// 88 = 0x58
    double _topLayoutGuideInset;	// 96 = 0x60
}

+ (id)compatibilityPlaceholderWithAppName:(id)arg1 destinationURL:(id)arg2 forAuthentication:(_Bool)arg3 dismissalHandler:(CDUnknownBlockType)arg4 openHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000012034b
+ (id)blankPlaceholder;	// IMP=0x001000000011fbcb
- (void).cxx_destruct;	// IMP=0x0000000000121647
@property(nonatomic) _Bool showContinueButton; // @synthesize showContinueButton=_showContinueButton;
@property(nonatomic) double topLayoutGuideInset; // @synthesize topLayoutGuideInset=_topLayoutGuideInset;
- (void)_openTapped:(id)arg1;	// IMP=0x00000000001215d4
- (void)_dismissTapped:(id)arg1;	// IMP=0x00000000001215ba
- (void)updateDismissButtonStyle:(long long)arg1;	// IMP=0x000000000012154b
- (void)updateControlTintColor:(id)arg1;	// IMP=0x00000000001214de
- (void)updateBarTintColor:(id)arg1;	// IMP=0x0000000000121471
- (long long)positionForBar:(id)arg1;	// IMP=0x0000000000121466
- (void)layoutSubviews;	// IMP=0x000000000012113b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
