//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AALoginAccountResponse, ACAccount;

@protocol AADaemonProtocol
- (void)urlConfigurationWithCompletion:(void (^)(AAURLConfiguration *, NSHTTPURLResponse *, NSError *))arg1;
- (void)fetchCachedLoginResponseForAccount:(ACAccount *)arg1 completion:(void (^)(AALoginAccountResponse *, NSError *))arg2;
- (void)cacheLoginResponse:(AALoginAccountResponse *)arg1 forAccount:(ACAccount *)arg2 completion:(void (^)(NSError *))arg3;
- (void)handleAppleAccountDeleteForAccount:(ACAccount *)arg1 completion:(void (^)(NSError *))arg2;
@end
