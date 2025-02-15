//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APDatabaseManager, APUnfairRecursiveLock, NSMutableDictionary, NSSet;
@protocol APLegacyMetricRetryManagerProtocol;

@interface APMetricsLegacyInterface : NSObject
{
    NSMutableDictionary *_pendingDelayedRequests;	// 8 = 0x8
    APUnfairRecursiveLock *_delayedRequestLock;	// 16 = 0x10
    APUnfairRecursiveLock *_confirmedClickLock;	// 24 = 0x18
    id <APLegacyMetricRetryManagerProtocol> _metricRetryManager;	// 32 = 0x20
    NSSet *_bundleIdentifierAllowList;	// 40 = 0x28
    NSSet *_ignoredClientIdentifierSuffixes;	// 48 = 0x30
    NSSet *_ignoredClientIdentifiers;	// 56 = 0x38
    APDatabaseManager *_databaseManager;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0020000000093a7a
@property(readonly, nonatomic) APDatabaseManager *databaseManager; // @synthesize databaseManager=_databaseManager;
- (id)ignoredClientIdentifiers;	// IMP=0x0010000000093a5c
@property(readonly) NSSet *ignoredClientIdentifierSuffixes; // @synthesize ignoredClientIdentifierSuffixes=_ignoredClientIdentifierSuffixes;
@property(readonly) NSSet *bundleIdentifierAllowList; // @synthesize bundleIdentifierAllowList=_bundleIdentifierAllowList;
@property(readonly) id <APLegacyMetricRetryManagerProtocol> metricRetryManager; // @synthesize metricRetryManager=_metricRetryManager;
@property(readonly) APUnfairRecursiveLock *confirmedClickLock; // @synthesize confirmedClickLock=_confirmedClickLock;
@property(readonly) APUnfairRecursiveLock *delayedRequestLock; // @synthesize delayedRequestLock=_delayedRequestLock;
@property(readonly) NSMutableDictionary *pendingDelayedRequests; // @synthesize pendingDelayedRequests=_pendingDelayedRequests;
- (_Bool)handleExpandedPlaceholderWithUnfilledReason:(int)arg1 metric:(id)arg2 internalContent:(id)arg3 context:(id)arg4 idAccount:(id)arg5;	// IMP=0x001000000009362f
- (id)handleSubscription:(id)arg1;	// IMP=0x00100000000935ae
- (id)handleMediaComplete:(id)arg1 internalContent:(id)arg2 context:(id)arg3 clientInfo:(id)arg4 idAccount:(id)arg5;	// IMP=0x0010000000093179
- (id)handleArticleLoadFailure:(id)arg1 internalContent:(id)arg2 context:(id)arg3 idAccount:(id)arg4;	// IMP=0x00100000000930a2
- (id)handleDaemonRequestFailed:(id)arg1 internalContent:(id)arg2 context:(id)arg3 idAccount:(id)arg4;	// IMP=0x0010000000092dfc
- (id)handleValidationFailed:(id)arg1 internalContent:(id)arg2 context:(id)arg3 idAccount:(id)arg4;	// IMP=0x0010000000092c66
- (id)handlePrivacyAdMetric:(id)arg1 internalContent:(id)arg2 context:(id)arg3 clientInfo:(id)arg4 idAccount:(id)arg5;	// IMP=0x0010000000092b79
- (id)handleVideoMetric:(id)arg1 internalContent:(id)arg2 context:(id)arg3 clientInfo:(id)arg4 idAccount:(id)arg5;	// IMP=0x0010000000092983
- (id)handleLoadFailed:(id)arg1 internalContent:(id)arg2 context:(id)arg3 idAccount:(id)arg4;	// IMP=0x00100000000927c7
- (id)_confirmed50PercentImpressionRequest:(id)arg1 internalContent:(id)arg2 context:(id)arg3 clientInfo:(id)arg4 idAccount:(id)arg5 forClickInteraction:(_Bool)arg6;	// IMP=0x00100000000926c0
- (id)_confirmedImpressionRequest:(id)arg1 internalContent:(id)arg2 context:(id)arg3 clientInfo:(id)arg4 idAccount:(id)arg5 forClickInteraction:(_Bool)arg6;	// IMP=0x00100000000925b9
- (id)_unconfirmedImpressionRequest:(id)arg1 internalContent:(id)arg2 context:(id)arg3 clientInfo:(id)arg4 idAccount:(id)arg5;	// IMP=0x00100000000924cc
- (id)handleInterfaceOffScreen:(id)arg1 internalContent:(id)arg2 context:(id)arg3 clientInfo:(id)arg4 idAccount:(id)arg5;	// IMP=0x0010000000091a20
- (id)handleInterfaceVisible:(id)arg1 internalContent:(id)arg2 context:(id)arg3 clientInfo:(id)arg4 idAccount:(id)arg5;	// IMP=0x0010000000091092
- (id)handleInterfaceReplaced:(id)arg1 metricEnvironment:(id)arg2;	// IMP=0x0010000000090706
- (id)handleInterfaceExceededContainer:(id)arg1 internalContent:(id)arg2 context:(id)arg3 idAccount:(id)arg4;	// IMP=0x0010000000090598
- (id)baseHandleInterfaceOnScreen:(id)arg1 internalContent:(id)arg2 context:(id)arg3 idAccount:(id)arg4;	// IMP=0x001000000008f0ca
- (id)handleInterstitialOnScreen:(id)arg1 internalContent:(id)arg2 context:(id)arg3 idAccount:(id)arg4;	// IMP=0x001000000008f0b8
- (id)handleInterfaceOnScreen:(id)arg1 internalContent:(id)arg2 context:(id)arg3 idAccount:(id)arg4;	// IMP=0x001000000008eed3
- (id)handleQuickReturn:(id)arg1 internalContent:(id)arg2 context:(id)arg3;	// IMP=0x001000000008e954
- (id)handleInterfaceInteracted:(id)arg1 internalContent:(id)arg2 context:(id)arg3 clientInfo:(id)arg4 idAccount:(id)arg5;	// IMP=0x001000000008dab7
- (id)handleInterfaceReady:(id)arg1 internalContent:(id)arg2 context:(id)arg3 clientInfo:(id)arg4 idAccount:(id)arg5;	// IMP=0x001000000008da2c
- (id)handleClientDiscarded:(id)arg1 internalContent:(id)arg2 context:(id)arg3 idAccount:(id)arg4;	// IMP=0x001000000008d545
- (_Bool)shouldIgnoreMetric:(id)arg1;	// IMP=0x001000000008d4ac
- (void)processMetric:(id)arg1 environmentProvider:(CDUnknownBlockType)arg2;	// IMP=0x001000000008c472
- (void)handleMetricResponse:(id)arg1 error:(id)arg2 forRequest:(id)arg3;	// IMP=0x001000000008c46c
- (id)pendingRequestsForContent:(id)arg1 filterPredicate:(CDUnknownBlockType)arg2;	// IMP=0x001000000008c0e8
- (void)removeDelayedRequest:(id)arg1 cancel:(_Bool)arg2;	// IMP=0x001000000008bfc1
- (void)sendLegacyMetricWithDelay:(double)arg1 legacyMetric:(id)arg2 requestSentHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000008b9c5
- (void)sendLegacyMetric:(id)arg1;	// IMP=0x001000000008b7da
- (id)timeSpentProcessor;	// IMP=0x001000000008b74d
- (id)initWithRetryManager:(id)arg1 databaseManager:(id)arg2;	// IMP=0x001000000008b5f7
- (id)initWithRetryManager:(id)arg1;	// IMP=0x001000000008b576
- (id)init;	// IMP=0x001000000008b4bf

@end

