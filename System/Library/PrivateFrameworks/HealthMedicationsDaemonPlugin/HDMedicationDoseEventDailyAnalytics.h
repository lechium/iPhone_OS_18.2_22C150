//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDProfile, NSCalendar, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface HDMedicationDoseEventDailyAnalytics : NSObject
{
    HDProfile *_profile;	// 8 = 0x8
    NSCalendar *_calendar;	// 16 = 0x10
    NSDate *_currentDate;	// 24 = 0x18
}

+ (id)_predicateForDoseEventsBetweenDate:(id)arg1 andDate:(id)arg2;	// IMP=0x001000000000c95d
+ (id)_predicateForDoseEventsLoggedSinceDate:(id)arg1;	// IMP=0x001000000000c7dd
+ (id)_countOfDoseEventsWithPredicate:(id)arg1 transaction:(id)arg2 error:(id *)arg3;	// IMP=0x001000000000c715
+ (id)_doseEventCountLoggedSinceDate:(id)arg1 transaction:(id)arg2;	// IMP=0x001000000000c58b
- (void).cxx_destruct;	// IMP=0x000000000000caec
- (id)_hasLoggedAllScheduledMedsInPreviousDayPayloadWithTransaction:(id)arg1;	// IMP=0x000000000000bfd4
- (id)_weeksSinceFirstLoggedMedPayload;	// IMP=0x000000000000bdb4
- (id)_hasLoggedMedsInPastPayloadWithTransaction:(id)arg1;	// IMP=0x000000000000b509
- (id)makeIHAGatedEventPayloadWithDataSource:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000b32f
- (id)makeUnrestrictedEventPayloadWithDataSource:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000b1b5
@property(readonly, nonatomic) NSString *eventName;
@property(readonly, nonatomic) _Bool isEventSubmissionIHAGated;
- (id)initWithProfile:(id)arg1 calendar:(id)arg2 currentDate:(id)arg3;	// IMP=0x000000000000b087

@end

