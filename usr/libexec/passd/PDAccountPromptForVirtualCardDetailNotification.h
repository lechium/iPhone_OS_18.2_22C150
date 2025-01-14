//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface PDAccountPromptForVirtualCardDetailNotification
{
    NSString *_virtualCardIdentifier;	// 136 = 0x88
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000002d78a4
- (void).cxx_destruct;	// IMP=0x00200000002d7947
@property(readonly, nonatomic) NSString *virtualCardIdentifier; // @synthesize virtualCardIdentifier=_virtualCardIdentifier;
- (id)notificationContentWithDataSource:(id)arg1;	// IMP=0x00100000002d78b7
- (unsigned long long)notificationType;	// IMP=0x00100000002d78ac
- (id)_notificationIdentifierForAccountIdentifier:(id)arg1 virtualCardIdentifier:(id)arg2;	// IMP=0x00100000002d77fe
- (id)initWithAccountIdentifier:(id)arg1 virtualCardIdentifier:(id)arg2 forPassUniqueIdentifier:(id)arg3;	// IMP=0x00100000002d76d2

@end

