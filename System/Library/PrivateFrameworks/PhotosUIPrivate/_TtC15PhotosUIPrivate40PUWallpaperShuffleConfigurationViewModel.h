//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC15PhotosUIPrivate40PUWallpaperShuffleConfigurationViewModel : NSObject
{
    MISSING_TYPE *photoLibrary;	// 8 = 0x8
    MISSING_TYPE *contentMode;	// 16 = 0x10
    MISSING_TYPE *posterConfiguration;	// 24 = 0x18
    MISSING_TYPE *finishHandler;	// 32 = 0x20
    MISSING_TYPE *cancelHandler;	// 48 = 0x30
    MISSING_TYPE *showAssetPreviews;	// 64 = 0x40
    MISSING_TYPE *centerMedia;	// 72 = 0x48
    MISSING_TYPE *presentationState;	// 80 = 0x50
    MISSING_TYPE *$__lazy_storage_$_assetPreviewViewModel;	// 88 = 0x58
    MISSING_TYPE *$__lazy_storage_$_smartAlbumDataSource;	// 96 = 0x60
    MISSING_TYPE *_selectedSmartAlbumsType;	// 0 = 0x0
    MISSING_TYPE *_availableSmartAlbums;	// 0 = 0x0
    MISSING_TYPE *_isFinishingWithFeaturedPhotos;	// 0 = 0x0
    MISSING_TYPE *peoplePickerHandler;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *$__lazy_storage_$_peoplePickerDataSource;	// 0 = 0x0
    MISSING_TYPE *albumPickerHandler;	// 0 = 0x0
    MISSING_TYPE *_isUserAlbumSelected;	// 0 = 0x0
    MISSING_TYPE *_userAlbumAssetCollection;	// 0 = 0x0
    MISSING_TYPE *availableShuffleFrequencies;	// 7341264 = 0x7004d0
    MISSING_TYPE *_selectedShuffleFrequencyType;	// 0 = 0x0
    MISSING_TYPE *manualSelectionPhotoPickerHandler;	// 74952 = 0x124c8
    MISSING_TYPE *manuallySelectedAssetIdentifiers;	// 7341264 = 0x7004d0
}

- (void).cxx_destruct;	// IMP=0x00000000000ba90f
- (id)init;	// IMP=0x00000000000ba8da
- (void)passiveContentDataSourcePreviewAssetsDidChange:(id)arg1;	// IMP=0x00000000000bd247
- (void)passiveContentDataSourceAvailableTypesDidChange:(id)arg1;	// IMP=0x00000000000bcd86
- (void)passiveContentPeoplePickerDataSourceChanged:(id)arg1;	// IMP=0x00000000000bd4d3

@end
