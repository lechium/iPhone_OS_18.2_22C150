//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/HDJournalableOperation.h>

__attribute__((visibility("hidden")))
@interface HDMedicationTimeZoneDetectionOperation : HDJournalableOperation
{
    unsigned long long _motive;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000004252d
@property(readonly) unsigned long long motive; // @synthesize motive=_motive;
- (_Bool)performWithProfile:(id)arg1 transaction:(id)arg2 error:(id *)arg3;	// IMP=0x000000000004259d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000042573
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000042535
- (id)initWithMotive:(unsigned long long)arg1;	// IMP=0x00000000000424e9
- (id)init;	// IMP=0x000000000004246f

@end

