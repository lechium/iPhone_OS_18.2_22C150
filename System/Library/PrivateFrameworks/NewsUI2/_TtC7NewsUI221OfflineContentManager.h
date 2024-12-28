//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSSet;

__attribute__((visibility("hidden")))
@interface _TtC7NewsUI221OfflineContentManager : NSObject
{
    MISSING_TYPE *downloadedContentIDs;	// 8 = 0x8
    MISSING_TYPE *contentContext;	// 16 = 0x10
    MISSING_TYPE *_contributors;	// 24 = 0x18
    MISSING_TYPE *contributorsReadyGroup;	// 32 = 0x20
    MISSING_TYPE *_newsdProxy;	// 40 = 0x28
    MISSING_TYPE *localArticleCacheLookupService;	// 48 = 0x30
    MISSING_TYPE *localIssueCacheLookupService;	// 56 = 0x38
    MISSING_TYPE *localPuzzleCacheLookupService;	// 64 = 0x40
    MISSING_TYPE *$__lazy_storage_$_requestProcessingThrottler;	// 72 = 0x48
    MISSING_TYPE *_interestTokensByContentID;	// 80 = 0x50
    MISSING_TYPE *_storageSizeByContentID;	// 88 = 0x58
    MISSING_TYPE *downloadMonitors;	// 96 = 0x60
    MISSING_TYPE *_activeContentIDs;	// 104 = 0x68
    MISSING_TYPE *_inFlightContentIDs;	// 112 = 0x70
    MISSING_TYPE *_offlineContentRequests;	// 120 = 0x78
    MISSING_TYPE *__hasExceededStorageLimits;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x0000000000d28560
- (id)init;	// IMP=0x0000000000d28500
@property(nonatomic, readonly) NSSet *listenableArticleIDs;
@property(nonatomic, readonly) NSSet *readableArticleIDs;
- (void)downloadFinishedForRequest:(id)arg1 error:(id)arg2;	// IMP=0x0000000000d2b5a0
- (void)downloadProgressedForRequest:(id)arg1 progress:(double)arg2;	// IMP=0x0000000000d2aa50
- (void)downloadProgressedForRequest:(id)arg1 contentArchive:(id)arg2;	// IMP=0x0000000000d2a540
- (void)operationThrottler:(id)arg1 performAsyncOperationWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000d2b880

@end
