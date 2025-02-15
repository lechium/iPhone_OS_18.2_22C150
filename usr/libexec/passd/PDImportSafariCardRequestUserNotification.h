//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface PDImportSafariCardRequestUserNotification
{
    NSString *_networkName;	// 160 = 0xa0
    NSString *_fpanSuffix;	// 168 = 0xa8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00400000002dd986
+ (id)notificationIdentifierForFPANSuffix:(id)arg1 networkName:(id)arg2;	// IMP=0x00100000002dd68e
+ (id)notificationIdentifierForPaymentSafariCredential:(id)arg1;	// IMP=0x00100000002dd5ca
- (void).cxx_destruct;	// IMP=0x00200000002ddb1c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000002dda7d
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000002dd98e
- (id)_messageString;	// IMP=0x00100000002dd956
- (id)_subtitleString;	// IMP=0x00100000002dd945
- (id)notificationContentWithDataSource:(id)arg1;	// IMP=0x00100000002dd888
- (unsigned long long)notificationType;	// IMP=0x00100000002dd87d
- (id)initWithFPANSuffix:(id)arg1 networkName:(id)arg2;	// IMP=0x00100000002dd76b
- (id)initWithPaymentSafariCredential:(id)arg1;	// IMP=0x00100000002dd6b3

@end

