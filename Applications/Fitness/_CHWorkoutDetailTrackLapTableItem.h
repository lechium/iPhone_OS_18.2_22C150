//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CHWorkoutTrackLap;

@interface _CHWorkoutDetailTrackLapTableItem
{
    long long _lapIndex;	// 24 = 0x18
    unsigned long long _distanceUnit;	// 32 = 0x20
    CHWorkoutTrackLap *_trackLap;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000640b4
@property(retain, nonatomic) CHWorkoutTrackLap *trackLap; // @synthesize trackLap=_trackLap;
@property(nonatomic) unsigned long long distanceUnit; // @synthesize distanceUnit=_distanceUnit;
@property(nonatomic) long long lapIndex; // @synthesize lapIndex=_lapIndex;

@end
