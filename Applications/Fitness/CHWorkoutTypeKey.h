//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CHWorkoutTypeKey : NSObject
{
    _Bool _indoor;	// 8 = 0x8
    unsigned long long _activityType;	// 16 = 0x10
    NSString *_workoutBrandName;	// 24 = 0x18
    long long _swimLocationType;	// 32 = 0x20
}

+ (_Bool)historyFilterDisambiguatesLocationForActivityType:(unsigned long long)arg1;	// IMP=0x0020000000092fc2
+ (id)initForWorkout:(id)arg1;	// IMP=0x0010000000092e91
+ (id)emptyKey;	// IMP=0x0010000000092b90
- (void).cxx_destruct;	// IMP=0x0020000000093048
@property(nonatomic) long long swimLocationType; // @synthesize swimLocationType=_swimLocationType;
@property(copy, nonatomic) NSString *workoutBrandName; // @synthesize workoutBrandName=_workoutBrandName;
@property(nonatomic, getter=isIndoor) _Bool indoor; // @synthesize indoor=_indoor;
@property(nonatomic) unsigned long long activityType; // @synthesize activityType=_activityType;
- (unsigned long long)hash;	// IMP=0x0010000000092e0c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000092c6d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000092bee

@end
