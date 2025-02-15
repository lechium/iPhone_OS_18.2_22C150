//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUIFoundation/PXObservable.h>

@class NSString, PHFetchResult, PHPerson, PHSocialGroup, PUPhotoSelectionManager, PXPhotosDataSource;
@protocol PXDisplayAsset;

__attribute__((visibility("hidden")))
@interface PUActivitySharingViewModel : PXObservable
{
    _Bool _actionSheet;	// 8 = 0x8
    PHFetchResult *_collectionListFetchResult;	// 16 = 0x10
    PUPhotoSelectionManager *_selectionManager;	// 24 = 0x18
    PXPhotosDataSource *_photosDataSource;	// 32 = 0x20
    NSString *_localizedTitle;	// 40 = 0x28
    NSString *_localizedSubtitle;	// 48 = 0x30
    id <PXDisplayAsset> _keyAsset;	// 56 = 0x38
    PHPerson *_person;	// 64 = 0x40
    PHSocialGroup *_socialGroup;	// 72 = 0x48
    long long _sourceOrigin;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000601106
@property(readonly, nonatomic) long long sourceOrigin; // @synthesize sourceOrigin=_sourceOrigin;
@property(readonly, nonatomic) PHSocialGroup *socialGroup; // @synthesize socialGroup=_socialGroup;
@property(readonly, nonatomic) PHPerson *person; // @synthesize person=_person;
@property(readonly, nonatomic) id <PXDisplayAsset> keyAsset; // @synthesize keyAsset=_keyAsset;
@property(readonly, copy, nonatomic) NSString *localizedSubtitle; // @synthesize localizedSubtitle=_localizedSubtitle;
@property(readonly, copy, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(readonly, nonatomic, getter=isActionSheet) _Bool actionSheet; // @synthesize actionSheet=_actionSheet;
@property(readonly, nonatomic) PXPhotosDataSource *photosDataSource; // @synthesize photosDataSource=_photosDataSource;
@property(retain, nonatomic) PUPhotoSelectionManager *selectionManager; // @synthesize selectionManager=_selectionManager;
@property(readonly, nonatomic) PHFetchResult *collectionListFetchResult; // @synthesize collectionListFetchResult=_collectionListFetchResult;
- (void)setActionSheet:(_Bool)arg1;	// IMP=0x0000000000601032
- (void)performChanges:(CDUnknownBlockType)arg1;	// IMP=0x0000000000601003
- (id)mutableChangeObject;	// IMP=0x0000000000600ffa
- (id)init;	// IMP=0x0000000000600ee0
- (id)initWithActivitySharingConfiguration:(id)arg1;	// IMP=0x0000000000600cd9

@end

