//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString;
@protocol OS_dispatch_queue;

@interface SPCoreSpotlightDatastore : NSObject
{
    unsigned int _loadedApps:1;	// 8 = 0x8
    unsigned int _isCJK:1;	// 8 = 0x8
    unsigned int _explicitContentAllowed:1;	// 8 = 0x8
    unsigned int _musicVideosAllowed:1;	// 8 = 0x8
    unsigned int _explicitBooksAllowed:1;	// 8 = 0x8
    unsigned int _activated:1;	// 8 = 0x8
    int _changedToken;	// 12 = 0xc
    NSObject<OS_dispatch_queue> *_queryQueue;	// 16 = 0x10
    NSNumber *_maxTVShowRating;	// 24 = 0x18
    NSNumber *_maxMovieRating;	// 32 = 0x20
    NSDictionary *_renderEngagementCounts;	// 40 = 0x28
    NSString *_lastQuery;	// 48 = 0x30
    _Bool _priorityIndexEnabled;	// 56 = 0x38
    unsigned int _loadTrialFactors:1;	// 57 = 0x39
}

+ (_Bool)_isKeyboardCJK:(id)arg1;	// IMP=0x002000000005daa8
+ (id)_makeUniqueFetchAttributesWithAttributes:(id)arg1 extraAttributes:(id)arg2;	// IMP=0x001000000005d7e5
+ (id)removedDuplicatePhotosSectionsFromSections:(id)arg1 isPhotosScopedSearch:(_Bool)arg2;	// IMP=0x001000000005d202
+ (void)setButtonOnPhotosInAppSection:(id)arg1 withQuery:(id)arg2 queryString:(id)arg3 queryParams:(id)arg4;	// IMP=0x001000000005ce9c
+ (id)sectionWithBundleIdentifier:(id)arg1 andAddToMap:(id)arg2;	// IMP=0x001000000005cdaa
+ (void)modifyBatchSize:(unsigned long long *)arg1 batchIncrement:(unsigned long long *)arg2 batches:(unsigned long long *)arg3 withSectionsCount:(unsigned long long)arg4;	// IMP=0x001000000005ccc8
+ (void)updatePhoneFavorites;	// IMP=0x0010000000045ef1
+ (void)_handleRemoteProxyError:(id)arg1;	// IMP=0x0010000000045bb5
+ (void)initialize;	// IMP=0x001000000004500e
+ (void)setResources:(id)arg1;	// IMP=0x0010000000044ffa
+ (id)getResources;	// IMP=0x0010000000044f67
+ (id)sharedInstance;	// IMP=0x0010000000044f08
- (void).cxx_destruct;	// IMP=0x00200000000660d9
- (id)taskForTopHitQueryWithQueryString:(id)arg1 queryContext:(id)arg2 eventHandler:(CDUnknownBlockType)arg3 resultsHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000065fff
- (id)taskForTopHitQueryWithQueryString:(id)arg1 queryContext:(id)arg2 resultsHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000005db4a
@property(readonly, nonatomic) unsigned int domain;
- (void)shrink:(unsigned long long)arg1;	// IMP=0x001000000005d7d4
- (void)performQueryRewriteForQuery:(id)arg1 withCorrection:(id)arg2 task:(id)arg3;	// IMP=0x001000000005d60a
- (id)performQuery:(id)arg1 isCorrectedQuery:(_Bool)arg2 reuseTask:(id)arg3 needsFuzzy:(_Bool)arg4 pommesRewrite:(id)arg5 embeddingsRequery:(_Bool)arg6;	// IMP=0x001000000004df8a
- (id)coreSpotlightQueryTaskWithQuery:(id)arg1 reuseTask:(id)arg2;	// IMP=0x001000000004ded6
- (id)_topHitQueryParametersForSearchString:(id)arg1 searchEntities:(id)arg2 contextIdentifier:(id)arg3 queryKind:(unsigned long long)arg4 needsFuzzy:(_Bool)arg5 checkForMath:(_Bool)arg6 isCJK:(_Bool)arg7 disableNLP:(_Bool)arg8 disableOCR:(_Bool)arg9 previousQueryKind:(unsigned long long)arg10 clientBundle:(id)arg11 keyboardLanguage:(id)arg12 queryID:(long long)arg13;	// IMP=0x001000000004bcde
- (id)performQuery:(id)arg1;	// IMP=0x001000000004bcbb
- (id)rankingQueriesAddingQueryTerms:(id)arg1 rankingQueries:(id)arg2;	// IMP=0x001000000004bc07
- (void)sortResultsInSection:(id)arg1 currentTime:(double)arg2;	// IMP=0x001000000004baa6
- (void)processUserActivitiesForSection:(id)arg1;	// IMP=0x001000000004a8bb
- (void)removeDuplicatesInSection:(id)arg1 query:(id)arg2;	// IMP=0x001000000004990d
- (void)hideIrrelevantCalendarResultsForSection:(id)arg1;	// IMP=0x00100000000492b9
- (void)processSection:(id)arg1 forQuery:(id)arg2 rawQuery:(id)arg3 usingTopHitThreshold: /* Error: Ran out of types for this method. */;	// IMP=0x00100000000476bd
- (_Bool)topHitNominatedByPommesScoringforBundleIdentifier:(id)arg1;	// IMP=0x001000000004748f
- (void)updateCoreSuggestionsSection:(id)arg1;	// IMP=0x0010000000046e70
- (void)clearInput;	// IMP=0x0010000000046d72
- (void)deactivate;	// IMP=0x00100000000469c0
- (void)activate;	// IMP=0x00100000000463ec
- (void)preheat;	// IMP=0x00100000000461d4
- (void)dealloc;	// IMP=0x001000000004619b
- (void)updateMailVIPList;	// IMP=0x0010000000045c17
- (void)loadTrialDataOnActivate;	// IMP=0x0010000000044f5d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
