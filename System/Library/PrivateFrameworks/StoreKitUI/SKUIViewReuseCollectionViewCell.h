//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUICollectionViewCell.h"

@class NSArray, NSMapTable, SKUIViewReusePool;

__attribute__((visibility("hidden")))
@interface SKUIViewReuseCollectionViewCell : SKUICollectionViewCell
{
    NSMapTable *_allViewTextProperties;	// 8 = 0x8
    SKUIViewReusePool *_viewPool;	// 16 = 0x10
    NSArray *_allExistingViews;	// 24 = 0x18
    struct UIEdgeInsets _contentInset;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000003a26a9
@property(readonly, nonatomic) NSArray *allExistingViews; // @synthesize allExistingViews=_allExistingViews;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
- (void)setBackgroundColor:(id)arg1;	// IMP=0x00000000003a24f1
- (void)applyLayoutAttributes:(id)arg1;	// IMP=0x00000000003a2349
- (id)textPropertiesForView:(id)arg1;	// IMP=0x00000000003a232c
- (void)registerClass:(Class)arg1 forViewWithReuseIdentifier:(id)arg2;	// IMP=0x00000000003a22b7
- (void)modifyUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000003a1fe1
- (id)existingViewsForReuseIdentifier:(id)arg1;	// IMP=0x00000000003a1dfc
- (id)existingViewForIndex:(long long)arg1;	// IMP=0x00000000003a1d9d
- (void)enumerateExistingViewsForReuseIdentifier:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000003a1bae
- (void)dealloc;	// IMP=0x00000000003a1a0e
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000003a1941

@end
