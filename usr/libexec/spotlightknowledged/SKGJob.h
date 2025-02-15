//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SKGItemMonitor, SKGJobContext;
@protocol OS_dispatch_queue;

@interface SKGJob : NSObject
{
    SKGJobContext *_context;	// 8 = 0x8
    SKGItemMonitor *_monitor;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000028146
@property(retain, nonatomic) SKGItemMonitor *monitor; // @synthesize monitor=_monitor;
@property(readonly, nonatomic) SKGJobContext *context;
- (id)initWithJobContext:(id)arg1;	// IMP=0x0010000000028092
- (_Bool)requestCSProcessingWithProcessedItemBlock:(CDUnknownBlockType)arg1 batchArchivedBlock:(CDUnknownBlockType)arg2 batchUpdatedBlock:(CDUnknownBlockType)arg3 cancelBlock:(CDUnknownBlockType)arg4 errorBlock:(CDUnknownBlockType)arg5;	// IMP=0x00100000000380d7
- (_Bool)_runCSExtractForQueryString:(id)arg1 queryContext:(id)arg2 flags:(unsigned int)arg3 processedItemBlock:(CDUnknownBlockType)arg4 batchArchivedBlock:(CDUnknownBlockType)arg5 batchUpdatedBlock:(CDUnknownBlockType)arg6 cancelBlock:(CDUnknownBlockType)arg7 errorBlock:(CDUnknownBlockType)arg8;	// IMP=0x0010000000035242
- (_Bool)_updateCoreSpotlightItems:(id)arg1 bundleIdentifier:(id)arg2 protectionClass:(id)arg3 batchUpdatedBlock:(CDUnknownBlockType)arg4 cancelBlock:(CDUnknownBlockType)arg5;	// IMP=0x0010000000034f0b
- (_Bool)_archiveCoreSpotlightItems:(id)arg1 bundleIdentifier:(id)arg2 protectionClass:(id)arg3 batchArchivedBlock:(CDUnknownBlockType)arg4 cancelBlock:(CDUnknownBlockType)arg5 errorBlock:(CDUnknownBlockType)arg6;	// IMP=0x0010000000034c07
- (id)_coreSpotlightIndexWithBundleIdentifier:(id)arg1 protectionClass:(id)arg2;	// IMP=0x0010000000034a05
- (_Bool)requestCSDocumentUnderstandingProgressReport:(CDUnknownBlockType)arg1 cancelBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000465b4
- (_Bool)requestCSSuggestedEventsProgressReport:(CDUnknownBlockType)arg1 cancelBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000046545
- (_Bool);	// IMP=0x00100000000464d6
- (id)generateCSDocumentUnderstandingReportWithCancelBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000046332
- (id)generateCSSuggestedEventsReportWithCancelBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000004618e
- (id)generateCSEmbeddingsReportWithCancelBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000045e32
- (id)generateCSReportForQueryFlags:(unsigned int)arg1 fetchAttributePairs:(id)arg2 additionalQueryString:(id)arg3 processedField:(id)arg4 succesfullyProcessedField:(id)arg5 eligibleFields:(id)arg6 dayCompletionStr:(id)arg7 genStartTime:(id)arg8 bundleIDs:(id)arg9 daysToCompleteApproach:(long long)arg10 includeFiles:(_Bool)arg11 withCancelBlock:(CDUnknownBlockType)arg12;	// IMP=0x0010000000043f25
- (_Bool)_runCSCounterForQueryString:(id)arg1 queryContext:(id)arg2 counterItemBlock:(CDUnknownBlockType)arg3 counterAttrBlock:(CDUnknownBlockType)arg4 cancelBlock:(CDUnknownBlockType)arg5;	// IMP=0x00100000000433ce
- (_Bool)requestCSCleanupWithProtectionClasses:(id)arg1 batchUpdatedBlock:(CDUnknownBlockType)arg2 cancelBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000000430cf
- (_Bool)_runCSCleanupForQueryString:(id)arg1 queryContext:(id)arg2 flags:(unsigned int)arg3 batchUpdatedBlock:(CDUnknownBlockType)arg4 cancelBlock:(CDUnknownBlockType)arg5;	// IMP=0x0010000000041418
- (_Bool)requestMDProcessingWithBatchProcessedBlock:(CDUnknownBlockType)arg1 batchUpdatedBlock:(CDUnknownBlockType)arg2 cancelBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000041410
- (_Bool)requestCSReindexWithProtectionClasses:(id)arg1 batchProcessedBlock:(CDUnknownBlockType)arg2 batchUpdatedBlock:(CDUnknownBlockType)arg3 cancelBlock:(CDUnknownBlockType)arg4;	// IMP=0x0010000000040d87
- (_Bool)requestCSReindexForClientWithBundleIdentifier:(id)arg1 batchProcessedBlock:(CDUnknownBlockType)arg2 batchUpdatedBlock:(CDUnknownBlockType)arg3 cancelBlock:(CDUnknownBlockType)arg4;	// IMP=0x001000000003d8cd
- (_Bool)_runCSReindexForQueryString:(id)arg1 queryContext:(id)arg2 flags:(unsigned int)arg3 batchProcessedBlock:(CDUnknownBlockType)arg4 batchUpdatedBlock:(CDUnknownBlockType)arg5 cancelBlock:(CDUnknownBlockType)arg6;	// IMP=0x001000000003a2d7
- (_Bool)_reindexCoreSpotlightIdentifiers:(id)arg1 bundleIdentifier:(id)arg2 protectionClass:(id)arg3 batchProcessedBlock:(CDUnknownBlockType)arg4 cancelBlock:(CDUnknownBlockType)arg5;	// IMP=0x0010000000039f13
- (_Bool)_updateCoreSpotlightItems:(id)arg1 bundleIdentifier:(id)arg2 protectionClass:(id)arg3 batchUpdatedBlock:(CDUnknownBlockType)arg4 cancelBlock:(CDUnknownBlockType)arg5;	// IMP=0x0010000000039bcf
- (id)_coreSpotlightIndexWithBundleIdentifier:(id)arg1 protectionClass:(id)arg2;	// IMP=0x00100000000399cd
- (void)_markReindexRequestsAsSeen:(id)arg1 bundleID:(id)arg2 count:(unsigned long long)arg3;	// IMP=0x00100000000398dc
- (_Bool)_recordIsOld:(id)arg1 dateKeys:(id)arg2;	// IMP=0x001000000003960a

@end

