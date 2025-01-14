//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMapTable, NSString, SKUIHeaderViewElement;

__attribute__((visibility("hidden")))
@interface SKUISectionHeaderView
{
    struct UIEdgeInsets _contentInset;	// 8 = 0x8
    struct CGSize _lastFitSize;	// 40 = 0x28
    NSArray *_lines;	// 56 = 0x38
    SKUIHeaderViewElement *_header;	// 64 = 0x40
    NSMapTable *_views;	// 72 = 0x48
}

+ (struct CGSize)_sizeForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x0010000000073e48
+ (id)_linesForViewElement:(id)arg1 width:(double)arg2 buttonSize:(struct CGSize)arg3 context:(id)arg4;	// IMP=0x0010000000073ccd
+ (id)_attributedStringForLabel:(id)arg1 context:(id)arg2;	// IMP=0x00100000000739e1
+ (id)_attributedStringForButton:(id)arg1 context:(id)arg2;	// IMP=0x00100000000737e3
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;	// IMP=0x00100000000717c2
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x00100000000713bb
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;	// IMP=0x00100000000712ec
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x00100000000712a1
- (void).cxx_destruct;	// IMP=0x0000000000073e5d
- (void)_buttonAction:(id)arg1;	// IMP=0x00000000000734fd
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000734e5
- (void)layoutSubviews;	// IMP=0x000000000007243b
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x0000000000072433
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000007242b
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x0000000000072423
- (void)setContentInset:(struct UIEdgeInsets)arg1;	// IMP=0x00000000000723cb
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x0000000000071d3b
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000711ca

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

