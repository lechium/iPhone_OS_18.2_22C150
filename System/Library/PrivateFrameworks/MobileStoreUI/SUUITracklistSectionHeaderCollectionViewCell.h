//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSString, SUUIButtonViewElement, SUUIBuyButtonDescriptor, SUUITracklistColumnData, UIControl, UIView;

__attribute__((visibility("hidden")))
@interface SUUITracklistSectionHeaderCollectionViewCell
{
    UIControl *_button;	// 8 = 0x8
    SUUIButtonViewElement *_buttonViewElement;	// 16 = 0x10
    SUUIBuyButtonDescriptor *_buyButtonDescriptor;	// 24 = 0x18
    SUUITracklistColumnData *_columnData;	// 32 = 0x20
    NSMutableArray *_labels;	// 40 = 0x28
    UIView *_separatorView;	// 48 = 0x30
}

+ (double)_titlesWidthForWidth:(double)arg1 columnData:(id)arg2;	// IMP=0x001000000032dcb0
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;	// IMP=0x001000000032ca04
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x001000000032c6ca
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;	// IMP=0x001000000032c6b4
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x001000000032c4cd
- (void).cxx_destruct;	// IMP=0x000000000032dd50
- (void)_showConfirmationAction:(id)arg1;	// IMP=0x000000000032dc33
- (void)_cancelConfirmationAction:(id)arg1;	// IMP=0x000000000032dc17
- (void)_buttonAction:(id)arg1;	// IMP=0x000000000032db29
- (void)itemOfferButtonWillAnimateTransition:(id)arg1;	// IMP=0x000000000032da5b
- (void)layoutSubviews;	// IMP=0x000000000032d34c
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x000000000032d344
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000032d26a
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x000000000032d262
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x000000000032cc3f
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000032c3cd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
