//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FPDExtensionManager;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FPDSpotlightDaemonClient : NSObject
{
    NSObject<OS_dispatch_queue> *_reindexQueue;	// 8 = 0x8
    FPDExtensionManager *_extensionManager;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000b8f7d
@property(readonly, nonatomic) FPDExtensionManager *extensionManager; // @synthesize extensionManager=_extensionManager;
- (void)provideFileURLForBundleID:(id)arg1 protectionClass:(id)arg2 itemIdentifier:(id)arg3 typeIdentifier:(id)arg4 options:(long long)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000000b8ab5
- (void)provideDataForBundleID:(id)arg1 protectionClass:(id)arg2 itemIdentifier:(id)arg3 typeIdentifier:(id)arg4 options:(long long)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000000b8a62
- (void)reindexItemsWithIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 acknowledgementHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000b7dc9
- (void)reindexAllItemsForBundleID:(id)arg1 protectionClass:(id)arg2 acknowledgementHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000b7711
- (id)initWithExtensionManager:(id)arg1;	// IMP=0x00000000000b7664

@end

