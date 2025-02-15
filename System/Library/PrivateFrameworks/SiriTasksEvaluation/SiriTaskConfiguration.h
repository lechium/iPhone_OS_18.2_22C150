//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SiriTaskConfiguration : NSObject
{
    NSString *_eventTime;	// 8 = 0x8
    NSString *_taskName;	// 16 = 0x10
    NSString *_taskType;	// 24 = 0x18
    long long _minDurationInSeconds;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000002cf1
@property(nonatomic) long long minDurationInSeconds; // @synthesize minDurationInSeconds=_minDurationInSeconds;
@property(retain, nonatomic) NSString *taskType; // @synthesize taskType=_taskType;
@property(retain, nonatomic) NSString *taskName; // @synthesize taskName=_taskName;
@property(retain, nonatomic) NSString *eventTime; // @synthesize eventTime=_eventTime;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000029e0
- (id)initWithJSONData:(id)arg1;	// IMP=0x00000000000028fa

@end

