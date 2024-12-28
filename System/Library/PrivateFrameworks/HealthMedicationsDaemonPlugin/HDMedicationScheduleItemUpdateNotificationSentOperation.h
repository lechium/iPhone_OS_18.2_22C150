//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/HDJournalableOperation.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HDMedicationScheduleItemUpdateNotificationSentOperation : HDJournalableOperation
{
    NSString *_itemIdentifier;	// 8 = 0x8
    _Bool _notificationSent;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000001dcc4
- (void).cxx_destruct;	// IMP=0x000000000001de0a
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001dd4b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001dccc
- (_Bool)performWithProfile:(id)arg1 transaction:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001dc8c
- (id)initWithScheduleItemIdentifier:(id)arg1 notificationSent:(_Bool)arg2;	// IMP=0x000000000001dc0d
- (id)init;	// IMP=0x000000000001db93

@end
