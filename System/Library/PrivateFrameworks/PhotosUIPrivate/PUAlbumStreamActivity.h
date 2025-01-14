//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXActivity.h>

@class NSObject, NSString, UIViewController;
@protocol PLUserEditableAlbumProtocol, PXActivityItemSourceController;

__attribute__((visibility("hidden")))
@interface PUAlbumStreamActivity : PXActivity
{
    UIViewController *_activityController;	// 8 = 0x8
    _Bool _isPresentedFromActivityViewController;	// 16 = 0x10
    _Bool _destinationSharedAlbumWasCreated;	// 17 = 0x11
    id <PXActivityItemSourceController> _itemSourceController;	// 24 = 0x18
    NSObject<PLUserEditableAlbumProtocol> *_destinationSharedAlbum;	// 32 = 0x20
    UIViewController *_referenceViewController;	// 40 = 0x28
}

+ (long long)activityCategory;	// IMP=0x00100000001f8c64
+ (_Bool)canPerformWithAssets:(id)arg1;	// IMP=0x00100000001f8a70
- (void).cxx_destruct;	// IMP=0x00000000001f845e
@property(nonatomic) __weak UIViewController *referenceViewController; // @synthesize referenceViewController=_referenceViewController;
@property _Bool destinationSharedAlbumWasCreated; // @synthesize destinationSharedAlbumWasCreated=_destinationSharedAlbumWasCreated;
@property(retain, nonatomic) NSObject<PLUserEditableAlbumProtocol> *destinationSharedAlbum; // @synthesize destinationSharedAlbum=_destinationSharedAlbum;
@property(nonatomic, setter=setPresentedFromActivityViewController:) _Bool isPresentedFromActivityViewController; // @synthesize isPresentedFromActivityViewController=_isPresentedFromActivityViewController;
- (void)setItemSourceController:(id)arg1;	// IMP=0x00000000001f83b6
- (id)itemSourceController;	// IMP=0x00000000001f839d
- (void)sharedAlbumActionControllerDidCancel:(id)arg1;	// IMP=0x00000000001f8389
- (void)sharedAlbumActionControllerDidFinish:(id)arg1;	// IMP=0x00000000001f8372
- (void)_publishAssets:(id)arg1 withSharingInfos:(id)arg2 customExportsInfo:(id)arg3 andTrimmedVideoPathInfo:(id)arg4 comment:(id)arg5 invitationRecipients:(id)arg6 wantsPublicWebsite:(_Bool)arg7 toAlbum:(id)arg8 orCreateWithName:(id)arg9 completion:(CDUnknownBlockType)arg10;	// IMP=0x00000000001f81a2
- (void)_publishAssets:(id)arg1 withSharingInfos:(id)arg2 customExportsInfo:(id)arg3 andTrimmedVideoPathInfo:(id)arg4 comment:(id)arg5 toAlbum:(id)arg6 isNewAlbum:(_Bool)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x00000000001f8034
- (void)presentActivityOnViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001f7f60
- (_Bool)_presentActivityOnViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001f7f48
- (void)_performPresentationOnViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001f7e6b
- (void)_handleDismissWithSuccess:(_Bool)arg1;	// IMP=0x00000000001f7d54
- (id)activityViewController;	// IMP=0x00000000001f7d3f
- (void)prepareWithAssets:(id)arg1;	// IMP=0x00000000001f7d2d
- (void)_prepareWithAssets:(id)arg1;	// IMP=0x00000000001f7aa6
- (id)_perAssetCreationOptionsForAssets:(id)arg1;	// IMP=0x00000000001f788e
- (void)prepareWithActivityItems:(id)arg1;	// IMP=0x00000000001f7820
- (_Bool)canPerformWithActivityItems:(id)arg1;	// IMP=0x00000000001f7744
- (id)_systemImageName;	// IMP=0x00000000001f7737
- (id)activityTitle;	// IMP=0x00000000001f7726
- (id)activityType;	// IMP=0x00000000001f7712
- (id)init;	// IMP=0x00000000001f76d3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

