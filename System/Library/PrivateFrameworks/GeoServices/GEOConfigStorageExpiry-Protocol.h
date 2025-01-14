//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSDictionary, NSString;

@protocol GEOConfigStorageExpiry
- (void)resync;
- (void)clearConfigKeyExpiry:(NSString *)arg1;
- (void)setConfigKeyExpiry:(NSString *)arg1 date:(NSDate *)arg2 osVersion:(NSString *)arg3;
- (_Bool)getConfigKeyExpiry:(NSString *)arg1 date:(id *)arg2 osVersion:(id *)arg3;
- (_Bool)getConfigKeyIsExpired:(NSString *)arg1;
- (NSDictionary *)getAllExpiringKeys;
@end

