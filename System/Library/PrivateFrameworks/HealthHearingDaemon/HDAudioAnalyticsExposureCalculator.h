//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDProfile, NSDate;

__attribute__((visibility("hidden")))
@interface HDAudioAnalyticsExposureCalculator : NSObject
{
    NSDate *_targetDate;	// 8 = 0x8
    HDProfile *_profile;	// 16 = 0x10
    long long _audioExposureType;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000012242
@property(nonatomic) long long audioExposureType; // @synthesize audioExposureType=_audioExposureType;
@property(retain, nonatomic) HDProfile *profile; // @synthesize profile=_profile;
@property(retain, nonatomic) NSDate *targetDate; // @synthesize targetDate=_targetDate;
- (id)sevenDayDoseForMostRecentNotificationWithError:(id *)arg1;	// IMP=0x0000000000011f8a
- (id)notificationCountForRollingDays:(long long)arg1 error:(id *)arg2;	// IMP=0x0000000000011dba
- (id)audioExposureResultWithError:(id *)arg1;	// IMP=0x0000000000011b21
- (id)initWithTargetDate:(id)arg1 exposureType:(long long)arg2 profile:(id)arg3;	// IMP=0x0000000000011a5d

@end

