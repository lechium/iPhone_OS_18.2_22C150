//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface MADEmbeddingStoreService : NSObject
{
    NSObject<OS_dispatch_queue> *_connectionQueue;	// 8 = 0x8
    NSXPCConnection *_connection;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_sandboxQueue;	// 24 = 0x18
    NSMutableDictionary *_sandboxHandles;	// 32 = 0x20
}

+ (_Bool)isEntitledForInProcessAccess;	// IMP=0x00100000000de565
+ (void)configureServerInterface:(id)arg1;	// IMP=0x00100000000ddd7f
+ (id)allowedClasses;	// IMP=0x00100000000ddd77
+ (id)serviceName;	// IMP=0x00100000000ddd6a
+ (id)sharedService;	// IMP=0x00100000000ddb1c
- (void).cxx_destruct;	// IMP=0x00000000000e05e2
- (void)prewarmSearchWithConcurrencyLimit:(unsigned long long)arg1 photoLibraryURL:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000dff1a
- (id)searchWithEmbeddings:(id)arg1 photoLibraryURL:(id)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000df64f
- (id)fetchEmbeddingsWithAssetUUIDs:(id)arg1 photoLibraryURL:(id)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000ded84
- (void)checkSandboxExtensionForPhotoLibraryURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000de6ea
- (id)connection;	// IMP=0x00000000000de0e3
- (void)dealloc;	// IMP=0x00000000000ddb81
- (id)initInternal;	// IMP=0x00000000000dd85a
- (id)init;	// IMP=0x00000000000dd7ba

@end
