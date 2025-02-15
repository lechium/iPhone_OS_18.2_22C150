//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SPOwner/NSObject-Protocol.h>

@class NSDateInterval, NSError, NSString, NSUUID;

@protocol SPFirmwareUpdateSessionProtocol <NSObject>
- (void)updateBeaconUUID:(NSUUID *)arg1 firmwareUpdateState:(long long)arg2 systemVersion:(NSString *)arg3 error:(NSError *)arg4 completion:(void (^)(_Bool))arg5;
- (void)connectionTokensForBeaconUUID:(NSUUID *)arg1 dateInterval:(NSDateInterval *)arg2 completion:(void (^)(NSArray *))arg3;
- (void)candidateBeaconsWithCompletion:(void (^)(NSArray *))arg1;
@end

