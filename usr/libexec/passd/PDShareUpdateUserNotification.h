//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface PDShareUpdateUserNotification
{
    NSArray *_shareIdentifiers;	// 160 = 0xa0
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000002dbe61
- (void).cxx_destruct;	// IMP=0x00200000002dbe7a
@property(readonly, nonatomic) NSArray *shareIdentifiers; // @synthesize shareIdentifiers=_shareIdentifiers;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000002dbde4
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000002dbcf2
- (id)description;	// IMP=0x00100000002dbb74
- (unsigned long long)notificationType;	// IMP=0x00100000002dbb69
- (id)initWithTitle:(id)arg1 message:(id)arg2 forPassUniqueIdentifier:(id)arg3 shareIdentifiers:(id)arg4;	// IMP=0x00100000002db9ec

@end

