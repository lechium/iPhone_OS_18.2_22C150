//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/MKFBulletinTimeSpecification-Protocol.h>
#import <HomeKitDaemon/MKFTimeOfDayTimeSpecificationPublicExtensions-Protocol.h>

@class MKFTimeOfDayTimeSpecificationDatabaseID, NSNumber;

@protocol MKFTimeOfDayTimeSpecification <MKFBulletinTimeSpecification, MKFTimeOfDayTimeSpecificationPublicExtensions>
@property(readonly, copy, nonatomic) MKFTimeOfDayTimeSpecificationDatabaseID *databaseID;
@property(copy, nonatomic) NSNumber *minute;
@property(copy, nonatomic) NSNumber *hour;
@end
