//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@protocol STContactsServiceProtocol
- (void)authenticateRestrictionsPasscode:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)restrictionsPasscodeEntryAttemptCountAndTimeoutDateWithCompletionHandler:(void (^)(NSNumber *, NSDate *, NSError *))arg1;
- (void)presentRemotePINControllerWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)isRestrictionsPasscodeSetWithCompletionHandler:(void (^)(_Bool, NSError *))arg1;
@end
