//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class UICollectionView, UICollectionViewCompositionalLayout;

__attribute__((visibility("hidden")))
@interface MRUMediaSuggestionsView : UIView
{
    _Bool _supportsHorizontalLayout;	// 8 = 0x8
    UICollectionViewCompositionalLayout *_collectionViewLayout;	// 16 = 0x10
    UICollectionView *_collectionView;	// 24 = 0x18
    long long _layout;	// 32 = 0x20
    double _contentScale;	// 40 = 0x28
    struct UIEdgeInsets _contentEdgeInsets;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000004f24c
@property(nonatomic) double contentScale; // @synthesize contentScale=_contentScale;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
@property(nonatomic) _Bool supportsHorizontalLayout; // @synthesize supportsHorizontalLayout=_supportsHorizontalLayout;
@property(nonatomic) long long layout; // @synthesize layout=_layout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic) UICollectionViewCompositionalLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
- (long long)numberOfColumns;	// IMP=0x000000000004f195
- (long long)numberOfRows;	// IMP=0x000000000004f160
- (double)itemHeightForItemWidth:(double)arg1;	// IMP=0x000000000004f069
- (double)itemWidthForWidth:(double)arg1;	// IMP=0x000000000004ee51
- (_Bool)acuis_wantsPriorityOverTargetOfGestureRecognizer:(id)arg1;	// IMP=0x000000000004ee49
- (void)updateCollectionViewLayout;	// IMP=0x000000000004e825
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x000000000004e6b5
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000004e644
- (void)layoutSubviews;	// IMP=0x000000000004e5c3
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000004e482

@end

