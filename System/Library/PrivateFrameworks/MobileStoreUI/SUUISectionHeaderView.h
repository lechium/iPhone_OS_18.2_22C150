//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMapTable, NSString, SUUIHeaderViewElement;

__attribute__((visibility("hidden")))
@interface SUUISectionHeaderView
{
    struct UIEdgeInsets _contentInset;	// 8 = 0x8
    struct CGSize _lastFitSize;	// 40 = 0x28
    NSArray *_lines;	// 56 = 0x38
    SUUIHeaderViewElement *_header;	// 64 = 0x40
    NSMapTable *_views;	// 72 = 0x48
}

+ (struct CGSize)_sizeForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x0010000000216878
+ (id)_linesForViewElement:(id)arg1 width:(double)arg2 buttonSize:(struct CGSize)arg3 context:(id)arg4;	// IMP=0x00100000002166fd
+ (id)_attributedStringForLabel:(id)arg1 context:(id)arg2;	// IMP=0x0010000000216411
+ (id)_attributedStringForButton:(id)arg1 context:(id)arg2;	// IMP=0x0010000000216213
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;	// IMP=0x0010000000214243
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x0010000000213e8a
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;	// IMP=0x0010000000213df7
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x0010000000213def
- (void).cxx_destruct;	// IMP=0x000000000021688d
- (void)_buttonAction:(id)arg1;	// IMP=0x0000000000215f2d
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000215f15
- (void)layoutSubviews;	// IMP=0x0000000000214e6b
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x0000000000214e63
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000214e5b
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x0000000000214e53
- (void)setContentInset:(struct UIEdgeInsets)arg1;	// IMP=0x0000000000214dfb
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x000000000021476b
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000213d67

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
