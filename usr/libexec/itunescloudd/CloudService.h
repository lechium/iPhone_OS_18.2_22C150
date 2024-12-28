//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSString;
@protocol ICDHandlerProviding;

@interface CloudService : NSObject
{
    NSString *_requestingBundleID;	// 8 = 0x8
    id <ICDHandlerProviding> _handlerProvider;	// 16 = 0x10
    NSOperationQueue *_operationQueue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000a2a9f
@property(readonly, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly, nonatomic) __weak id <ICDHandlerProviding> handlerProvider; // @synthesize handlerProvider=_handlerProvider;
@property(copy, nonatomic) NSString *requestingBundleID; // @synthesize requestingBundleID=_requestingBundleID;
- (void)_updateSagaLibraryWithReason:(long long)arg1 allowNoisyAuthPrompt:(_Bool)arg2 forConfiguration:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000a2814
- (void)listCloudServerOperations;	// IMP=0x00100000000a27d0
- (void)processPendingKeyInvalidations;	// IMP=0x00100000000a278c
- (void);	// IMP=0x00100000000a2748
- (void)refreshEnhancedAudioSharedKeys;	// IMP=0x00100000000a2704
- (void)resetInvitationURLForCollaborationWithPersistentID:(long long)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000a24c7
- (void)removeCollaborators:(id)arg1 fromCollaborationWithPersistentID:(long long)arg2 configuration:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000a2227
- (void)respondToPendingCollaborator:(id)arg1 onCollaborationWithPersistentID:(long long)arg2 withApproval:(_Bool)arg3 configuration:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000000a1f9c
- (void)joinCollaborationWithGlobalPlaylistID:(id)arg1 invitationURL:(id)arg2 configuration:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000a1d1a
- (void)editCollaborationWithPersistentID:(long long)arg1 configuration:(id)arg2 properties:(id)arg3 trackEdits:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000000a1a92
- (void)endCollaborationWithPersistentID:(long long)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000a1855
- (void)beginCollaborationUsingPlaylistWithPersistentID:(long long)arg1 sharingMode:(unsigned long long)arg2 configuration:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000a160f
- (void)updatePinnedSubscribedPlaylistsWithConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a1451
- (void)disableCloudLibraryWithReason:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a12e4
- (void)authenticateForConfiguration:(id)arg1 startInitialImport:(_Bool)arg2 enableCloudLibraryPolicy:(long long)arg3 isExplicitUserAction:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000000a11d5
- (void)loadUpdateProgressForConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a1005
- (void)loadIsUpdateInProgressForConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a0e2f
- (void)importSubscriptionContainerArtworkForPersistentID:(long long)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000a0c7a
- (void)loadMissingArtworkForConfiguration:(id)arg1;	// IMP=0x00100000000a0ac6
- (void)loadArtworkInfoForSubscriptionContainerPersistentIDs:(id)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000a0884
- (void)loadScreenshotInfoForSubscriptionPersistentIDs:(id)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000a0642
- (void)loadArtworkInfoForSubscriptionItemPersistentIDs:(id)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000a0400
- (void)deprioritizeSubscriptionContainerArtworkForPersistentID:(long long)arg1 configuration:(id)arg2;	// IMP=0x00100000000a02a2
- (void)deprioritizeSubscriptionScreenshotForPersistentID:(long long)arg1 configuration:(id)arg2;	// IMP=0x00100000000a0144
- (void)deprioritizeSubscriptionItemArtworkForPersistentID:(long long)arg1 configuration:(id)arg2;	// IMP=0x001000000009ffe6
- (void)importSubscriptionScreenshotForPersistentID:(long long)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000009fe31
- (void)importSubscriptionItemArtworkForPersistentID:(long long)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000009fc7c
- (void)importAlbumArtistHeroImageForPersistentID:(long long)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000009f964
- (void)importArtistHeroImageForPersistentID:(long long)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000009f64c
- (void)updateArtistHeroImagesForConfiguration:(id)arg1;	// IMP=0x001000000009f41d
- (void)deprioritizeAlbumArtistHeroImageForPersistentID:(long long)arg1 configuration:(id)arg2;	// IMP=0x001000000009f2c0
- (void)deprioritizeArtistHeroImageForPersistentID:(long long)arg1 configuration:(id)arg2;	// IMP=0x001000000009f163
- (void)setItemProperties:(id)arg1 forPurchaseHistoryID:(unsigned long long)arg2 configuration:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000009ef58
- (void)hideItemsWithPurchaseHistoryIDs:(id)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000009ed73
- (void)loadBooksForStoreIDs:(id)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000009e975
- (void)loadScreenshotInfoForPurchaseHistoryIDs:(id)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000009e732
- (void)loadArtworkInfoForPurchaseHistoryIDs:(id)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000009e4ef
- (void)deprioritizeScreenshotForPurchaseHistoryID:(unsigned long long)arg1 configuration:(id)arg2;	// IMP=0x001000000009e384
- (void)deprioritizeItemArtworkForPurchaseHistoryID:(unsigned long long)arg1 configuration:(id)arg2;	// IMP=0x001000000009e219
- (void)importScreenshotForPurchaseHistoryID:(unsigned long long)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000009e055
- (void)importItemArtworkForPurchaseHistoryID:(unsigned long long)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000009de91
- (void)loadJaliscoUpdateProgressForConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000009dca1
- (void)loadIsJaliscoUpdateInProgressForConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000009dacb
- (void)isMediaKindDisabledForJaliscoLibrary:(long long)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000009d8b9
- (void)removeJaliscoLibraryForConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000009d6b1
- (void)setupInitialJaliscoPoolingForConfiguration:(id)arg1;	// IMP=0x001000000009d336
- (void)favoriteArtistWithPersistentID:(long long)arg1 cloudLibraryID:(id)arg2 time:(id)arg3 configuration:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000009d110
- (void)favoriteAlbumWithPersistentID:(long long)arg1 cloudLibraryID:(id)arg2 time:(id)arg3 configuration:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000009ceea
- (void)favoriteEntityWithPersistentID:(long long)arg1 sagaID:(long long)arg2 entityType:(long long)arg3 time:(id)arg4 configuration:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x001000000009ccd3
- (void)favoritePlaylistWithPersistentID:(long long)arg1 globalID:(id)arg2 time:(id)arg3 configuration:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000009caad
- (void)favoriteEntityWithPersistentID:(long long)arg1 storeID:(long long)arg2 entityType:(long long)arg3 time:(id)arg4 configuration:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x001000000009c896
- (void)sdk_addStoreItemWithOpaqueID:(id)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000009c793
- (void)sdk_addItemWithSagaID:(long long)arg1 toPlaylistWithPersistentID:(long long)arg2 configuration:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000009c565
- (void)sdk_addStoreItemWithOpaqueID:(id)arg1 toPlaylistWithPersistentID:(long long)arg2 configuration:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000009c2e7
- (void)sdk_createPlaylistWithPersistentID:(long long)arg1 properties:(id)arg2 trackList:(id)arg3 configuration:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000009c066
- (void)setAlbumArtistProperties:(id)arg1 forAlbumArtistPersistentID:(long long)arg2 configuration:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000009be5b
- (void)setAlbumEntityProperties:(id)arg1 forAlbumPersistentID:(long long)arg2 configuration:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000009bc50
- (void)setAlbumProperties:(id)arg1 forAlbumPersistentID:(long long)arg2 configuration:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000009ba45
- (void)uploadCloudPlaylistPropertiesForConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000009b898
- (void)uploadCloudItemPropertiesForConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000009b6eb
- (void)setItemProperties:(id)arg1 forSagaID:(unsigned long long)arg2 configuration:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000009b4e0
- (void)loadLastKnownEnableICMLErrorStatusForConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000009b311
- (void)removeItemsWithSagaIDs:(id)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000009b12c
- (void)addStorePlaylistWithGlobalID:(id)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000009aeea
- (void)addStoreItemWithAdamID:(long long)arg1 referral:(id)arg2 configuration:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000009ac92
- (void)updateSubscribedPlaylistsWithSagaIDs:(id)arg1 ignoreMinRefreshInterval:(_Bool)arg2 configuration:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000009aa89
- (void)uploadArtworkForPlaylistWithPersistentID:(long long)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000009a8c5
- (void)removePlaylistsWithSagaIDs:(id)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000009a6e0
- (void)publishPlaylistWithSagaID:(long long)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000009a4bd
- (void)addItemWithSagaID:(long long)arg1 toPlaylistWithPersistentID:(long long)arg2 configuration:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000009a2d9
- (void)addStoreItemWithAdamID:(long long)arg1 referral:(id)arg2 toPlaylistWithPersistentID:(long long)arg3 configuration:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000009a0a0
- (void)sdk_setPlaylistProperties:(id)arg1 trackList:(id)arg2 forPlaylistPersistentID:(long long)arg3 configuration:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000099e29
- (void)setPlaylistProperties:(id)arg1 trackList:(id)arg2 forPlaylistPersistentID:(long long)arg3 configuration:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000099bfe
- (void)createPlaylistWithPersistentID:(long long)arg1 properties:(id)arg2 trackList:(id)arg3 configuration:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000009995b
- (void)addGeniusPlaylistWithPersistentID:(long long)arg1 name:(id)arg2 seedItemSagaIDs:(id)arg3 itemSagaIDs:(id)arg4 configuration:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00100000000996cc
- (void)loadGeniusItemsForSagaID:(unsigned long long)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000994ab
- (void)loadScreenshotInfoForSagaIDs:(id)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000099268
- (void)loadArtworkInfoForContainerSagaIDs:(id)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000099025
- (void)loadArtworkInfoForSagaIDs:(id)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000098de2
- (void)deprioritizeContainerArtworkForSagaID:(unsigned long long)arg1 configuration:(id)arg2;	// IMP=0x0010000000098c77
- (void)deprioritizeScreenshotForSagaID:(unsigned long long)arg1 configuration:(id)arg2;	// IMP=0x0010000000098b0c
- (void)deprioritizeItemArtworkForSagaID:(unsigned long long)arg1 configuration:(id)arg2;	// IMP=0x00100000000989a1
- (void)importContainerArtworkForSagaID:(unsigned long long)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000987dd
- (void)importScreenshotForSagaID:(unsigned long long)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000098619
- (void)importItemArtworkForSagaID:(unsigned long long)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000098455
- (void)loadSagaUpdateProgressForConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000098262
- (void)loadIsSagaUpdateInProgressForConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000009808c
- (void)setCloudFavoriteSongAddToLibraryBehavior:(long long)arg1 forConfiguration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000097ec8
- (void)setCloudAddToPlaylistBehavior:(long long)arg1 forConfiguration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000097d04
- (void)deauthenticateForConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000097b50
- (void)updateJaliscoLibraryWithReason:(long long)arg1 forConfiguration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000009798c
- (void)isSagaAuthenticatedForConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000097897
- (void)setPreferredVideoQuality:(long long)arg1 forConfiguration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000977f0
- (void)updateSagaLibraryWithReason:(long long)arg1 forConfiguration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000097625
- (void)setupInitialSagaPoolingForConfiguration:(id)arg1;	// IMP=0x00100000000973a6
- (id)initWithHandlerProvider:(id)arg1;	// IMP=0x00100000000972e2

@end
