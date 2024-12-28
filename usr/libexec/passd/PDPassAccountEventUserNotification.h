//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, PKAccountEvent;

@interface PDPassAccountEventUserNotification
{
    _Bool _requiresDebtCollectionNotices;	// 136 = 0x88
    PKAccountEvent *_accountEvent;	// 144 = 0x90
    unsigned long long _featureIdentifier;	// 152 = 0x98
    NSString *_transactionSourceIdentifier;	// 160 = 0xa0
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000002d27b8
- (void).cxx_destruct;	// IMP=0x00200000002d3c8f
@property(readonly, copy, nonatomic) NSString *transactionSourceIdentifier; // @synthesize transactionSourceIdentifier=_transactionSourceIdentifier;
@property(readonly, nonatomic) _Bool requiresDebtCollectionNotices; // @synthesize requiresDebtCollectionNotices=_requiresDebtCollectionNotices;
@property(readonly, nonatomic) unsigned long long featureIdentifier; // @synthesize featureIdentifier=_featureIdentifier;
@property(readonly, nonatomic) PKAccountEvent *accountEvent; // @synthesize accountEvent=_accountEvent;
- (id)_messageString;	// IMP=0x00100000002d3680
- (id)_subtitleString;	// IMP=0x00100000002d3328
- (_Bool)shouldShowNotification;	// IMP=0x00100000002d2ecd
- (id)_accountEventApplicationMessageContentWithTitleText:(id)arg1 messageText:(id)arg2;	// IMP=0x00100000002d2da8
- (id)_accountEventApplicationMessageGroupDescriptor;	// IMP=0x00100000002d2d4c
- (_Bool)_hasSummaryTile;	// IMP=0x00100000002d2ca7
- (id)applicationMessageContent;	// IMP=0x00100000002d2c0c
- (id)notificationContentWithDataSource:(id)arg1;	// IMP=0x00100000002d2ae6
- (_Bool)isValid;	// IMP=0x00100000002d29d6
- (unsigned long long)notificationType;	// IMP=0x00100000002d29cb
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000002d28ed
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000002d27c0
- (id)initWithPassUniqueIdentifier:(id)arg1 transactionSourceIdentifier:(id)arg2 accountEvent:(id)arg3 featureIdentifier:(unsigned long long)arg4 requiresDebtCollectionNotices:(_Bool)arg5;	// IMP=0x00100000002d2374

@end
