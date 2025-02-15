//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APCacheStore, NSString;

@interface APCacheStoreOperationRemove : NSObject
{
    APCacheStore *_cacheStore;	// 8 = 0x8
    NSString *_key;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000013f038
@property(readonly, nonatomic) NSString *key; // @synthesize key=_key;
@property(readonly, nonatomic) __weak APCacheStore *cacheStore; // @synthesize cacheStore=_cacheStore;
- (_Bool)_removeObjectForKey:(id)arg1;	// IMP=0x001000000013ed03
- (void)rollBack;	// IMP=0x001000000013ecfd
- (void)commit;	// IMP=0x001000000013ecf7
- (_Bool)execute;	// IMP=0x001000000013eca6
- (id)initWithCacheStore:(id)arg1 key:(id)arg2;	// IMP=0x001000000013ec29

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

