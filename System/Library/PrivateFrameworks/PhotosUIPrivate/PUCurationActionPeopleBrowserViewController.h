//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXPeopleDetailSettingsViewController.h>

@class NSMutableDictionary, PUCurationActionAssetBrowserViewController, PUCurationTraitContainer;

__attribute__((visibility("hidden")))
@interface PUCurationActionPeopleBrowserViewController : PXPeopleDetailSettingsViewController
{
    PUCurationTraitContainer *_traitContainer;	// 8 = 0x8
    PUCurationActionAssetBrowserViewController *_assetBrowserViewController;	// 16 = 0x10
    NSMutableDictionary *_facesByPersonLocalIdentifier;	// 24 = 0x18
    NSMutableDictionary *_detectionTraitsByFaceLocalIdentifierByPersonLocalIdentifier;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000172cd8
@property(retain, nonatomic) NSMutableDictionary *detectionTraitsByFaceLocalIdentifierByPersonLocalIdentifier; // @synthesize detectionTraitsByFaceLocalIdentifierByPersonLocalIdentifier=_detectionTraitsByFaceLocalIdentifierByPersonLocalIdentifier;
@property(retain, nonatomic) NSMutableDictionary *facesByPersonLocalIdentifier; // @synthesize facesByPersonLocalIdentifier=_facesByPersonLocalIdentifier;
@property(retain, nonatomic) PUCurationActionAssetBrowserViewController *assetBrowserViewController; // @synthesize assetBrowserViewController=_assetBrowserViewController;
@property(retain, nonatomic) PUCurationTraitContainer *traitContainer; // @synthesize traitContainer=_traitContainer;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000000172a25
- (id)initWithTraitContainer:(id)arg1;	// IMP=0x0000000000172818

@end

