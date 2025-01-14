//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSString, UIButton, UIColor, UIFont, UIImageSymbolConfiguration;

__attribute__((visibility("hidden")))
@interface _UIFindNavigatorViewLayout : UIView
{
    _Bool _replaceFieldVisible;	// 8 = 0x8
    _Bool _usesAssistantBarHeight;	// 9 = 0x9
    _Bool _usesSymbolForDoneButton;	// 10 = 0xa
    _Bool _usesNextAndPreviousArrows;	// 11 = 0xb
    UIButton *_nextResultButton;	// 16 = 0x10
    UIButton *_previousResultButton;	// 24 = 0x18
    UIButton *_doneButton;	// 32 = 0x20
    UIButton *_replaceButton;	// 40 = 0x28
    UIView *_searchTextField;	// 48 = 0x30
    UIView *_replaceTextField;	// 56 = 0x38
    long long _assistantBarStyle;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000002baf92
@property(readonly, nonatomic) _Bool usesNextAndPreviousArrows; // @synthesize usesNextAndPreviousArrows=_usesNextAndPreviousArrows;
@property(readonly, nonatomic) _Bool usesSymbolForDoneButton; // @synthesize usesSymbolForDoneButton=_usesSymbolForDoneButton;
@property(nonatomic) long long assistantBarStyle; // @synthesize assistantBarStyle=_assistantBarStyle;
@property(nonatomic) _Bool usesAssistantBarHeight; // @synthesize usesAssistantBarHeight=_usesAssistantBarHeight;
@property(nonatomic) _Bool replaceFieldVisible; // @synthesize replaceFieldVisible=_replaceFieldVisible;
@property(retain, nonatomic) UIView *replaceTextField; // @synthesize replaceTextField=_replaceTextField;
@property(retain, nonatomic) UIView *searchTextField; // @synthesize searchTextField=_searchTextField;
@property(retain, nonatomic) UIButton *replaceButton; // @synthesize replaceButton=_replaceButton;
@property(retain, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) UIButton *previousResultButton; // @synthesize previousResultButton=_previousResultButton;
@property(retain, nonatomic) UIButton *nextResultButton; // @synthesize nextResultButton=_nextResultButton;
- (void)_setAndActivateConstraints;	// IMP=0x00000000002bae3d
- (void)applyStyleToFieldIfNeeded:(id)arg1;	// IMP=0x00000000002bae37
- (void)addMaterialToViewIfNeeded:(id)arg1;	// IMP=0x00000000002bae31
- (id)commonButtonConfigWithImageName:(id)arg1 isAccessory:(_Bool)arg2;	// IMP=0x00000000002bacf3
- (id)commonButtonConfigWithTitle:(id)arg1;	// IMP=0x00000000002ba93b
- (id)commonButtonConfig:(CDUnknownBlockType)arg1;	// IMP=0x00000000002ba8c6
@property(readonly, nonatomic) _Bool showsReplaceInOptionsMenu;
@property(readonly, nonatomic) double preferredVerticalPadding;
@property(readonly, nonatomic) double preferredHorizontalPadding;
@property(readonly, nonatomic) double preferredCornerRadius;
@property(readonly, nonatomic) UIColor *preferredOpaqueBackgroundColor;
@property(readonly, nonatomic) UIFont *preferredTextFieldFont;
@property(readonly, nonatomic) UIImageSymbolConfiguration *preferredSymbolConfigurationForImageForTextFields;
@property(readonly, nonatomic) NSString *preferredMaximumContentSizeCategory;
@property(readonly, nonatomic) struct CGSize preferredContentSize;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002ba6f0
- (void)prepareForLayout;	// IMP=0x00000000002ba6ea

@end

