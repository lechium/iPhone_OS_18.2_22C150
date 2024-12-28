//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICMusicLibraryArtistAffinityAnalyzer, NSNumber, NSString;
@protocol NSCopying, OS_dispatch_queue;

@interface ICMusicLibraryRecommendationController : NSObject
{
    ICMusicLibraryArtistAffinityAnalyzer *_affinityAnalyzer;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_accessQueue;	// 16 = 0x10
    _Bool _userHasOptedIn;	// 24 = 0x18
    _Bool _userHasEverToggledOptInSwitch;	// 25 = 0x19
    id <NSCopying> _subscriptionObservationToken;	// 32 = 0x20
    _Bool _isSystemService;	// 40 = 0x28
    _Bool _failedToPerformAnalysis;	// 41 = 0x29
    NSNumber *_lastSeenDSID;	// 48 = 0x30
    double _lastTimePeriodicXPCFired;	// 56 = 0x38
    double _refreshIntervalFromBag;	// 64 = 0x40
}

+ (id)sharedLibraryRecommendationController;	// IMP=0x00200000000d4bd9
- (void).cxx_destruct;	// IMP=0x00200000000cee13
- (id)_createLocalNotificationDictionaryForRecommendationResult:(id)arg1 storePlatformMetadata:(id)arg2 recommendationID:(id)arg3 identifier:(id)arg4;	// IMP=0x00100000000ce088
- (void)_updateOptInIfNecessary;	// IMP=0x00100000000cdfbb
- (void)_optInMessageForPriorityMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000cdec0
- (id)_optInMessageContentForPriorityMessageContent:(id)arg1;	// IMP=0x00100000000cdd28
- (void)_createApplicationMessagesForResult:(id)arg1 artistNewContentResponse:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000cdade
- (void)_cleanupExpiredApplicationMessages;	// IMP=0x00100000000cda11
- (id)_retrievePreviousRecommendationMatchesFromCache;	// IMP=0x00100000000cd918
- (id)_cacheDirectoryPath;	// IMP=0x00100000000cd88d
- (id)_getNetworkConstraints;	// IMP=0x00100000000cd83d
- (id)_storeRequestContext;	// IMP=0x00100000000cd80d
- (id)_wrapAndCacheResponseModelWithCompiledMLModel:(id)arg1;	// IMP=0x00100000000cd09e
- (_Bool)_setupCacheDirectoryStructureWithPath:(id)arg1;	// IMP=0x00100000000cceea
- (void)_clearMLModelCache;	// IMP=0x00100000000ccd1f
- (void)_fetchRecommendationsSetAndModelWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000ccc2a
- (void)_computeLibraryRecommendationWithResponse:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000cca9b
- (void)_handleRecommendationsResponseModel:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000cc8b2
- (void)_performRecommendationsRequest;	// IMP=0x00100000000cc782
- (void)_performRecommendationsUpdate;	// IMP=0x00100000000cc479
- (void)_cacheMatchedRecommendations:(id)arg1;	// IMP=0x00100000000cc3eb
- (void)_clearRecommendationsData;	// IMP=0x00100000000cc137
- (void)_handleNewArtistContentResponseNotification:(id)arg1;	// IMP=0x00100000000cbee6
- (void)environmentMonitorDidChangeNetworkType:(id)arg1;	// IMP=0x00100000000cbdec
- (void)handleAccountStateChange:(id)arg1;	// IMP=0x00100000000cbd10
- (void)scheduleRecommendationsRefreshTimer;	// IMP=0x00100000000cbb4f
- (void)stopSystemService;	// IMP=0x00100000000cb9c2
- (void)startSystemService;	// IMP=0x00100000000cb839
- (void)dealloc;	// IMP=0x00100000000cb7a9
- (id)init;	// IMP=0x00100000000cb629

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
