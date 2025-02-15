//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/MKFHomeMediaSettingPublicExtensions-Protocol.h>
#import <HomeKitDaemon/MKFHomeSetting-Protocol.h>

@class MKFHomeMediaSettingDatabaseID, NSNumber, NSString;

@protocol MKFHomeMediaSetting <MKFHomeSetting, MKFHomeMediaSettingPublicExtensions>
@property(readonly, copy, nonatomic) MKFHomeMediaSettingDatabaseID *databaseID;
@property(copy, nonatomic) NSNumber *minimumMediaUserPrivilege;
@property(copy, nonatomic) NSNumber *mediaPeerToPeerEnabled;
@property(copy, nonatomic) NSString *mediaPassword;
@end

