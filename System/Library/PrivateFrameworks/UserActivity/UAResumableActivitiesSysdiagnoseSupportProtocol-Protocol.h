//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UserActivity/NSObject-Protocol.h>

@class NSDictionary, NSString;

@protocol UAResumableActivitiesSysdiagnoseSupportProtocol <NSObject>
- (void)doCopyRecentActions:(NSDictionary *)arg1 completionHandler:(void (^)(NSArray *))arg2;
- (void)doGetSysdiagnoseStringsIncludingPrivateData:(_Bool)arg1 completionHandler:(void (^)(NSArray *))arg2;
- (void)doNOP:(NSString *)arg1 withCompletionHandler:(void (^)(NSString *, NSError *))arg2;
@end

