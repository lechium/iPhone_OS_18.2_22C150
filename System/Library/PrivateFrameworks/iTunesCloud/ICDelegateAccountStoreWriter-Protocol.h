//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesCloud/NSObject-Protocol.h>

@class ICDelegateToken, ICUserIdentity, ICUserIdentityProperties, NSArray, NSDate;

@protocol ICDelegateAccountStoreWriter <NSObject>
- (void)removeAllTokensWithCompletionHandler:(void (^)(_Bool, NSError *))arg1;
- (void)removeTokensExpiringBeforeDate:(NSDate *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)setToken:(ICDelegateToken *)arg1 forUserIdentity:(ICUserIdentity *)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
- (void)removeTokenForUserIdentity:(ICUserIdentity *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)removeDelegationUUIDs:(NSArray *)arg1 forUserIdentity:(ICUserIdentity *)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
- (void)addDelegationUUIDs:(NSArray *)arg1 forUserIdentity:(ICUserIdentity *)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
- (void)setIdentityProperties:(ICUserIdentityProperties *)arg1 forUserIdentity:(ICUserIdentity *)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
- (void)removeIdentityPropertiesForUserIdentity:(ICUserIdentity *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
@end

