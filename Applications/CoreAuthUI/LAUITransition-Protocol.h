//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class LACachedExternalizedContext, NSDictionary, NSError, NSString, NSURL;
@protocol LABackoffCounter, LARemoteUIHost, LAUIMechanism;

@protocol LAUITransition <NSObject>

@optional
@property(copy, nonatomic) CDUnknownBlockType appearedNotification;
// Preceding property had unknown attributes: ?
// Original attribute string: T@?,?,C,N

@property(copy, nonatomic) CDUnknownBlockType disappearedNotification;
// Preceding property had unknown attributes: ?
// Original attribute string: T@?,?,C,N

@property(nonatomic) _Bool appeared;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) _Bool disappeared;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) _Bool awaitingDissappear;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(retain, nonatomic) NSString *authenticationSubtitle;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,&,N

@property(retain, nonatomic) NSString *authenticationTitle;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,&,N

@property(readonly, nonatomic) NSDictionary *internalInfo;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSDictionary",?,R,N

@property(readonly, nonatomic) LACachedExternalizedContext *cachedExternalizedContext;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"LACachedExternalizedContext",?,R,N

@property(readonly, nonatomic) NSString *callerBundleId;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,N

@property(readonly, nonatomic) _Bool callerNameOverride;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, nonatomic) NSString *callerName;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,N

@property(retain, nonatomic) id <LABackoffCounter> backoffCounter;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"<LABackoffCounter>",?,&,N

@property(readonly, nonatomic) NSDictionary *options;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSDictionary",?,R,N

@property(readonly, nonatomic) long long policy;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,R,N

@property(readonly, nonatomic) id <LARemoteUIHost> remoteUIHost;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"<LARemoteUIHost>",?,R,N

@property(readonly, nonatomic) id <LAUIMechanism> mechanism;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"<LAUIMechanism>",?,R,N

- (void)uiContinue;
- (void)uiOpenURL:(NSURL *)arg1;
- (void)uiDismissed;
- (void)uiFallbackWithCapturedKeyEventString:(NSString *)arg1;
- (void)uiFallback;
- (void)uiCancelWithError:(NSError *)arg1;
- (void)uiCancel;
- (void)dismissChildWithCompletionHandler:(void (^)(void))arg1;
- (void)didReceiveAuthenticationData;
- (id)initWithInternalInfo:(NSDictionary *)arg1 parent:(id)arg2;
@end

