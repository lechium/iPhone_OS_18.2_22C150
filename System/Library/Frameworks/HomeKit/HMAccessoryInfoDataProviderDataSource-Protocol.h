//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/NSObject-Protocol.h>

@class HMAccessoryInfoDataProvider, HMHome, NSUUID;

@protocol HMAccessoryInfoDataProviderDataSource <NSObject>
- (_Bool)accessoryInfoDataProvider:(HMAccessoryInfoDataProvider *)arg1 transformHomeUUID:(NSUUID *)arg2 accessoryUUID:(NSUUID *)arg3 toClientHomeIdentifier:(id *)arg4 clientAccessoryIdentifier:(id *)arg5;
- (HMHome *)accessoryInfoDataProvider:(HMAccessoryInfoDataProvider *)arg1 homeWithHomeIdentifier:(NSUUID *)arg2;
@end

