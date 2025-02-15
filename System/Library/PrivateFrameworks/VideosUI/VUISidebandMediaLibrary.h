//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "VUIDeviceMediaLibrary.h"

@class NSManagedObjectContext, NSObject, NSPersistentContainer;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VUISidebandMediaLibrary : VUIDeviceMediaLibrary
{
    NSPersistentContainer *_persistentContainer;	// 8 = 0x8
    NSManagedObjectContext *_backgroundManagedObjectContext;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_serialQueue;	// 24 = 0x18
}

+ (void)setDeleteAllVideosAndKeysOnInitializationForAppRemoval:(_Bool)arg1;	// IMP=0x0060000000050fbc
+ (void)initialize;	// IMP=0x0060000000050f6c
- (void).cxx_destruct;	// IMP=0x000000000005f78f
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) NSManagedObjectContext *backgroundManagedObjectContext; // @synthesize backgroundManagedObjectContext=_backgroundManagedObjectContext;
@property(retain, nonatomic) NSPersistentContainer *persistentContainer; // @synthesize persistentContainer=_persistentContainer;
- (id)performFetch:(id)arg1;	// IMP=0x000000000005f582
- (void)_dumpDatabaseToLogIfEnabled;	// IMP=0x000000000005f57c
- (void)_activeAccountDidChange:(id)arg1;	// IMP=0x000000000005f48f
- (void)_removeDownloadsForNonSignedInUsers;	// IMP=0x000000000005f286
- (id)_downloadedVideosForNonSignedInUsers;	// IMP=0x000000000005ee71
- (id)_videosMarkedAsDeleted;	// IMP=0x000000000005ec6d
- (void)_pruneVideosAtAppLaunchWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000005d852
- (void)_migrateVideoExpirationDateAndAllowsManualRenewal;	// IMP=0x000000000005d113
- (void)_deleteOrphanedDownloads;	// IMP=0x000000000005c232
- (void)_deleteComingSoonVideoManagedObjects:(id)arg1;	// IMP=0x000000000005bec9
- (void)_deleteVideoManagedObjects:(id)arg1;	// IMP=0x000000000005b460
- (id)_mainContextManagedObjectsForObjects:(id)arg1;	// IMP=0x000000000005b10c
- (void)_mainQueueManagedObjectContextDidSave:(id)arg1;	// IMP=0x000000000005aac6
- (_Bool)_invalidateKeysForVideoManagedObject:(id)arg1 saveWhenDone:(_Bool)arg2 invalidateImmediately:(_Bool)arg3;	// IMP=0x0000000000059da3
- (_Bool)_removeDownloadedMediaForVideoManagedObject:(id)arg1 markAsDeleted:(_Bool)arg2 saveWhenDone:(_Bool)arg3 invalidateImmediately:(_Bool)arg4;	// IMP=0x0000000000059970
- (id)_managedObjectWithEntityName:(id)arg1 predicate:(id)arg2 createIfNeeded:(_Bool)arg3 wasCreated:(_Bool *)arg4;	// IMP=0x000000000005967e
- (unsigned long long)_countForFetchRequest:(id)arg1 usingMainThreadContext:(_Bool)arg2;	// IMP=0x0000000000059321
- (id)_objectsWithFetchRequest:(id)arg1 usingMainThreadContext:(_Bool)arg2;	// IMP=0x0000000000058fb2
- (id)_tvSeriesForAdamID:(id)arg1 createIfNeeded:(_Bool)arg2 wasCreated:(_Bool *)arg3;	// IMP=0x0000000000058f1e
- (id)_tvSeriesForCanonicalID:(id)arg1 createIfNeeded:(_Bool)arg2 wasCreated:(_Bool *)arg3;	// IMP=0x0000000000058e8a
- (id)_availableComingSoonVideos;	// IMP=0x0000000000058c64
- (id)_comingSoonVideoForCanonicalID:(id)arg1 createIfNeeded:(_Bool)arg2 wasCreated:(_Bool *)arg3;	// IMP=0x0000000000058bd0
- (id)_tvSeasonForAdamID:(id)arg1 createIfNeeded:(_Bool)arg2 wasCreated:(_Bool *)arg3;	// IMP=0x0000000000058b3c
- (id)_tvSeasonForCanonicalID:(id)arg1 createIfNeeded:(_Bool)arg2 wasCreated:(_Bool *)arg3;	// IMP=0x0000000000058aa8
- (id)_tvEpisodeForAdamID:(id)arg1 createIfNeeded:(_Bool)arg2 wasCreated:(_Bool *)arg3;	// IMP=0x0000000000058a14
- (id)_movieForAdamID:(id)arg1 createIfNeeded:(_Bool)arg2 wasCreated:(_Bool *)arg3;	// IMP=0x0000000000058980
- (id)_imageLoadOperationWithParams:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3;	// IMP=0x000000000005890f
- (id)_imageLoadParamsForImageLoaderObject:(id)arg1;	// IMP=0x0000000000058891
- (id)_imageLoaderIdentifier;	// IMP=0x0000000000058884
- (id)saveMediaEntity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000058790
- (id)enqueueFetchRequests:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000056ee2
- (id)enqueueMediaItemEntityTypesFetchWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000566cf
- (id)title;	// IMP=0x0000000000056671
- (id)mainContextVideoForVideo:(id)arg1;	// IMP=0x0000000000056589
- (void)saveChangesToManagedObjects;	// IMP=0x0000000000056348
- (void)invalidateKeysForVideoManagedObjects:(id)arg1;	// IMP=0x0000000000056162
- (void)invalidateKeysForVideoManagedObject:(id)arg1;	// IMP=0x00000000000560b5
- (unsigned long long)countOfDownloadedOrDownloadingOrEnqueuedSubscriptionVideosForNonMainQueue;	// IMP=0x0000000000055fe7
- (unsigned long long)countForFetchRequest:(id)arg1 usingMainThreadContext:(_Bool)arg2;	// IMP=0x0000000000055fd5
- (void)removeDownloadedMediaForVideoManagedObjects:(id)arg1 markAsDeleted:(_Bool)arg2 invalidateImmediately:(_Bool)arg3;	// IMP=0x0000000000055dcd
- (void)removeDownloadedMediaForVideoManagedObject:(id)arg1 markAsDeleted:(_Bool)arg2 invalidateImmediately:(_Bool)arg3;	// IMP=0x0000000000055d0f
- (id)episodesWithSeasonCanonicalIds:(id)arg1 usingMainThreadContext:(_Bool)arg2;	// IMP=0x0000000000055c35
- (id)episodesWithDownloadStates:(id)arg1 showCanonicalId:(id)arg2 usingMainThreadContext:(_Bool)arg3;	// IMP=0x0000000000055b2e
- (id)episodesWithDownloadStates:(id)arg1 seasonCanonicalId:(id)arg2 usingMainThreadContext:(_Bool)arg3;	// IMP=0x0000000000055a27
- (id)comingSoonObjectWithCanonicalID:(id)arg1 createIfNeeded:(_Bool)arg2;	// IMP=0x00000000000559b1
- (id)seasonForCanonicalIDOrAdamID:(id)arg1 createIfNeeded:(_Bool)arg2;	// IMP=0x0000000000055910
- (id)seriesForCanonicalIDOrAdamID:(id)arg1;	// IMP=0x0000000000055877
- (id)videosWithExpiredDownloadsUsingMainThreadContext:(_Bool)arg1;	// IMP=0x00000000000557a2
- (id)videosWithDownloadStates:(id)arg1 entitlementTypes:(id)arg2 sortDescriptors:(id)arg3 useMainThreadContext:(_Bool)arg4;	// IMP=0x0000000000055262
- (id)videosWithDownloadState:(long long)arg1 entitlementTypes:(id)arg2 sortDescriptors:(id)arg3 useMainThreadContext:(_Bool)arg4;	// IMP=0x000000000005517e
- (void)deleteFPSKeyDeletionInfos:(id)arg1;	// IMP=0x0000000000054e40
- (void)deleteFPSKeyDeletionInfo:(id)arg1;	// IMP=0x0000000000054d93
- (id)allFpsKeyDeletionInfos;	// IMP=0x0000000000054bd8
- (id)imageInfoForSeries:(id)arg1 imageType:(unsigned long long)arg2 createIfNeeded:(_Bool)arg3 wasCreated:(_Bool *)arg4;	// IMP=0x00000000000548e6
- (id)imageInfoForVideo:(id)arg1 imageType:(unsigned long long)arg2 createIfNeeded:(_Bool)arg3 wasCreated:(_Bool *)arg4;	// IMP=0x00000000000545f4
- (id)existingFpsKeyInfoForKeyURI:(id)arg1;	// IMP=0x000000000005456e
- (id)fpsKeyInfoForVideo:(id)arg1 keyURI:(id)arg2 createIfNeeded:(_Bool)arg3 wasCreated:(_Bool *)arg4;	// IMP=0x0000000000054252
- (id)videosForAdamIDs:(id)arg1 useMainThreadContext:(_Bool)arg2;	// IMP=0x0000000000053d21
- (id)videoForAdamID:(id)arg1 useMainThreadContext:(_Bool)arg2;	// IMP=0x0000000000053c35
- (id)videoForMPMediaItem:(id)arg1;	// IMP=0x0000000000053721
- (id)videoForPlayable:(id)arg1;	// IMP=0x0000000000051931
- (void)dealloc;	// IMP=0x00000000000518bc
- (id)initWithManager:(id)arg1;	// IMP=0x0000000000050fc8
- (unsigned long long)countOfComingSoonVideosWithSeasonCanonicalId:(id)arg1;	// IMP=0x00000000002fa3bd
- (unsigned long long)countOfComingSoonVideosWithShowCanonicalId:(id)arg1;	// IMP=0x00000000002fa203
- (_Bool)hasDownloadingVideosWithSeasonCanonicalId:(id)arg1;	// IMP=0x00000000002fa0e2
- (unsigned long long)countOfDownloadedOrDownloadingVideosWithSeasonCanonicalId:(id)arg1;	// IMP=0x00000000002f9fc1
- (unsigned long long)countOfDownloadedVideosWithSeasonCanonicalId:(id)arg1;	// IMP=0x00000000002f9ee5

@end

