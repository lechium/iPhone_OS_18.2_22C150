//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, SUUIResponseView, SUUITextBoxView;

__attribute__((visibility("hidden")))
@interface SUUIReviewCollectionViewCell
{
    CDUnknownBlockType _descriptionTapAction;	// 8 = 0x8
    CDUnknownBlockType _responseDescriptionTapAction;	// 16 = 0x10
    SUUITextBoxView *_descriptionView;	// 24 = 0x18
    SUUIResponseView *_responseView;	// 32 = 0x20
}

+ (id)_attributedStringForDateLabel:(id)arg1 context:(id)arg2;	// IMP=0x001000000018152b
+ (id)_attributedStringForTitleLabel:(id)arg1 context:(id)arg2;	// IMP=0x00100000001813c9
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;	// IMP=0x001000000018047f
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x00100000001802e9
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;	// IMP=0x0010000000180256
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x001000000018024e
- (void).cxx_destruct;	// IMP=0x0000000000181979
@property(retain, nonatomic) SUUIResponseView *responseView; // @synthesize responseView=_responseView;
@property(retain, nonatomic) SUUITextBoxView *descriptionView; // @synthesize descriptionView=_descriptionView;
@property(copy, nonatomic) CDUnknownBlockType responseDescriptionTapAction; // @synthesize responseDescriptionTapAction=_responseDescriptionTapAction;
@property(copy, nonatomic) CDUnknownBlockType descriptionTapAction; // @synthesize descriptionTapAction=_descriptionTapAction;
- (void)_resetTapGestures;	// IMP=0x0000000000181698
- (void)contentViewTapped:(id)arg1;	// IMP=0x00000000001810e3
- (void)layoutSubviews;	// IMP=0x0000000000180c7a
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0000000000180b2e
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x0000000000180b26
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000180b1e
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x0000000000180b16
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x00000000001807db

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

