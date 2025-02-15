//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIStorePageSection.h"

@class ACAccountStore, SKUIFacebookLikeStatus, SKUIFacebookPageComponent, SKUIReviewsFacebookView, SKUIViewElementLayoutContext;

__attribute__((visibility("hidden")))
@interface SKUIFacebookPageSection : SKUIStorePageSection
{
    ACAccountStore *_accountStore;	// 8 = 0x8
    BOOL _facebookAccountsExist;	// 16 = 0x10
    SKUIReviewsFacebookView *_facebookView;	// 24 = 0x18
    _Bool _isLoadingLikeStatus;	// 32 = 0x20
    SKUIViewElementLayoutContext *_layoutContext;	// 40 = 0x28
    SKUIFacebookLikeStatus *_likeStatus;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000032a74a
- (void)_resetState;	// IMP=0x000000000032a609
- (void)_reloadLikeStatus;	// IMP=0x000000000032a2f3
- (void)_reloadCollectionViewSection;	// IMP=0x000000000032a20e
- (void)_finishLookupWithStatus:(id)arg1 error:(id)arg2;	// IMP=0x0000000000329ff7
- (id)_facebookView;	// IMP=0x0000000000329e72
- (long long)_facebookAccountsExist;	// IMP=0x0000000000329de0
- (void)_changeStatusToUserLiked:(_Bool)arg1;	// IMP=0x0000000000329d3a
- (void)_applyColorSchemeToFacebookView:(id)arg1;	// IMP=0x0000000000329bb0
- (id)_accountStore;	// IMP=0x0000000000329aec
- (void)_accountStoreDidChangeNotification:(id)arg1;	// IMP=0x0000000000329a16
- (void)_toggleLikeAction:(id)arg1;	// IMP=0x00000000003297bf
- (void)willAppearInContext:(id)arg1;	// IMP=0x000000000032969c
- (long long)numberOfCells;	// IMP=0x000000000032967e
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;	// IMP=0x0000000000329587
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;	// IMP=0x0000000000329490
- (struct CGSize)cellSizeForIndexPath:(id)arg1;	// IMP=0x00000000003293d9
- (id)cellForIndexPath:(id)arg1;	// IMP=0x00000000003292cd
- (long long)applyUpdateType:(long long)arg1;	// IMP=0x000000000032929c
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;	// IMP=0x0000000000329215
- (void)dealloc;	// IMP=0x0000000000329140
- (id)initWithPageComponent:(id)arg1;	// IMP=0x0000000000329099

// Remaining properties
@property(readonly, nonatomic) SKUIFacebookPageComponent *pageComponent; // @dynamic pageComponent;

@end

