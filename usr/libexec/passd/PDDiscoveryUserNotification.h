//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKDiscoveryNotification;

@interface PDDiscoveryUserNotification
{
    PKDiscoveryNotification *_discoveryNotification;	// 136 = 0x88
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000002d96f8
+ (id)notificationIdentifierForDiscoveryNotification:(id)arg1;	// IMP=0x00100000002d93da
- (void).cxx_destruct;	// IMP=0x00200000002d995a
@property(retain, nonatomic) PKDiscoveryNotification *discoveryNotification; // @synthesize discoveryNotification=_discoveryNotification;
- (id)notificationContentWithDataSource:(id)arg1;	// IMP=0x00100000002d9823
- (unsigned long long)notificationType;	// IMP=0x00100000002d9818
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000002d979b
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000002d9700
- (id)initWithDiscoveryNotification:(id)arg1 passUniqueIdentifier:(id)arg2;	// IMP=0x00100000002d9449

@end

