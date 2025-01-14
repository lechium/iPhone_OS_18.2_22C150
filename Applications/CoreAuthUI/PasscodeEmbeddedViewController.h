//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSString, UIImpactFeedbackGenerator, UILabel, UIStackView, UITextField, UIView;

@interface PasscodeEmbeddedViewController : UIViewController
{
    UIStackView *_mainContainer;	// 8 = 0x8
    UIView *_passcodeFieldContainer;	// 16 = 0x10
    UIStackView *_passcodeFieldBackground;	// 24 = 0x18
    UILabel *_backoffTitle;	// 32 = 0x20
    UILabel *_backoffSubtitle;	// 40 = 0x28
    UIImpactFeedbackGenerator *_hapticGenerator;	// 48 = 0x30
    _Bool _animating;	// 56 = 0x38
    UITextField *_passcodeField;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000000242d0
@property(retain, nonatomic) UITextField *passcodeField; // @synthesize passcodeField=_passcodeField;
@property(nonatomic) _Bool animating; // @synthesize animating=_animating;
- (id)alphanumericFieldPlaceholder;	// IMP=0x00100000000241da
- (long long)alphanumericFieldTextAlignment;	// IMP=0x00100000000241cf
- (_Bool)hasAlphaNumericPasscode;	// IMP=0x001000000002417f
- (unsigned long long)passcodeLength;	// IMP=0x001000000002411a
- (_Bool)_useDotPattern;	// IMP=0x00100000000240de
- (void)_submitPasscode:(id)arg1;	// IMP=0x00100000000240c1
- (void)_shakePasscodeFieldWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000023ebb
- (void)_selectPasscodeField:(id)arg1;	// IMP=0x0010000000023e46
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;	// IMP=0x0010000000023c48
- (_Bool)textFieldShouldEndEditing:(id)arg1;	// IMP=0x0010000000023a20
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x00100000000239bf
- (void)setBackoffTimeout:(double)arg1 showBackoffTitle:(_Bool)arg2 passcodeFocused:(_Bool)arg3;	// IMP=0x001000000002353d
- (void)setBackoffTimeout:(double)arg1;	// IMP=0x0010000000023521
- (_Bool)verifyPasscode:(id)arg1;	// IMP=0x0010000000023519
- (void)setPasscodeFocused:(_Bool)arg1;	// IMP=0x00100000000233f9
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0010000000022fd4
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0010000000022f65
- (void)loadView;	// IMP=0x001000000002157e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

