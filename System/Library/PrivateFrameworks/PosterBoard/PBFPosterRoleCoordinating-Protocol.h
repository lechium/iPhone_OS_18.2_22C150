//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PosterBoard/BSInvalidatable-Protocol.h>
#import <PosterBoard/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSError, NSSet, NSString, PBFPosterDataStoreEvent, PBFPosterRoleCoordinatorChange, PRPosterCollection, PRPosterConfiguration;
@protocol PBFPosterExtensionDataStorageMutating><PBFPosterExtensionDataStorageRetrieving, PBFPosterExtensionDataStorageRetrieving, PBFPosterRoleCoordinating, PBFPosterRoleCoordinatorTransitionContext;

@protocol PBFPosterRoleCoordinating <NSObject, BSInvalidatable>
+ (NSSet *)supportedChangeTypes;
+ (NSSet *)subscribedEvents;
+ (NSSet *)protectedAttributes;
+ (NSSet *)supportedAttributes;
+ (NSArray *)buildInitialStateSetupEventsForRoleCoordinator:(id <PBFPosterRoleCoordinating>)arg1 extensionHandlers:(NSArray *)arg2 extensionStoreCoordinators:(NSArray *)arg3;
@property unsigned long long maximumNumberOfPosters;
@property(readonly) PRPosterCollection *posterCollection;
@property(readonly) NSString *role;
- (void)finalizeTransactionCount;
- (void)decrementTransactionCount;
- (void)incrementTransactionCount;
- (_Bool)finalizeChangesWithChangeHandler:(id <PBFPosterExtensionDataStorageMutating><PBFPosterExtensionDataStorageRetrieving>)arg1 outEvents:(out id *)arg2 error:(out id *)arg3;
- (_Bool)updateCoordinatorWithChange:(PBFPosterRoleCoordinatorChange *)arg1 changeHandler:(id <PBFPosterExtensionDataStorageMutating><PBFPosterExtensionDataStorageRetrieving>)arg2 emitEvents:(out id *)arg3 error:(out id *)arg4;
- (PRPosterConfiguration *)determineActivePosterConfigurationForStorage:(id <PBFPosterExtensionDataStorageRetrieving>)arg1 context:(id <PBFPosterRoleCoordinatorTransitionContext>)arg2;
- (PRPosterConfiguration *)determineActivePosterConfigurationForContext:(id <PBFPosterRoleCoordinatorTransitionContext>)arg1;
- (_Bool)notifyEventWasReceived:(PBFPosterDataStoreEvent *)arg1 changes:(out id *)arg2 storage:(id <PBFPosterExtensionDataStorageRetrieving>)arg3;
- (_Bool)validateEventIsRelevant:(PBFPosterDataStoreEvent *)arg1;
- (NSDictionary *)attributesForConfiguration:(PRPosterConfiguration *)arg1 ofType:(NSSet *)arg2 storage:(id <PBFPosterExtensionDataStorageRetrieving>)arg3;
- (NSDictionary *)defaultAttributesForNewPosterFromProvider:(NSString *)arg1;
- (PRPosterCollection *)buildNewPosterCollectionFromStorage:(id <PBFPosterExtensionDataStorageRetrieving>)arg1;
- (NSError *)setupRoleIfNecessaryWithStorage:(id <PBFPosterExtensionDataStorageMutating><PBFPosterExtensionDataStorageRetrieving>)arg1;
@end

