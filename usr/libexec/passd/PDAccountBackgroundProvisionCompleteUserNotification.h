//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PDAccountBackgroundProvisionCompleteUserNotification
{
    unsigned long long _feature;	// 160 = 0xa0
    _Bool _supportsInStorePayment;	// 168 = 0xa8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00400000002dc636
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00200000002dc6f4
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000002dc63e
- (id)_messageString;	// IMP=0x00100000002dc5ad
- (id)_titleString;	// IMP=0x00100000002dc57a
- (id)notificationContentWithDataSource:(id)arg1;	// IMP=0x00100000002dc4bd
- (_Bool)isValid;	// IMP=0x00100000002dc4a8
- (unsigned long long)notificationType;	// IMP=0x00100000002dc49d
- (id)initWithFeatureIdentifier:(unsigned long long)arg1 passUniqueIdentifier:(id)arg2 supportsInStorePayment:(_Bool)arg3;	// IMP=0x00100000002dc38a

@end

