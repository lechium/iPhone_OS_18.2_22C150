//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppIntents/NSObject-Protocol.h>

@protocol LNPerformActionExecutorDelegate <NSObject>
@property(nonatomic, readonly) _Bool hasValidConnection;
@property(nonatomic, readonly) long long connectionIdentifier;
- (_Bool)requestExtendTimeoutAndReturnError:(id *)arg1;
- (_Bool)requestCancelTimeoutAndReturnError:(id *)arg1;
- (void)requestOpenURL:(id)arg1 completionHandler:(void (^)(id, NSError *))arg2;
- (void)requestContinueInApp:(id)arg1 completionHandler:(void (^)(id, NSError *))arg2;
- (void)requestViewSnippetEnvironmentWithCompletionHandler:(void (^)(id))arg1;
- (void)requestParameterNeedsValue:(id)arg1 completionHandler:(void (^)(id, NSError *))arg2;
- (void)requestParameterDisambiguation:(id)arg1 completionHandler:(void (^)(id, NSError *))arg2;
- (void)requestParameterConfirmation:(id)arg1 completionHandler:(void (^)(id, NSError *))arg2;
- (void)requestActionConfirmation:(id)arg1 completionHandler:(void (^)(id, NSError *))arg2;
@end

