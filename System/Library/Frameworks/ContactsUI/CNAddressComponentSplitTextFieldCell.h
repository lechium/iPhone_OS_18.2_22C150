//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNRepeatingGradientSeparatorView, NSString, UITextField;

__attribute__((visibility("hidden")))
@interface CNAddressComponentSplitTextFieldCell
{
    UITextField *_textFieldLeft;	// 8 = 0x8
    UITextField *_textFieldRight;	// 16 = 0x10
    CNRepeatingGradientSeparatorView *_separator;	// 24 = 0x18
}

+ (id)cellIdentifier;	// IMP=0x001000000011d073
+ (Class)containerViewClass;	// IMP=0x001000000011d062
- (void).cxx_destruct;	// IMP=0x000000000011d020
@property(retain, nonatomic) CNRepeatingGradientSeparatorView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) UITextField *textFieldRight; // @synthesize textFieldRight=_textFieldRight;
@property(retain, nonatomic) UITextField *textFieldLeft; // @synthesize textFieldLeft=_textFieldLeft;
- (id)textAttributes;	// IMP=0x000000000011cf61
- (void)setTextAttributes:(id)arg1;	// IMP=0x000000000011ce75
- (id)textFields;	// IMP=0x000000000011cdb2
- (void)setupTextFields;	// IMP=0x000000000011cb9e
- (id)newSeparatorView;	// IMP=0x000000000011cad2
- (struct CGRect)containerView:(id)arg1 layoutFrameForArrangedSubview:(id)arg2 withProposedFrame:(struct CGRect)arg3;	// IMP=0x000000000011c9fa
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000000011c94e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

