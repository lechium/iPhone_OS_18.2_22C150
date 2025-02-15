//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMapTable, NSString;

__attribute__((visibility("hidden")))
@interface SKUIStackListCollectionViewCell
{
    unsigned long long _alignment;	// 8 = 0x8
    NSMapTable *_listViews;	// 16 = 0x10
}

+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;	// IMP=0x0010000000130c6c
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x0010000000130a6b
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;	// IMP=0x0010000000130a12
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x0010000000130833
- (void).cxx_destruct;	// IMP=0x000000000013226f
@property(retain, nonatomic) NSMapTable *listViews; // @synthesize listViews=_listViews;
@property(nonatomic) unsigned long long alignment; // @synthesize alignment=_alignment;
- (_Bool)_isRightAligned;	// IMP=0x000000000013220e
- (_Bool)layoutSubviewsWithFixedWidth:(struct CGRect)arg1 size:(struct CGSize *)arg2;	// IMP=0x0000000000131dc2
- (_Bool)layoutSubviewsWithFlowLayout:(struct CGRect)arg1 size:(struct CGSize *)arg2;	// IMP=0x0000000000131783
- (void)layoutSubviews;	// IMP=0x000000000013168a
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000001315aa
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x00000000001315a2
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000013159a
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x0000000000131467
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x0000000000130499
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001303c2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

