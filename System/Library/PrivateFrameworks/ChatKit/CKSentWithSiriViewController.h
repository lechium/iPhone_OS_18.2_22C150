//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class CKConversation, NSString, UIImageView, UILabel, UIScrollView, UIView;

__attribute__((visibility("hidden")))
@interface CKSentWithSiriViewController : UIViewController
{
    CKConversation *_conversation;	// 8 = 0x8
    UIScrollView *_scrollView;	// 16 = 0x10
    UIView *_contentView;	// 24 = 0x18
    UILabel *_contextDescriptionLabel;	// 32 = 0x20
    UIImageView *_heroImageView;	// 40 = 0x28
    UILabel *_titleLabel;	// 48 = 0x30
    UILabel *_subtitleLabel;	// 56 = 0x38
    UILabel *_detailLabel;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000012507f
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *heroImageView; // @synthesize heroImageView=_heroImageView;
@property(retain, nonatomic) UILabel *contextDescriptionLabel; // @synthesize contextDescriptionLabel=_contextDescriptionLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) CKConversation *conversation; // @synthesize conversation=_conversation;
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0000000000124e17
- (id)inputAccessoryViewController;	// IMP=0x0000000000124e0f
- (_Bool)canBecomeFirstResponder;	// IMP=0x0000000000124e07
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000124d90
- (id)localizedStringWithLanguageCode:(id)arg1 format:(id)arg2;	// IMP=0x0000000000124c35
- (id)_titleLabelText;	// IMP=0x000000000012485e
- (void)viewDidLoad;	// IMP=0x0000000000122fc0
- (id)initWithConversation:(id)arg1;	// IMP=0x0000000000122f52

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

