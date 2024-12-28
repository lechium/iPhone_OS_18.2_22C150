//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;
@protocol OS_os_log;

__attribute__((visibility("hidden")))
@interface HKChartOverlaySelectedAnalyticsEventConfiguration : NSObject
{
    NSString *_eventName;	// 8 = 0x8
    NSString *_previousContextItemPropertyName;	// 16 = 0x10
    NSString *_currentContextItemPropertyName;	// 24 = 0x18
    NSObject<OS_os_log> *_loggingCategory;	// 32 = 0x20
    NSString *_featureIdentifier;	// 40 = 0x28
    NSNumber *_minimumAge;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000025e1b0
@property(retain, nonatomic) NSNumber *minimumAge; // @synthesize minimumAge=_minimumAge;
@property(copy, nonatomic) NSString *featureIdentifier; // @synthesize featureIdentifier=_featureIdentifier;
@property(retain, nonatomic) NSObject<OS_os_log> *loggingCategory; // @synthesize loggingCategory=_loggingCategory;
@property(readonly, copy, nonatomic) NSString *currentContextItemPropertyName; // @synthesize currentContextItemPropertyName=_currentContextItemPropertyName;
@property(readonly, copy, nonatomic) NSString *previousContextItemPropertyName; // @synthesize previousContextItemPropertyName=_previousContextItemPropertyName;
@property(readonly, copy, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
- (id)initWithEventName:(id)arg1 previousContextItemPropertyName:(id)arg2 currentContextItemPropertyName:(id)arg3;	// IMP=0x000000000025e078

@end
