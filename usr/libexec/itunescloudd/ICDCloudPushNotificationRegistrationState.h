//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface ICDCloudPushNotificationRegistrationState : NSObject
{
    NSMutableDictionary *_accountRegistrationStates;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000118244
- (void)setRegistrationState:(id)arg1 forAccountDSID:(id)arg2;	// IMP=0x001000000011822e
- (id)registrationStateForAccountDSID:(id)arg1;	// IMP=0x0010000000118218
- (id)dictionaryRepresentation;	// IMP=0x001000000011811d
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x0010000000118002

@end
