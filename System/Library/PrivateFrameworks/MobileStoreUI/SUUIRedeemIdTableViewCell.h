//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewCell.h>

@class NSString, UITextField;
@protocol SUUIRedeemIdTableViewCellDelegate;

__attribute__((visibility("hidden")))
@interface SUUIRedeemIdTableViewCell : UITableViewCell
{
    id <SUUIRedeemIdTableViewCellDelegate> _delegate;	// 8 = 0x8
    UITextField *_textField;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000003839fb
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(nonatomic) __weak id <SUUIRedeemIdTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_initializeTextField;	// IMP=0x00000000003837c8
- (void)textFieldDidChange:(id)arg1;	// IMP=0x0000000000383732
- (_Bool)textFieldShouldClear:(id)arg1;	// IMP=0x000000000038372a
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x0000000000383693
- (void)setAutoCapitalizationType:(long long)arg1;	// IMP=0x0000000000383647
- (void)setReturnKeyType:(long long)arg1;	// IMP=0x00000000003835fb
- (void)setKeyboardType:(long long)arg1;	// IMP=0x00000000003835af
- (void)setPlaceholderText:(id)arg1;	// IMP=0x0000000000383546
- (_Bool)resignFirstResponder;	// IMP=0x00000000003834c2
- (_Bool)becomeFirstResponder;	// IMP=0x000000000038343b
- (void)layoutSubviews;	// IMP=0x000000000038331c
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000003832b9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

