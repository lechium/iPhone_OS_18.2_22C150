//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStoreUI/SUViewController.h>

@class NSString, SUUIComposeReviewNicknameView, UIScrollView;
@protocol SUUIComposeReviewNicknameDelegate;

__attribute__((visibility("hidden")))
@interface SUUIComposeReviewNicknameViewController : SUViewController
{
    id <SUUIComposeReviewNicknameDelegate> _delegate;	// 8 = 0x8
    UIScrollView *_scrollView;	// 16 = 0x10
    SUUIComposeReviewNicknameView *_nicknameView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000615be
@property(retain, nonatomic) SUUIComposeReviewNicknameView *nicknameView; // @synthesize nicknameView=_nicknameView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak id <SUUIComposeReviewNicknameDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateConfirmState;	// IMP=0x000000000006140f
- (void)_submit;	// IMP=0x0000000000061319
- (void)_cancel;	// IMP=0x000000000006128f
- (void)_setupBarButtonItems;	// IMP=0x000000000006114b
- (void)_setupNicknameView;	// IMP=0x0000000000060bc1
- (void)_setupScrollView;	// IMP=0x00000000000606a3
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000060639
- (void)viewDidLoad;	// IMP=0x0000000000060505

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

