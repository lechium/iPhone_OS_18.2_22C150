//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HKMedicationAnalyticsGenericFieldsProvider, NSDictionary, NSNumber;

__attribute__((visibility("hidden")))
@interface HKMedicationNotificationMetric : NSObject
{
    long long _type;	// 8 = 0x8
    NSNumber *_areHealthNotificationsAuthorized;	// 16 = 0x10
    HKMedicationAnalyticsGenericFieldsProvider *_genericDataProvider;	// 24 = 0x18
    NSDictionary *_eventPayload;	// 32 = 0x20
    long long _interactionType;	// 40 = 0x28
}

+ (id)eventName;	// IMP=0x004000000001cc30
- (void).cxx_destruct;	// IMP=0x000000000001d011
@property(nonatomic) long long interactionType; // @synthesize interactionType=_interactionType;
@property(readonly, nonatomic) NSNumber *areHealthNotificationsAuthorized; // @synthesize areHealthNotificationsAuthorized=_areHealthNotificationsAuthorized;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSDictionary *eventPayload; // @synthesize eventPayload=_eventPayload;
- (id)description;	// IMP=0x000000000001cf52
- (id)interactionTypeValue;	// IMP=0x000000000001cc5a
- (id)typeValue;	// IMP=0x000000000001cc3d
- (id)initWithType:(long long)arg1 areHealthNotificationsAuthorized:(id)arg2 dataSource:(id)arg3;	// IMP=0x000000000001cb69

@end

