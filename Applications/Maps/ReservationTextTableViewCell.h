//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewCell.h>

@class NSLayoutConstraint, NSString, UIButton, UILabel;
@protocol ReservationTextTableViewCellDelegate;

@interface ReservationTextTableViewCell : UITableViewCell
{
    id <ReservationTextTableViewCellDelegate> _delegate;	// 8 = 0x8
    UILabel *_label;	// 16 = 0x10
    UIButton *_primaryButton;	// 24 = 0x18
    UIButton *_secondaryButton;	// 32 = 0x20
    NSLayoutConstraint *_textToBottomConstraint;	// 40 = 0x28
    NSLayoutConstraint *_textToPrimaryButtonConstraint;	// 48 = 0x30
    NSLayoutConstraint *_primaryButtonToBottomConstraint;	// 56 = 0x38
    NSLayoutConstraint *_primaryButtonToSecondaryButtonConstraint;	// 64 = 0x40
    NSLayoutConstraint *_secondaryButtonToBottomConstraint;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x002000000034e7d0
@property(retain, nonatomic) NSLayoutConstraint *secondaryButtonToBottomConstraint; // @synthesize secondaryButtonToBottomConstraint=_secondaryButtonToBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *primaryButtonToSecondaryButtonConstraint; // @synthesize primaryButtonToSecondaryButtonConstraint=_primaryButtonToSecondaryButtonConstraint;
@property(retain, nonatomic) NSLayoutConstraint *primaryButtonToBottomConstraint; // @synthesize primaryButtonToBottomConstraint=_primaryButtonToBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *textToPrimaryButtonConstraint; // @synthesize textToPrimaryButtonConstraint=_textToPrimaryButtonConstraint;
@property(retain, nonatomic) NSLayoutConstraint *textToBottomConstraint; // @synthesize textToBottomConstraint=_textToBottomConstraint;
@property(retain, nonatomic) UIButton *secondaryButton; // @synthesize secondaryButton=_secondaryButton;
@property(retain, nonatomic) UIButton *primaryButton; // @synthesize primaryButton=_primaryButton;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(nonatomic) __weak id <ReservationTextTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *secondaryButtonText;
@property(copy, nonatomic) NSString *primaryButtonText;
@property(copy, nonatomic) NSString *text;
- (void)setupConstraints;	// IMP=0x001000000034d4c1
- (void)updateConstraints;	// IMP=0x001000000034d047
- (void)secondaryButtonSelected:(id)arg1;	// IMP=0x001000000034cffb
- (void)primaryButtonSelected:(id)arg1;	// IMP=0x001000000034cfaf
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x001000000034cb67

@end
