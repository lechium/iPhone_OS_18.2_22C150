//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@protocol OBPasscodeInputViewDelegate;

__attribute__((visibility("hidden")))
@interface OBPasscodeInputView : UIView
{
    id <OBPasscodeInputViewDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000025386
@property(nonatomic) __weak id <OBPasscodeInputViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)shake;	// IMP=0x0000000000025017
- (id)passcodeField;	// IMP=0x000000000002500f
- (id)passcode;	// IMP=0x0000000000025007
- (void)setPasscode:(id)arg1;	// IMP=0x0000000000025001
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000024f77
- (_Bool)resignFirstResponder;	// IMP=0x0000000000024f04
- (_Bool)isFirstResponder;	// IMP=0x0000000000024ec0
- (_Bool)becomeFirstResponder;	// IMP=0x0000000000024e7c
- (_Bool)canBecomeFirstResponder;	// IMP=0x0000000000024e74

@end
