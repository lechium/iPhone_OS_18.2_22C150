//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNTCCAppAuthorizationRecord, NSArray, NSString;

@protocol CNTCCSettings
- (void)setAuthorizationStatus:(long long)arg1 forBundleIdentifier:(NSString *)arg2 noKillApp:(_Bool)arg3;
- (void)saveAuthorizationRecord:(CNTCCAppAuthorizationRecord *)arg1 dontKillApp:(_Bool)arg2;
- (void)saveAuthorizationRecord:(CNTCCAppAuthorizationRecord *)arg1;
- (CNTCCAppAuthorizationRecord *)authorizationRecordForBundleIdentifier:(NSString *)arg1;
- (NSArray *)authorizationRecords;
@end

