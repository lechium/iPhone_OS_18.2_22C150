//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString;

@interface GKRealTimeMultiplayerSendBulletin
{
    NSString *_bundleIdentifier;	// 136 = 0x88
    NSNumber *_sendReason;	// 144 = 0x90
}

+ (void)loadBulletinsForPushNotification:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0040000000185ec2
- (void).cxx_destruct;	// IMP=0x0020000000186cd7
@property(retain) NSNumber *sendReason; // @synthesize sendReason=_sendReason;
@property(retain) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000185d94
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000185c45
- (id)initWithPushNotification:(id)arg1;	// IMP=0x0010000000185af5

@end
