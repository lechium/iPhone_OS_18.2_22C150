//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class NSArray, NSDate, NSDateInterval, NSDictionary, NSObject, NSPredicate, NSSet, NSString, PLLocationOfInterestVisit, PLXPCTransaction;
@protocol NSCopying, OS_dispatch_queue, PLMomentAssetData, PLMomentData, PLPhotosHighlightData;

@protocol PLMomentGenerationDataManagement <NSObject>
+ (NSArray *)processingMomentsFromMoments:(NSArray *)arg1;
@property(readonly, nonatomic) NSDictionary *generationOptions;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *isolationQueue;
@property(readonly, nonatomic) _Bool isLightweightMigrationManager;
@property(nonatomic) _Bool previousValidationSucceeded;
@property(nonatomic) long long previousValidatedModelVersion;
@property(nonatomic) _Bool shouldPerformLightweightValidation;
- (NSString *)replayLogPath;
- (_Bool)wantsMomentReplayLogging;
- (void)invalidateAllHighlightSubtitles;
- (void)runPeriodicMaintenanceTasks:(unsigned long long)arg1 withTransaction:(PLXPCTransaction *)arg2;
- (PLLocationOfInterestVisit *)lastLocationOfInterestVisit;
- (void)logRoutineInformation;
- (void)fetchLocationsOfInterestIfNeeded;
- (void)releaseMemoryIntensiveObjects;
- (NSSet *)locationsOfInterest;
- (_Bool)cameraIsActive;
- (_Bool)routineIsAvailable;
- (NSDictionary *)homeAddressDictionary;
- (NSSet *)deletedObjects;
- (NSSet *)updatedObjects;
- (NSSet *)insertedObjects;
- (void)refreshAllObjects;
- (void)resetOnFailure;
- (_Bool)save:(id *)arg1;
- (_Bool)hasChanges;
- (id <PLPhotosHighlightData>)insertNewPhotosHighlight;
- (id <PLMomentData>)insertNewMoment;
- (Class)momentAssetDataClass;
- (Class)momentDataClass;
- (_Bool)deleteAllHighlightsWithError:(id *)arg1;
- (_Bool)deleteAllMomentsWithError:(id *)arg1;
- (NSArray *)allEmptyPhotosHighlightsOfKind:(unsigned short)arg1 error:(id *)arg2;
- (NSArray *)allInvalidPhotosHighlightsOfAllKindsWithError:(id *)arg1;
- (NSArray *)allPhotosHighlightsWithPredicate:(NSPredicate *)arg1 error:(id *)arg2;
- (NSArray *)allPhotosHighlightsOfKind:(unsigned short)arg1 withPredicate:(NSPredicate *)arg2 error:(id *)arg3;
- (NSArray *)allPhotosHighlightsOfKind:(unsigned short)arg1 error:(id *)arg2;
- (NSArray *)allPhotosHighlightsOfAllKindsWithError:(id *)arg1;
- (NSArray *)highlightsIntersectingDateInterval:(NSDateInterval *)arg1 ofKind:(unsigned short)arg2;
- (NSArray *)allAssetIDsToBeIncludedInMomentsWithError:(id *)arg1;
- (NSArray *)allInvalidAssetsWithError:(id *)arg1;
- (NSArray *)allAssetsToBeIncludedInMomentsWithError:(id *)arg1;
- (NSArray *)momentsIntersectingDateInterval:(NSDateInterval *)arg1;
- (NSArray *)orphanedAssetIDsWithError:(id *)arg1;
- (NSArray *)allMomentIDsWithError:(id *)arg1;
- (NSArray *)momentsRequiringLocationOfInterestUpdateWithError:(id *)arg1;
- (NSArray *)momentsRequiringLocationProcessingWhenFrequentLocationsChangedWithError:(id *)arg1;
- (NSArray *)momentsRequiringLocationProcessingWhenFrequentLocationsAreAvailable:(id *)arg1;
- (NSArray *)momentsRequiringLocationProcessingWhenCoreRoutineIsAvailable:(id *)arg1;
- (NSArray *)allInvalidMomentsWithError:(id *)arg1;
- (NSArray *)allMomentsWithError:(id *)arg1;
- (NSArray *)momentsBetweenDate:(NSDate *)arg1 andDate:(NSDate *)arg2 sorted:(_Bool)arg3 excludeExternal:(_Bool)arg4;
- (NSArray *)momentsForAssetsWithUniqueIDs:(NSArray *)arg1 error:(id *)arg2;
- (NSArray *)momentsWithUniqueIDs:(NSArray *)arg1 error:(id *)arg2;
- (id <PLMomentData>)momentWithUniqueID:(NSObject<NSCopying> *)arg1 error:(id *)arg2;
- (NSArray *)assetsWithUniqueIDs:(NSArray *)arg1 error:(id *)arg2;
- (id <PLMomentAssetData>)assetWithUniqueID:(NSObject<NSCopying> *)arg1 error:(id *)arg2;
- (unsigned long long)hardGenerationBatchSizeLimit;
- (void)performDataTransaction:(void (^)(void))arg1 synchronously:(_Bool)arg2 priority:(long long)arg3 completionHandler:(void (^)(void))arg4;
- (void)performBlock:(void (^)(void))arg1 synchronously:(_Bool)arg2 priority:(long long)arg3 completionHandler:(void (^)(void))arg4;
- (void)performDataTransaction:(void (^)(void))arg1 synchronously:(_Bool)arg2 completionHandler:(void (^)(void))arg3;
- (void)performBlock:(void (^)(void))arg1 synchronously:(_Bool)arg2 completionHandler:(void (^)(void))arg3;
@end

