//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewController.h>

@class MISSING_TYPE;

@interface _TtC18HealthExperienceUI42CompoundDataSourceCollectionViewController : UICollectionViewController
{
    MISSING_TYPE *dataSourceProvider;	// 8 = 0x8
    MISSING_TYPE *usesAdaptiveMargins;	// 48 = 0x30
    MISSING_TYPE *$__lazy_storage_$_dataSource;	// 56 = 0x38
    MISSING_TYPE *dataSourceAdaptor;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000001cf430
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000001cf3d0
- (void)observedTraitsDidChangeWithTraitEnvironment:(id)arg1 previousTraitCollection:(id)arg2;	// IMP=0x00000000001cf2c0
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000000001cf2b0
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000001cf240
- (void)viewIsAppearing:(_Bool)arg1;	// IMP=0x00000000001cf210
- (void)viewDidLoad;	// IMP=0x00000000001cf0a0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001ce7f0
- (id)initWithCollectionViewLayout:(id)arg1;	// IMP=0x00000000001ce6e0
- (id)collectionView:(id)arg1 targetIndexPathForMoveOfItemFromOriginalIndexPath:(id)arg2 atCurrentIndexPath:(id)arg3 toProposedIndexPath:(id)arg4;	// IMP=0x00000000001d0470
- (_Bool)collectionView:(id)arg1 selectionFollowsFocusForItemAtIndexPath:(id)arg2;	// IMP=0x00000000001d0330
- (id)collectionView:(id)arg1 contextMenuConfigurationForItemAtIndexPath:(id)arg2 point:(struct CGPoint)arg3;	// IMP=0x00000000001d0100
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000000001d0040
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;	// IMP=0x00000000001cfdf0
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000000001cfc80

@end

