//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface PDPassCommutePlanRenewalReminderUserNotification
{
    NSString *_title;	// 136 = 0x88
    NSString *_message;	// 144 = 0x90
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000002c9710
- (void).cxx_destruct;	// IMP=0x00200000002c98fd
@property(readonly, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (id)_messageString;	// IMP=0x00100000002c98c6
- (id)_titleString;	// IMP=0x00100000002c98b1
- (unsigned long long)notificationType;	// IMP=0x00100000002c98a6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000002c9807
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000002c9718
- (id)initWithPaymentPass:(id)arg1 commutePlan:(id)arg2;	// IMP=0x00100000002c93d9

@end

