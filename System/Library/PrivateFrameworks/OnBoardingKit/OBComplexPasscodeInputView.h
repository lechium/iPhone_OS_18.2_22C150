//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UITextField;

__attribute__((visibility("hidden")))
@interface OBComplexPasscodeInputView
{
    UITextField *_passcodeField;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000006ebf
@property(retain, nonatomic) UITextField *passcodeField; // @synthesize passcodeField=_passcodeField;
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x0000000000006dbe
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;	// IMP=0x0000000000006c5d
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000006b8f
- (id)passcode;	// IMP=0x0000000000006b3f
- (void)setPasscode:(id)arg1;	// IMP=0x0000000000006ad6
- (id)passcodeDisplayView;	// IMP=0x0000000000006ac1
- (id)initWithFrame:(struct CGRect)arg1 numericOnly:(_Bool)arg2;	// IMP=0x0000000000006483

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

