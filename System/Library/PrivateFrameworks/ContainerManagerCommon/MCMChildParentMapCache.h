//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MCMSQLiteDB, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MCMChildParentMapCache : NSObject
{
    MCMSQLiteDB *_db;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSMutableDictionary *_cache;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000058617
@property(readonly, nonatomic) NSMutableDictionary *cache; // @synthesize cache=_cache;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) MCMSQLiteDB *db; // @synthesize db=_db;
- (void)codeSigningDB:(id)arg1 removeParentIdentifier:(id)arg2;	// IMP=0x00000000000582f5
- (void)codeSigningDB:(id)arg1 addChildIdentifier:(id)arg2 forParentIdentifier:(id)arg3;	// IMP=0x0000000000058247
- (id)parentIdentifierForChildIdentifier:(id)arg1;	// IMP=0x000000000005816f
- (id)childBundleIdentifiersForParentIdentifier:(id)arg1;	// IMP=0x0000000000057ee7
- (id)initWithDB:(id)arg1 queue:(id)arg2;	// IMP=0x0000000000057da4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
