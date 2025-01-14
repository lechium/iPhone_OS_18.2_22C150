//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AAUIAchievementsDataProvider, AAUIBadgeImageFactory, ACHAchievementLocalizationProvider, NSString, UICollectionView;

@interface CHAchievementsRecentAndRelevantDataSource : NSObject
{
    CDUnknownBlockType _achievementTappedHandler;	// 8 = 0x8
    double _preferredCollectionViewHeight;	// 16 = 0x10
    AAUIAchievementsDataProvider *_dataProvider;	// 24 = 0x18
    UICollectionView *_collectionView;	// 32 = 0x20
    ACHAchievementLocalizationProvider *_localizationProvider;	// 40 = 0x28
    AAUIBadgeImageFactory *_badgeImageFactory;	// 48 = 0x30
    double _maxCellHeight;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000001bdf6
@property(nonatomic) double maxCellHeight; // @synthesize maxCellHeight=_maxCellHeight;
@property(retain, nonatomic) AAUIBadgeImageFactory *badgeImageFactory; // @synthesize badgeImageFactory=_badgeImageFactory;
@property(retain, nonatomic) ACHAchievementLocalizationProvider *localizationProvider; // @synthesize localizationProvider=_localizationProvider;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) AAUIAchievementsDataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
@property(nonatomic) double preferredCollectionViewHeight; // @synthesize preferredCollectionViewHeight=_preferredCollectionViewHeight;
@property(copy, nonatomic) CDUnknownBlockType achievementTappedHandler; // @synthesize achievementTappedHandler=_achievementTappedHandler;
- (void)achievementsDataProviderDidUpdate:(id)arg1;	// IMP=0x001000000001bd0e
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x001000000001bb79
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x001000000001b838
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;	// IMP=0x001000000001b822
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;	// IMP=0x001000000001b761
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;	// IMP=0x001000000001b757
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;	// IMP=0x001000000001b74d
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x001000000001b6c1
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x001000000001b67f
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x001000000001b62c
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x001000000001b5e8
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x001000000001b46e
- (void)dealloc;	// IMP=0x001000000001b429
- (double)cellWidth;	// IMP=0x001000000001b029
- (void)invalidateMaxCellHeight;	// IMP=0x001000000001b015
- (double);	// IMP=0x001000000001af7a
- (void)fontChanged:(id)arg1;	// IMP=0x001000000001af00
- (id)initWithDataProvider:(id)arg1 collectionView:(id)arg2 localizationProvider:(id)arg3 badgeImageFactory:(id)arg4;	// IMP=0x001000000001abed

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

