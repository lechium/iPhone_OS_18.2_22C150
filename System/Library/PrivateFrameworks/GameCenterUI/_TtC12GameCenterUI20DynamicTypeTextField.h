//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITextField.h>

@class MISSING_TYPE, UIFont;

__attribute__((visibility("hidden")))
@interface _TtC12GameCenterUI20DynamicTypeTextField : UITextField
{
    MISSING_TYPE *fontUseCaseContentSizeCategory;	// 8 = 0x8
    MISSING_TYPE *fontUseCase;	// 13 = 0xd
    MISSING_TYPE *directionalTextAlignment;	// 24 = 0x18
    MISSING_TYPE *padding;	// 65536 = 0x10000
}

- (void).cxx_destruct;	// IMP=0x00000000004a7dae
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004a7d5f
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000004a7c91
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;	// IMP=0x00000000004a7ad2
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;	// IMP=0x00000000004a79e2
- (struct JUMeasurements)measurementsWithFitting:(struct CGSize)arg1 in:(id)arg2;	// IMP=0x00000000004a793d
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000004a77ae
@property(nonatomic) long long textAlignment;
@property(nonatomic, retain) UIFont *font;
@property(nonatomic, readonly) long long jet_textLength;
@property(nonatomic, readonly) struct UIEdgeInsets jet_languageAwareOutsets;
@property(nonatomic, readonly) _Bool jet_isTextExtraTall;

@end

