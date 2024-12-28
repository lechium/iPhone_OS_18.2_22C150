//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleAccount/NSObject-Protocol.h>

@class ACAccount, ACAccountStore, NSDictionary;

@protocol AAAccountStoreProxyProtocol <NSObject>
- (void)saveAccount:(ACAccount *)arg1 onAccountStore:(ACAccountStore *)arg2 withDataclassActions:(NSDictionary *)arg3 doVerify:(_Bool)arg4 completion:(void (^)(_Bool, NSError *))arg5;
- (void)saveAccount:(ACAccount *)arg1 onAccountStore:(ACAccountStore *)arg2 withCompletionHandler:(void (^)(_Bool, NSError *))arg3;
@end
