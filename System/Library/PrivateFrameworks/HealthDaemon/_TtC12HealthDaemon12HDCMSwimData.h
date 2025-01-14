//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CMSwimData, MISSING_TYPE, NSDate, NSUUID;

@interface _TtC12HealthDaemon12HDCMSwimData : NSObject
{
    MISSING_TYPE *data;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000067900
- (id)init;	// IMP=0x0000000000067890
- (id)init:(id)arg1;	// IMP=0x00000000000677f0
@property(nonatomic, readonly) long long strokeType;
@property(nonatomic, readonly) long long strokeCount;
@property(nonatomic, readonly) double distance;
@property(nonatomic, readonly) long long segment;
@property(nonatomic, readonly) long long lapCount;
@property(nonatomic, readonly) NSUUID *sourceId;
@property(nonatomic, readonly) long long recordId;
@property(nonatomic, readonly) NSDate *endDate;
@property(nonatomic, readonly) NSDate *startDate;
@property(nonatomic, readonly) CMSwimData *data; // @synthesize data;

@end

