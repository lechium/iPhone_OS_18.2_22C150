//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDHeadphoneExposureStatisticsResult;

__attribute__((visibility("hidden")))
@interface HDHeadphoneExposureUpdateDoseResult : NSObject
{
    HDHeadphoneExposureStatisticsResult *_statistics;	// 8 = 0x8
}

+ (id)resultForUpdate:(id)arg1;	// IMP=0x00600000000038ea
+ (id)resultForNoChange;	// IMP=0x00600000000038c6
- (void).cxx_destruct;	// IMP=0x00000000000039cc
@property(retain, nonatomic) HDHeadphoneExposureStatisticsResult *statistics; // @synthesize statistics=_statistics;
- (id)_initWithStatistics:(id)arg1;	// IMP=0x0000000000003933

@end

