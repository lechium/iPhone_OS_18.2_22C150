//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class NSLayoutConstraint, NSString, UIColor, UIImageView, UITextView;
@protocol CKDetailsDownloadAttachmentsHeaderFooterViewDelegate;

__attribute__((visibility("hidden")))
@interface CKDetailsDownloadAttachmentsHeaderFooterView : UITableViewHeaderFooterView
{
    _Bool _logoHidden;	// 8 = 0x8
    NSString *_titleText;	// 16 = 0x10
    NSString *_buttonText;	// 24 = 0x18
    id <CKDetailsDownloadAttachmentsHeaderFooterViewDelegate> _delegate;	// 32 = 0x20
    UIColor *_downloadButtonTextColor;	// 40 = 0x28
    UIColor *_titleTextColor;	// 48 = 0x30
    UIImageView *_iCloudImageView;	// 56 = 0x38
    UITextView *_titleTextView;	// 64 = 0x40
    UITextView *_buttonTextView;	// 72 = 0x48
    NSLayoutConstraint *_titleTextTopToLogoConstraint;	// 80 = 0x50
    NSLayoutConstraint *_titleTextTopToViewConstraint;	// 88 = 0x58
}

+ (id)reuseIdentifier;	// IMP=0x0010000000241bab
- (void).cxx_destruct;	// IMP=0x0000000000242f6c
@property(retain, nonatomic) NSLayoutConstraint *titleTextTopToViewConstraint; // @synthesize titleTextTopToViewConstraint=_titleTextTopToViewConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleTextTopToLogoConstraint; // @synthesize titleTextTopToLogoConstraint=_titleTextTopToLogoConstraint;
@property(retain, nonatomic) UITextView *buttonTextView; // @synthesize buttonTextView=_buttonTextView;
@property(retain, nonatomic) UITextView *titleTextView; // @synthesize titleTextView=_titleTextView;
@property(retain, nonatomic) UIImageView *iCloudImageView; // @synthesize iCloudImageView=_iCloudImageView;
@property(nonatomic) _Bool logoHidden; // @synthesize logoHidden=_logoHidden;
@property(retain, nonatomic) UIColor *titleTextColor; // @synthesize titleTextColor=_titleTextColor;
@property(retain, nonatomic) UIColor *downloadButtonTextColor; // @synthesize downloadButtonTextColor=_downloadButtonTextColor;
@property(nonatomic) __weak id <CKDetailsDownloadAttachmentsHeaderFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000242df1
- (void)_updateiCloudImageViewAppearance;	// IMP=0x0000000000242d37
- (void)handleUserTap:(id)arg1;	// IMP=0x0000000000242afc
- (void)layoutSubviews;	// IMP=0x000000000024289c
- (id)initWithReuseIdentifier:(id)arg1;	// IMP=0x0000000000241bb8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
