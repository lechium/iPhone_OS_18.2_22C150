//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class AMSAccountIdentity, NSArray, NSDate, NSString;

@protocol AMSAccountCachedServerDataServiceInterface <NSObject>
- (void)manualSyncForAccountID:(AMSAccountIdentity *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)queueMetricsEventNotingExpiry:(NSDate *)arg1 appID:(NSString *)arg2 reply:(void (^)(_Bool, NSError *))arg3;
- (void)accountAuthSyncForAccountID:(AMSAccountIdentity *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)setPersonalizationState:(_Bool)arg1 forAccountID:(AMSAccountIdentity *)arg2 reply:(void (^)(_Bool, NSError *))arg3;
- (void)setAutoPlayState:(_Bool)arg1 forAccountID:(AMSAccountIdentity *)arg2 reply:(void (^)(_Bool, NSError *))arg3;
- (void)getDataForAccountIDs:(NSArray *)arg1 reply:(void (^)(AMSAccountCachedServerDataResponse *, NSError *))arg2;
@end

