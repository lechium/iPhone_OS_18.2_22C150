//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/HDJournalableOperation.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface HDMedicationScheduleLogUnloggedMedicationsOperation : HDJournalableOperation
{
    NSString *_scheduledItemIdentifier;	// 8 = 0x8
    long long _status;	// 16 = 0x10
    NSDate *_logDate;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000001dfb6
- (void).cxx_destruct;	// IMP=0x000000000001e163
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001e058
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001dfbe
- (_Bool)performWithProfile:(id)arg1 transaction:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001df6b
- (id)initWithScheduledItemIdentifier:(id)arg1 status:(long long)arg2 logDate:(id)arg3;	// IMP=0x000000000001de97
- (id)init;	// IMP=0x000000000001de1d

@end
