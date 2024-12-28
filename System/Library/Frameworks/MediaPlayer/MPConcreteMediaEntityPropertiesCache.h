//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol MPMediaLibraryDataProvider, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MPConcreteMediaEntityPropertiesCache : NSObject
{
    Class _dataProviderEntityClass;	// 8 = 0x8
    long long _identifier;	// 16 = 0x10
    NSMutableDictionary *_properties;	// 24 = 0x18
    NSMutableDictionary *_valuePersistenceBlocks;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_calloutQueue;	// 40 = 0x28
    struct os_unfair_lock_s _lock;	// 48 = 0x30
    id <MPMediaLibraryDataProvider> _dataProvider;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000014ba59
@property(readonly, nonatomic) long long identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) Class dataProviderEntityClass; // @synthesize dataProviderEntityClass=_dataProviderEntityClass;
@property(readonly, nonatomic) __weak id <MPMediaLibraryDataProvider> dataProvider; // @synthesize dataProvider=_dataProvider;
- (void)dealloc;	// IMP=0x000000000014b99f
- (void)invalidate;	// IMP=0x000000000014b77a
- (void)delete;	// IMP=0x000000000014b730
- (void)cacheValue:(id)arg1 forProperty:(id)arg2 persistValueInBackgroundBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000014b5ad
- (void)cachePropertyValues:(id)arg1 forProperties:(id)arg2 persistValueInBackgroundBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000014b369
- (void)_cacheValues:(id)arg1 persistValueInBackgroundBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000014b2a3
- (id)valueForProperty:(id)arg1 isCached:(_Bool *)arg2;	// IMP=0x000000000014b1f4
- (id)initWithLibraryDataProvider:(id)arg1 dataProviderEntityClass:(Class)arg2 identifier:(long long)arg3;	// IMP=0x000000000014b12f

@end
