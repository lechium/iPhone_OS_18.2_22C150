//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@protocol BCSXPCDaemonBusinessCallerIDDaemonInterface
- (void)fetchBusinessCallerMetadataForPhoneNumber:(NSString *)arg1 forClientBundleID:(NSString *)arg2 metadataCallback:(void (^)(BCSBusinessCallerItem *))arg3 logoURLCallback:(void (^)(NSURL *))arg4 completion:(void (^)(NSError *))arg5;
- (void)fetchBusinessCallerMetadataForPhoneNumber:(NSString *)arg1 forClientBundleID:(NSString *)arg2 completion:(void (^)(BCSBusinessCallerItem *, NSError *))arg3;
- (void)isBusinessCallerRegisteredForPhoneNumber:(NSString *)arg1 forClientBundleID:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
@end
