//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMMTRControllerFactoryStorage : NSObject
{
    NSMutableDictionary *_mtrControllerFactoryKeyValueStore;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000005641f
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) NSMutableDictionary *mtrControllerFactoryKeyValueStore; // @synthesize mtrControllerFactoryKeyValueStore=_mtrControllerFactoryKeyValueStore;
- (void)clear;	// IMP=0x000000000005639a
- (id)init;	// IMP=0x0000000000056313
- (id)dictionaryCopy;	// IMP=0x0000000000056218
- (_Bool)removeStorageDataForKey:(id)arg1;	// IMP=0x000000000005615e
- (_Bool)setStorageData:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000005607e
- (id)storageDataForKey:(id)arg1;	// IMP=0x0000000000055f3f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
