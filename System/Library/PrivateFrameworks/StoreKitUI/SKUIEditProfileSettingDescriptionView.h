//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CALayer, NSString, SKUIClientContext, SKUIEditProfileSettingDescription, SKUIImageView, UIButton, UITextField;

__attribute__((visibility("hidden")))
@interface SKUIEditProfileSettingDescriptionView
{
    CALayer *_divider1;	// 8 = 0x8
    SKUIClientContext *_clientContext;	// 16 = 0x10
    UIButton *_editButton;	// 24 = 0x18
    UITextField *_nameField;	// 32 = 0x20
    UITextField *_handleField;	// 40 = 0x28
    SKUIImageView *_imageView;	// 48 = 0x30
    SKUIEditProfileSettingDescription *_settingDescription;	// 56 = 0x38
}

+ (id)_baselineFontForTextStyle:(id)arg1;	// IMP=0x0010000000364d7d
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 settingDescription:(id)arg2 context:(id)arg3;	// IMP=0x0010000000363cb9
+ (void)requestLayoutForSettingDescription:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x0010000000363c70
+ (struct CGSize)preferredSizeForSettingDescription:(id)arg1 context:(id)arg2;	// IMP=0x0010000000363c17
+ (_Bool)prefetchResourcesForSettingDescription:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x0010000000363bcc
- (void).cxx_destruct;	// IMP=0x000000000036506b
- (id)_textFieldWithPlaceholder:(id)arg1;	// IMP=0x0000000000364ece
- (void)_editProfilePhoto;	// IMP=0x0000000000364eb1
- (void)_updateHandleTextFieldValidity;	// IMP=0x0000000000364de6
- (void)layoutSubviews;	// IMP=0x0000000000364672
- (void)textFieldDidEndEditing:(id)arg1;	// IMP=0x0000000000364594
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;	// IMP=0x0000000000364477
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x000000000036441f
- (void)textFieldDidBeginEditing:(id)arg1;	// IMP=0x00000000003643d7
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x00000000003643cf
- (void)reloadWithSettingDescription:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x0000000000363d72

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
