//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC17businessservicesd6Daemon : NSObject
{
    MISSING_TYPE *bundleId;	// 8 = 0x8
    MISSING_TYPE *sandboxInitialized;	// 24 = 0x18
    MISSING_TYPE *$__lazy_storage_$_shardStore;	// 32 = 0x20
    MISSING_TYPE *$__lazy_storage_$_domainShardStore;	// 40 = 0x28
    MISSING_TYPE *$__lazy_storage_$_itemCache;	// 48 = 0x30
    MISSING_TYPE *$__lazy_storage_$_userDefaults;	// 56 = 0x38
    MISSING_TYPE *$__lazy_storage_$_isInternalInstall;	// 64 = 0x40
    MISSING_TYPE *$__lazy_storage_$_queryOperationFactory;	// 72 = 0x48
    MISSING_TYPE *$__lazy_storage_$_cacheManager;	// 80 = 0x50
    MISSING_TYPE *$__lazy_storage_$_measurementFactory;	// 88 = 0x58
    MISSING_TYPE *$__lazy_storage_$_metricFactory;	// 96 = 0x60
    MISSING_TYPE *$__lazy_storage_$_bloomFilterExtractor;	// 104 = 0x68
    MISSING_TYPE *$__lazy_storage_$_operationGroupFactory;	// 112 = 0x70
    MISSING_TYPE *$__lazy_storage_$_chatSuggestShardServiceDomain;	// 120 = 0x78
    MISSING_TYPE *$__lazy_storage_$_businessLinkShardServiceDomain;	// 128 = 0x80
    MISSING_TYPE *$__lazy_storage_$_businessCallerShardServiceDomain;	// 136 = 0x88
    MISSING_TYPE *$__lazy_storage_$_businessEmailShardServiceDomain;	// 144 = 0x90
    MISSING_TYPE *$__lazy_storage_$_queryController;	// 152 = 0x98
    MISSING_TYPE *$__lazy_storage_$_businessConnectAssetDataSource;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_cachedLogoDataSource;	// 0 = 0x0
    MISSING_TYPE *XPCServer;	// 3 = 0x3
    MISSING_TYPE *$__lazy_storage_$_xpcListener;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x004000000000d780
- (id)init;	// IMP=0x001000000000d730
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000000d4a0

@end
