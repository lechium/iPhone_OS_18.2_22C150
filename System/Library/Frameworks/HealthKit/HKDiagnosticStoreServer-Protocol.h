//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol HKDiagnosticStoreServer <NSObject>
- (void)remote_fetchSQLPragma:(long long)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (void)remote_fetchURLForAnalyticsFileWithName:(NSString *)arg1 completion:(void (^)(NSURL *, NSError *))arg2;
- (void)remote_fetchDiagnosticsWithKeys:(NSArray *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
@end
