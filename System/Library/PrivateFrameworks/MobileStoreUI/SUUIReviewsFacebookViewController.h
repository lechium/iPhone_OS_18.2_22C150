//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class SUUIClientContext, SUUIFacebookLikeStatus, SUUIReviewsFacebookView;
@protocol SUUIReviewsFacebookViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SUUIReviewsFacebookViewController : UIViewController
{
    SUUIClientContext *_clientContext;	// 8 = 0x8
    id <SUUIReviewsFacebookViewControllerDelegate> _delegate;	// 16 = 0x10
    SUUIFacebookLikeStatus *_facebookLikeStatus;	// 24 = 0x18
    SUUIReviewsFacebookView *_facebookView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000010098e
@property(copy, nonatomic) SUUIFacebookLikeStatus *facebookLikeStatus; // @synthesize facebookLikeStatus=_facebookLikeStatus;
@property(nonatomic) __weak id <SUUIReviewsFacebookViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SUUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void)_reloadFacebookView;	// IMP=0x0000000000100896
- (void)_changeStatusToUserLiked:(_Bool)arg1;	// IMP=0x0000000000100837
- (void)_toggleLike:(id)arg1;	// IMP=0x0000000000100580
- (void)loadView;	// IMP=0x00000000001004b3
- (void)dealloc;	// IMP=0x00000000001003d2

@end
