//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppSSO/SOExtensionContextProtocol-Protocol.h>

@class NSDictionary, NSError, NSString, NSURL, SOAuthorizationCredential;

@protocol SOHostExtensionContextProtocol <SOExtensionContextProtocol>
- (void)requestReauthenticationWithRequestIdentifier:(NSString *)arg1 completion:(void (^)(unsigned long long))arg2;
- (void)canOpenURL:(NSURL *)arg1 completionHandler:(void (^)(_Bool))arg2;
- (void)openURL:(NSURL *)arg1 completionHandler:(void (^)(_Bool))arg2;
- (void)authorization:(NSString *)arg1 didCompleteWithCredential:(SOAuthorizationCredential *)arg2 error:(NSError *)arg3;
- (void)presentAuthorizationViewControllerWithHints:(NSDictionary *)arg1 requestIdentifier:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
@end

