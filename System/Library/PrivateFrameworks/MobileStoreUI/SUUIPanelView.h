//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMapTable, NSString, UIResponder;

__attribute__((visibility("hidden")))
@interface SUUIPanelView
{
    NSMapTable *_animators;	// 8 = 0x8
    UIResponder *_inputResponder;	// 16 = 0x10
    NSMapTable *_viewElements;	// 24 = 0x18
    NSMapTable *_viewMargins;	// 32 = 0x20
}

+ (_Bool)_useEditorialLayoutForLabelElement:(id)arg1;	// IMP=0x001000000030ec8b
+ (struct CGSize)_sizeForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x001000000030eba0
+ (_Bool)_shouldDisplayViewElement:(id)arg1;	// IMP=0x001000000030eb83
+ (struct UIEdgeInsets)_marginsForViewElement:(id)arg1 index:(unsigned long long)arg2 width:(double)arg3 context:(id)arg4;	// IMP=0x001000000030ea3c
+ (_Bool)_isValidTextInputViewElement:(id)arg1;	// IMP=0x001000000030e986
+ (void)_enumerateChildrenOfViewElement:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000030e6e8
+ (id)_attributedStringForText:(id)arg1 style:(id)arg2 context:(id)arg3;	// IMP=0x001000000030e5e9
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;	// IMP=0x001000000030cd1c
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x001000000030c98f
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;	// IMP=0x001000000030c979
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x001000000030c830
- (void).cxx_destruct;	// IMP=0x000000000030ed0f
- (void)animatorFeature:(id)arg1 performAnimationWithName:(id)arg2 options:(id)arg3;	// IMP=0x000000000030e4d8
- (void)_buttonAction:(id)arg1;	// IMP=0x000000000030e46d
- (void)layoutSubviews;	// IMP=0x000000000030dadd
- (_Bool)resignFirstResponder;	// IMP=0x000000000030da89
- (_Bool)canBecomeFirstResponder;	// IMP=0x000000000030da35
- (_Bool)becomeFirstResponder;	// IMP=0x000000000030d9e1
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x000000000030d9d9
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000030d9d1
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x000000000030d696
- (void)setContentInset:(struct UIEdgeInsets)arg1;	// IMP=0x000000000030d690
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x000000000030cf2c
- (void)dealloc;	// IMP=0x000000000030c6d1
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000030c5d5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
