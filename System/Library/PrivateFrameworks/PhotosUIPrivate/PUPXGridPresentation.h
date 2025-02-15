//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PHPhotoLibrary, PUSessionInfo;

__attribute__((visibility("hidden")))
@interface PUPXGridPresentation : NSObject
{
    PUSessionInfo *_sessionInfo;	// 8 = 0x8
    PHPhotoLibrary *_photoLibrary;	// 16 = 0x10
    long long _userInterfaceIdiom;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000004294f5
@property(readonly, nonatomic) long long userInterfaceIdiom; // @synthesize userInterfaceIdiom=_userInterfaceIdiom;
@property(readonly, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(retain, nonatomic) PUSessionInfo *sessionInfo; // @synthesize sessionInfo=_sessionInfo;
- (void)_customizePhotosViewConfiguationForAssetPicker:(id)arg1 assetCollection:(id)arg2;	// IMP=0x000000000042921f
- (id)createDuplicatesGridViewControllerWithCollection:(id)arg1;	// IMP=0x0000000000428fd1
- (id)createImportHistoryGridViewControllerWithCollection:(id)arg1;	// IMP=0x0000000000428acd
- (id)createPanoramaViewController;	// IMP=0x0000000000428797
- (id)createAssetPickerPhotosAlbumViewControllerForAlbum:(id)arg1;	// IMP=0x00000000004285e0
- (id)createPhotosAlbumViewControllerForAlbum:(id)arg1 withFetchResult:(id)arg2;	// IMP=0x0000000000428479
- (id)createPlacesViewControllerForAssetCollection:(id)arg1;	// IMP=0x00000000004282c4
- (id)createViewControllerForAssetCollection:(id)arg1 existingAssetsFetchResult:(id)arg2;	// IMP=0x0000000000428126
- (id)createViewControllerForAssetCollection:(id)arg1;	// IMP=0x0000000000428112
- (_Bool)_isEmpty:(id)arg1;	// IMP=0x0000000000427fd7
- (id)initWithUserInterfaceIdiom:(long long)arg1;	// IMP=0x0000000000427f66
- (id)init;	// IMP=0x0000000000427eec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

