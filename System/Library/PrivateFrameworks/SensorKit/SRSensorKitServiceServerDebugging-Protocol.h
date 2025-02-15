//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@protocol SRSensorKitServiceServerDebugging
- (void)fetchDeviceInformationForDeviceIdentifiers:(NSArray *)arg1 reply:(void (^)(NSArray *, NSError *))arg2;
- (void)fetchEligibilityStatusForBundleIdentifier:(NSString *)arg1 sensor:(NSString *)arg2 reply:(void (^)(_Bool, NSError *))arg3;
- (void)dumpDefaultsWithReply:(void (^)(NSDictionary *, NSError *))arg1;
- (void)dumpConfigurationsWithReply:(void (^)(NSDictionary *, NSError *))arg1;
- (void)listDatastoreWithReply:(void (^)(NSString *, NSError *))arg1;
- (void)dumpStateCacheWithReply:(void (^)(NSDictionary *, NSError *))arg1;
- (void)dumpClientsWithReply:(void (^)(NSDictionary *, NSError *))arg1;
@end

