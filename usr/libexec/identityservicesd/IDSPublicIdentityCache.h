//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSKVStore, IDSQuerySDPersistenceManager;

@interface IDSPublicIdentityCache : NSObject
{
    IDSKVStore *_kvStore;	// 8 = 0x8
    IDSQuerySDPersistenceManager *_persistenceManager;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00400000000234e1
- (void).cxx_destruct;	// IMP=0x0020000000024e70
- (void)deleteCache;	// IMP=0x0010000000024e5a
- (id)recentURIsWithinTimeInterval:(double)arg1 forService:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000247a0
- (_Bool)cleanupWithError:(id *)arg1;	// IMP=0x00100000000242b6
- (id)identityForToken:(id)arg1 uri:(id)arg2 service:(id)arg3 error:(id *)arg4;	// IMP=0x0010000000023ebc
- (_Bool)addIdentity:(id)arg1 forToken:(id)arg2 uri:(id)arg3 service:(id)arg4 error:(id *)arg5;	// IMP=0x0010000000023b9c
- (id)identityDataForToken:(id)arg1 uri:(id)arg2 service:(id)arg3 error:(id *)arg4;	// IMP=0x0010000000023a5d
- (_Bool)addIdentityData:(id)arg1 forToken:(id)arg2 uri:(id)arg3 service:(id)arg4 error:(id *)arg5;	// IMP=0x00100000000237f1
- (id)keyForToken:(id)arg1 uri:(id)arg2 service:(id)arg3;	// IMP=0x0010000000023745
- (id)initWithPath:(id)arg1 withPersistenceManager:(id)arg2;	// IMP=0x0010000000023686
- (id)init;	// IMP=0x0010000000023536

@end
