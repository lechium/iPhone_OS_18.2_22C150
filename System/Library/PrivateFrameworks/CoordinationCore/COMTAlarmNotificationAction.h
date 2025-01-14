//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface COMTAlarmNotificationAction
{
    NSString *_reason;	// 8 = 0x8
    NSArray *_alarms;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000007b6b0
- (void).cxx_destruct;	// IMP=0x000000000007b82b
@property(readonly, copy, nonatomic) NSArray *alarms; // @synthesize alarms=_alarms;
@property(readonly, copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000007b6c3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007b6b8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000007b5dc
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000007b332
- (id)initWithReason:(id)arg1 alarms:(id)arg2;	// IMP=0x000000000007b26b

@end

