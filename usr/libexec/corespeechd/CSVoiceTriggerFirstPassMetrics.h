//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface CSVoiceTriggerFirstPassMetrics : NSObject
{
    NSNumber *_firstPassInfoGeneratedTime;	// 8 = 0x8
    NSNumber *_firstPassInfoProcessedTime;	// 16 = 0x10
}

+ (id)CSVoiceTriggerFirstPassMetricsWithFirstPassInfoGeneratedTime:(unsigned long long)arg1 firstPassInfoProcessedTime:(unsigned long long)arg2;	// IMP=0x004000000008c9e9
- (void).cxx_destruct;	// IMP=0x002000000008c9c1
@property(readonly, nonatomic) NSNumber *firstPassInfoProcessedTime; // @synthesize firstPassInfoProcessedTime=_firstPassInfoProcessedTime;
@property(readonly, nonatomic) NSNumber *firstPassInfoGeneratedTime; // @synthesize firstPassInfoGeneratedTime=_firstPassInfoGeneratedTime;
- (id)_initWithFirstPassInfoGeneratedTime:(unsigned long long)arg1 firstPassInfoProcessedTime:(unsigned long long)arg2;	// IMP=0x001000000008c900

@end

