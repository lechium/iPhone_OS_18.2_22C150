//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMapTable, NSString, SUUITabularLockupLayout;

__attribute__((visibility("hidden")))
@interface SUUITabularLockupView
{
    SUUITabularLockupLayout *_layout;	// 8 = 0x8
    NSMapTable *_viewElementViews;	// 16 = 0x10
}

+ (void)_requestLayoutForViewElements:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x001000000009798a
+ (id)_attributedStringForLabel:(id)arg1 context:(id)arg2;	// IMP=0x0010000000097809
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;	// IMP=0x00100000000971eb
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x0010000000096f97
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;	// IMP=0x0010000000096f81
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x0010000000096f79
- (void).cxx_destruct;	// IMP=0x0000000000098272
- (struct CGSize)_sizeViewsForColumn:(id)arg1 toFitWidth:(double)arg2;	// IMP=0x000000000009802d
- (void)_layoutSubviewsForColumn:(id)arg1;	// IMP=0x0000000000097c07
- (void)layoutSubviews;	// IMP=0x000000000009769b
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x0000000000097693
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000009768b
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x0000000000097683
- (void)setContentInset:(struct UIEdgeInsets)arg1;	// IMP=0x000000000009767d
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x0000000000097201
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000096ef4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

