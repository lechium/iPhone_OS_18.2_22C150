//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStoreUI/SUViewController.h>

@class NSString, SKUIBarButtonItemSubmitWithAnimation, SKUIComposeReviewNicknameView, UIScrollView;
@protocol SKUIComposeReviewNicknameDelegate;

__attribute__((visibility("hidden")))
@interface SKUIComposeReviewNicknameViewController : SUViewController
{
    id <SKUIComposeReviewNicknameDelegate> _delegate;	// 8 = 0x8
    UIScrollView *_scrollView;	// 16 = 0x10
    SKUIComposeReviewNicknameView *_nicknameView;	// 24 = 0x18
    SKUIBarButtonItemSubmitWithAnimation *_submitButton;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000003b9dc6
@property(retain, nonatomic) SKUIBarButtonItemSubmitWithAnimation *submitButton; // @synthesize submitButton=_submitButton;
@property(retain, nonatomic) SKUIComposeReviewNicknameView *nicknameView; // @synthesize nicknameView=_nicknameView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak id <SKUIComposeReviewNicknameDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateConfirmState;	// IMP=0x00000000003b9bf2
- (void)_submit;	// IMP=0x00000000003b9afc
- (void)_cancel;	// IMP=0x00000000003b9a72
- (void)_setupBarButtonItems;	// IMP=0x00000000003b992e
- (void)_setupNicknameView;	// IMP=0x00000000003b93a4
- (void)_setupScrollView;	// IMP=0x00000000003b8e86
- (void)showSendAnimationInNavigationBarWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000003b8e1d
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000003b8db3
- (void)viewDidLoad;	// IMP=0x00000000003b8c7f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
