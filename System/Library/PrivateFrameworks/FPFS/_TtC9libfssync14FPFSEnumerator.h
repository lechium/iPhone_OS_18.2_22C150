//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

__attribute__((visibility("hidden")))
@interface _TtC9libfssync14FPFSEnumerator : NSObject
{
    MISSING_TYPE *observer;	// 8 = 0x8
    MISSING_TYPE *logger;	// 0 = 0x0
    MISSING_TYPE *backend;	// 0 = 0x0
    MISSING_TYPE *vfsItemID;	// 0 = 0x0
    MISSING_TYPE *fpItemID;	// 0 = 0x0
    MISSING_TYPE *extensionEnumerator;	// 0 = 0x0
    MISSING_TYPE *lifetimeExtender;	// 0 = 0x0
    MISSING_TYPE *keepAlive;	// 0 = 0x0
    MISSING_TYPE *invalidated;	// 0 = 0x0
    MISSING_TYPE *buildAndFilterAppLibraries;	// 0 = 0x0
    MISSING_TYPE *cancellable;	// 0 = 0x0
    MISSING_TYPE *_currentAnchor;	// 0 = 0x0
    MISSING_TYPE *changedItemsByID;	// 3 = 0x3
    MISSING_TYPE *deletedItemsIDs;	// 65 = 0x41
}

- (void).cxx_destruct;	// IMP=0x000000000008b2f0
- (id)init;	// IMP=0x0000000000094a20
@property(nonatomic, readonly) NSString *description;
- (void)keepAliveConnectionForRegisteredObserver:(CDUnknownBlockType)arg1;	// IMP=0x00000000000940a0
- (void)enumerateChangesFromToken:(id)arg1 suggestedBatchSize:(long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000093ff0
- (void)enumerateItemsFromPage:(id)arg1 suggestedPageSize:(long long)arg2 upTo:(long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000000091a10
- (void)enumerateItemsFromPage:(id)arg1 suggestedPageSize:(long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000091920
- (void)currentSyncAnchorWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000008cdc0
- (void)invalidate;	// IMP=0x000000000008b920
- (void)dealloc;	// IMP=0x000000000008b2b0

@end
