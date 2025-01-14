//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APCacheStore, NSMutableArray, NSString;

@interface APCacheStoreTransaction : NSObject
{
    APCacheStore *_cacheStore;	// 8 = 0x8
    NSMutableArray *_operations;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000013b712
@property(readonly, nonatomic) NSMutableArray *operations; // @synthesize operations=_operations;
@property(readonly, nonatomic) __weak APCacheStore *cacheStore; // @synthesize cacheStore=_cacheStore;
- (_Bool)_commit;	// IMP=0x001000000013b48b
- (_Bool)commit;	// IMP=0x001000000013b37e
- (void)addOperation:(id)arg1;	// IMP=0x001000000013b315
- (unsigned long long)count;	// IMP=0x001000000013b2d1
- (id)initWithCacheStore:(id)arg1;	// IMP=0x001000000013b259

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

