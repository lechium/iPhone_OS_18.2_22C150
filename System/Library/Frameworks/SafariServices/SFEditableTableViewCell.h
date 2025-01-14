//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewCell.h>

@class UIColor;
@protocol SFEditableTableViewCellDelegate;

__attribute__((visibility("hidden")))
@interface SFEditableTableViewCell : UITableViewCell
{
    _Bool _enabled;	// 8 = 0x8
    id <SFEditableTableViewCellDelegate> _delegate;	// 16 = 0x10
    UIColor *_overrideEditableTextFieldTextColor;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000005846d
@property(retain, nonatomic) UIColor *overrideEditableTextFieldTextColor; // @synthesize overrideEditableTextFieldTextColor=_overrideEditableTextFieldTextColor;
@property(nonatomic) __weak id <SFEditableTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (void)copy:(id)arg1;	// IMP=0x00000000000582f3
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x0000000000058250
- (void)_updateTextFieldTextColor;	// IMP=0x0000000000058182
- (void)tintColorDidChange;	// IMP=0x0000000000058094
- (id)initWithEnabledState:(_Bool)arg1;	// IMP=0x0000000000057f63

@end

