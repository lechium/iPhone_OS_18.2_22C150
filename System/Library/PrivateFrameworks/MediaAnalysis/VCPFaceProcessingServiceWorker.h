//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL, PHPhotoLibrary, VCPClusterer, VCPPhotosFaceProcessingContext, VCPPhotosPersistenceDelegate;

@interface VCPFaceProcessingServiceWorker : NSObject
{
    PHPhotoLibrary *_photoLibrary;	// 8 = 0x8
    VCPPhotosFaceProcessingContext *_context;	// 16 = 0x10
    VCPClusterer *_clusterer;	// 24 = 0x18
    VCPPhotosPersistenceDelegate *_persistenceDelegate;	// 32 = 0x20
    NSURL *_suggestionLoggingDirectory;	// 40 = 0x28
    _Bool _suggestionLoggingSessionOpen;	// 48 = 0x30
    _Bool _suggestionsLoggingEnabled;	// 49 = 0x31
}

+ (float)_similarityScoreThreshold;	// IMP=0x006000000022cc70
+ (id)newAllPersonsWithAtLeastOneFaceFetchOptionsWithPhotoLibrary:(id)arg1;	// IMP=0x006000000022be09
+ (id)newAllFacesFetchOptionsWithPhotoLibrary:(id)arg1;	// IMP=0x006000000022bd76
+ (_Bool)_includeTorsoOnlyFaces;	// IMP=0x006000000022bd6e
+ (id)workerWithPhotoLibrary:(id)arg1 andContext:(id)arg2;	// IMP=0x006000000022b911
- (void).cxx_destruct;	// IMP=0x0000000000231ced
- (void)resetPersonPromoterStatusWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000231b93
- (void)rebuildPersonsWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2 extendTimeout:(CDUnknownBlockType)arg3 cancel:(CDUnknownBlockType)arg4;	// IMP=0x000000000023169c
- (void)reclusterFacesWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2 extendTimeout:(CDUnknownBlockType)arg3 cancel:(CDUnknownBlockType)arg4;	// IMP=0x0000000000230b26
- (_Bool)_deleteAllVerifiedPersonsWithError:(id *)arg1;	// IMP=0x0000000000230784
- (void)resetFaceClusteringStateWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000002304d6
- (void)validateClusterCacheWithContext:(id)arg1 cancelOrExtendTimeoutBlock:(CDUnknownBlockType)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000022fff5
- (void)personPromoterStatusWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000022fd5d
- (void)requestSuggestedMePersonIdentifierWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000022fbaf
- (void)resetPetsModelWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000022f98c
- (void)resetPersonsModelWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000022f76c
- (void)faceCandidatesforKeyFaceForPersonsWithLocalIdentifiers:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000022f0d1
- (void)suggestPersonsForPersonWithLocalIdentifier:(id)arg1 toBeConfirmedPersonSuggestions:(id)arg2 toBeRejectedPersonSuggestions:(id)arg3 context:(id)arg4 cancelOrExtendTimeoutBlock:(CDUnknownBlockType)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x000000000022ec5d
- (id)_suggestionsForPersonWithLocalIdentifier:(id)arg1 toBeConfirmedPersonSuggestions:(id)arg2 toBeRejectedPersonSuggestions:(id)arg3 cancelOrExtendTimeoutBlock:(CDUnknownBlockType)arg4 error:(id *)arg5;	// IMP=0x000000000022cc7e
- (id)_suggestionsForPersonLocalIdentifier:(id)arg1 clusterSequenceNumbers:(id)arg2 excludePersonLocalIdentifiers:(id)arg3 context:(id)arg4 cancelOrExtendTimeoutBlock:(CDUnknownBlockType)arg5 error:(id *)arg6;	// IMP=0x000000000022c65a
- (void)updateKeyFacesOfPersonsWithLocalIdentifiers:(id)arg1 forceUpdate:(_Bool)arg2 context:(id)arg3 cancelOrExtendTimeoutBlock:(CDUnknownBlockType)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x000000000022c504
- (void)_startAndSyncClusterCacheWithLibrary:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000022c297
- (void)_finalizeSuggestionsLog;	// IMP=0x000000000022beca
- (void)_logFaceToSuggestionsLog:(id)arg1;	// IMP=0x000000000022be6f
- (void)_copyImageAtURLToSuggestionsLoggingSession:(id)arg1;	// IMP=0x000000000022bc7a
- (void)_appendToSuggestionsLog:(id)arg1;	// IMP=0x000000000022bba6
- (void)_closeSuggestionsLoggingSession;	// IMP=0x000000000022bb80
- (void)_openSuggestionsLoggingSession;	// IMP=0x000000000022b987
- (id)initWithPhotoLibrary:(id)arg1 andContext:(id)arg2;	// IMP=0x000000000022b819

@end

