//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMapTable, NSString, UIResponder;

__attribute__((visibility("hidden")))
@interface SKUIPanelView
{
    NSMapTable *_animators;	// 8 = 0x8
    UIResponder *_inputResponder;	// 16 = 0x10
    NSMapTable *_viewElements;	// 24 = 0x18
    NSMapTable *_viewMargins;	// 32 = 0x20
}

+ (_Bool)_useEditorialLayoutForLabelElement:(id)arg1;	// IMP=0x001000000020b03b
+ (struct CGSize)_sizeForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x001000000020af50
+ (_Bool)_shouldDisplayViewElement:(id)arg1;	// IMP=0x001000000020af33
+ (struct UIEdgeInsets)_marginsForViewElement:(id)arg1 index:(unsigned long long)arg2 width:(double)arg3 context:(id)arg4;	// IMP=0x001000000020adec
+ (_Bool)_isValidTextInputViewElement:(id)arg1;	// IMP=0x001000000020ad36
+ (void)_enumerateChildrenOfViewElement:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000020aa3c
+ (id)_attributedStringForText:(id)arg1 style:(id)arg2 context:(id)arg3;	// IMP=0x001000000020a93d
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;	// IMP=0x0010000000208f48
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x0010000000208b66
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;	// IMP=0x0010000000208b0d
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x0010000000208977
- (void).cxx_destruct;	// IMP=0x000000000020b0bf
- (void)animatorFeature:(id)arg1 performAnimationWithName:(id)arg2 options:(id)arg3;	// IMP=0x000000000020a82c
- (void)_buttonAction:(id)arg1;	// IMP=0x000000000020a7c1
- (void)layoutSubviews;	// IMP=0x0000000000209d5e
- (_Bool)resignFirstResponder;	// IMP=0x0000000000209d0a
- (_Bool)canBecomeFirstResponder;	// IMP=0x0000000000209cb6
- (_Bool)becomeFirstResponder;	// IMP=0x0000000000209c62
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x0000000000209c5a
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000209c52
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x0000000000209917
- (void)setContentInset:(struct UIEdgeInsets)arg1;	// IMP=0x0000000000209911
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x00000000002091ad
- (void)dealloc;	// IMP=0x0000000000208818
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000002086cd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
