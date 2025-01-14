//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AuthenticationServices/NSObject-Protocol.h>

@class NSData, NSDictionary, NSError, NSHTTPURLResponse, SOAuthorization, SOAuthorizationResult, UIViewController;

@protocol SOAuthorizationDelegate <NSObject>

@optional
- (void)authorization:(SOAuthorization *)arg1 presentViewController:(UIViewController *)arg2 withCompletion:(void (^)(_Bool, NSError *))arg3;
- (void)authorization:(SOAuthorization *)arg1 didCompleteWithError:(NSError *)arg2;
- (void)authorization:(SOAuthorization *)arg1 didCompleteWithAuthorizationResult:(SOAuthorizationResult *)arg2;
- (void)authorization:(SOAuthorization *)arg1 didCompleteWithHTTPResponse:(NSHTTPURLResponse *)arg2 httpBody:(NSData *)arg3;
- (void)authorization:(SOAuthorization *)arg1 didCompleteWithHTTPAuthorizationHeaders:(NSDictionary *)arg2;
- (void)authorizationDidComplete:(SOAuthorization *)arg1;
- (void)authorizationDidCancel:(SOAuthorization *)arg1;
- (void)authorizationDidNotHandle:(SOAuthorization *)arg1;
@end

