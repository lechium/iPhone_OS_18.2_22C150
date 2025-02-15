//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "COMeshNotification.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface COAlarmNotification : COMeshNotification
{
    NSArray *_alarms;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000000707ae
- (void).cxx_destruct;	// IMP=0x00000000000707c7
@property(readonly, copy, nonatomic) NSArray *alarms; // @synthesize alarms=_alarms;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000070719
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000070491
- (id)initWithAlarms:(id)arg1;	// IMP=0x000000000007042d

@end

