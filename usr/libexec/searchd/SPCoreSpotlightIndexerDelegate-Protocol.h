//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSData, NSDate, NSObject, NSSet, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue;

@protocol SPCoreSpotlightIndexerDelegate <NSObject>
- (_Bool)disableABCReporting:(NSString *)arg1;
- (void)issueLoadTrial:(NSObject<OS_dispatch_group> *)arg1;
- (void)indexAvailableForProtectionClass:(NSString *)arg1 newIndex:(_Bool)arg2;
- (NSData *)extraTTRInfo;
- (void)dumpTTRDebugFiles;
- (NSString *)indexDirectory;
- (void)recordEngagementForBundleID:(NSString *)arg1 uniqueIdentifier:(NSString *)arg2 protectionClass:(NSString *)arg3 userQuery:(NSString *)arg4 date:(NSDate *)arg5;
- (NSSet *)disabledBundleSet;
-     // Error parsing type: @"SPCoreSpotlightTask"56@0:8@"NSString"16@"CSSearchQueryContext"24@?<^v@?i{?=(?={?=^vI}{?=^vQ}{?=*Q}{?=*I}*BCSIQTcsiqtdfdq^v)}Q^v>32@?<v@?iQ^{__MDStoreOIDArray=}^{__MDPlistBytes=}@"NSString">40@?<v@?@"NSError">48, name: taskForTopHitQueryWithQueryString:queryContext:eventHandler:resultsHandler:completionHandler:
- (void)updateApplicationsWithCompletion:(void (^)(void))arg1 clean:(_Bool)arg2;
- (_Bool)blocklistCheck:(NSString *)arg1 withOptions:(long long)arg2;
- (_Bool)setupHasComplete;
- (_Bool)indexingEnabled;
- (_Bool)deviceUnlocked;
- (_Bool)deviceFirstUnlockedInSB;
- (_Bool)deviceFirstUnlockedInMKB;
- (_Bool)managedIndex;
- (_Bool)privateIndex;
- (NSObject<OS_dispatch_queue> *)firstUnlockQueue;
- (NSObject<OS_dispatch_queue> *)indexQueue;

@optional
- (NSString *)cacheDeleteId;
@end

