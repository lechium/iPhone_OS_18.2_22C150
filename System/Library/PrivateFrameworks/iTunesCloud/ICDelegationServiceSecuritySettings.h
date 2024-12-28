//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ICDelegationServiceSecuritySettings : NSObject
{
    long long _securityMode;	// 8 = 0x8
    NSString *_password;	// 16 = 0x10
}

+ (void)getDeviceSenderSettingsForReceiverName:(id)arg1 securityMode:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00600000001950dc
+ (void)getDeviceReceiverSettingsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0060000000195033
- (void).cxx_destruct;	// IMP=0x0000000000195023
@property(readonly, copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(readonly, nonatomic) long long securityMode; // @synthesize securityMode=_securityMode;
- (id)description;	// IMP=0x0000000000194f7f
- (id)_init;	// IMP=0x0000000000194f50

@end
