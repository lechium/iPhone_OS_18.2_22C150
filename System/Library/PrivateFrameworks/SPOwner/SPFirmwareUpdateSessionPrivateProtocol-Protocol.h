//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SPOwner/SPFirmwareUpdateSessionProtocol-Protocol.h>

@class NSDateInterval, NSUUID;

@protocol SPFirmwareUpdateSessionPrivateProtocol <SPFirmwareUpdateSessionProtocol>
- (void)firmwareUpdateStateForBeaconUUID:(NSUUID *)arg1 completion:(void (^)(SPFirmwareUpdateStateResult *))arg2;
- (void)beaconsInFirmwareUpdateState:(long long)arg1 dateInterval:(NSDateInterval *)arg2 completion:(void (^)(NSArray *))arg3;
- (void)initiateFirmwareUpdateForAllEligibleBeaconsWithCompletion:(void (^)(_Bool))arg1;
@end

