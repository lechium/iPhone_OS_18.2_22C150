//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/MKFCharacteristic-Protocol.h>
#import <HomeKitDaemon/MKFFloatCharacteristicPublicExtensions-Protocol.h>

@class MKFFloatCharacteristicDatabaseID, NSNumber;
@protocol MKFHome;

@protocol MKFFloatCharacteristic <MKFCharacteristic, MKFFloatCharacteristicPublicExtensions>
@property(readonly) id <MKFHome> home;
@property(readonly, copy, nonatomic) MKFFloatCharacteristicDatabaseID *databaseID;
@property(copy, nonatomic) NSNumber *stepValue;
@property(copy, nonatomic) NSNumber *minimumValue;
@property(copy, nonatomic) NSNumber *maximumValue;
@end

