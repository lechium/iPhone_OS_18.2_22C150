//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AuthKit/NSObject-Protocol.h>

@class AKWalrusContext, NSString;

@protocol AKWalrusDaemonProtocol <NSObject>
- (void)postWalrusStateUpdateToServerWithContext:(AKWalrusContext *)arg1 urlBagKey:(NSString *)arg2 username:(NSString *)arg3 password:(NSString *)arg4 completion:(void (^)(NSError *))arg5;
- (void)verifyEnableWalrusAllowedWithContext:(AKWalrusContext *)arg1 completion:(void (^)(NSError *))arg2;
- (void)removeAllPCSAuthCredentialWithCompletion:(void (^)(NSError *))arg1;
- (void)PCSAuthContextForWebSessionIdentifier:(NSString *)arg1 serviceName:(NSString *)arg2 completion:(void (^)(AKPCSAuthContext *, NSError *))arg3;
@end

