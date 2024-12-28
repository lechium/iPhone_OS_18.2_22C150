//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSAccountIdentity, MISSING_TYPE, NSDictionary;

@interface AMSAccountCachedServerDataCore : NSObject
{
    MISSING_TYPE *observations;	// 8 = 0x8
    MISSING_TYPE *dataAccessor;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x004000000001de51
- (void).cxx_destruct;	// IMP=0x00000000000101c1
- (id)init;	// IMP=0x0000000000012c02
- (void)dealloc;	// IMP=0x00000000000101a4
- (void)setAccountFlags:(NSDictionary *)arg1 forAccountID:(AMSAccountIdentity *)arg2 completionHandler:(void (^)(void))arg3;	// IMP=0x000000000002336a
- (void)setPersonalizationTo:(_Bool)arg1 forAccountID:(AMSAccountIdentity *)arg2 completionHandler:(void (^)(void))arg3;	// IMP=0x0000000000021f52
- (void)setAutoPlayTo:(_Bool)arg1 forAccountID:(AMSAccountIdentity *)arg2 completionHandler:(void (^)(void))arg3;	// IMP=0x00000000000212ab
- (id)accountFlagsForAccountID:(id)arg1;	// IMP=0x00000000000206b8
- (void)accountAuthSyncForAccountID:(AMSAccountIdentity *)arg1 completionHandler:(void (^)(NSError *))arg2;	// IMP=0x000000000001ff5f
- (id)cancelUpdateBlockFor:(id)arg1;	// IMP=0x000000000001e351
- (id)stringForKey:(long long)arg1 accountID:(id)arg2 updateBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000001e1f2
- (id)intForKey:(long long)arg1 accountID:(id)arg2 updateBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000001dfe4
- (id)boolForKey:(long long)arg1 accountID:(id)arg2 updateBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000001df93

@end
