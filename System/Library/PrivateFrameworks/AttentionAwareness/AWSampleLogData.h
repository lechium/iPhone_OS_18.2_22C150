//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AWSampleLogData : NSObject
{
    _Bool _pollingClient;	// 8 = 0x8
    _Bool _sampleSucceeded;	// 9 = 0x9
    _Bool _activateMotionDetect;	// 10 = 0xa
    NSString *_identifier;	// 16 = 0x10
    unsigned long long _samplingInterval;	// 24 = 0x18
    unsigned long long _cumulativeSamplingTime;	// 32 = 0x20
    unsigned long long _samplingStartTime;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000003ce40
@property(nonatomic) _Bool activateMotionDetect; // @synthesize activateMotionDetect=_activateMotionDetect;
@property(nonatomic) _Bool sampleSucceeded; // @synthesize sampleSucceeded=_sampleSucceeded;
@property(nonatomic) unsigned long long samplingStartTime; // @synthesize samplingStartTime=_samplingStartTime;
@property(nonatomic) unsigned long long cumulativeSamplingTime; // @synthesize cumulativeSamplingTime=_cumulativeSamplingTime;
@property(nonatomic) _Bool pollingClient; // @synthesize pollingClient=_pollingClient;
@property(nonatomic) unsigned long long samplingInterval; // @synthesize samplingInterval=_samplingInterval;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;

@end
