//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ITMLKit/IKJSObject.h>

@class NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SUUIJSTelephony : IKJSObject
{
    _Bool _isObserving;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_telephonyQueue;	// 16 = 0x10
    struct __CTServerConnection *_telephonyServer;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001f9d11
- (struct __CTServerConnection *)_telephonyServer;	// IMP=0x00000000001f9af1
- (void)sendSMSWithBodyText:(id)arg1:(id)arg2:(id)arg3;	// IMP=0x00000000001f99e5
@property(readonly, nonatomic) NSString *providerName;
@property(readonly, nonatomic) NSString *phoneNumber;
@property(readonly, nonatomic) NSString *operatorName;
@property(readonly, nonatomic) NSString *mobileNetworkCode;
@property(readonly, nonatomic) NSString *mobileCountryCode;
@property(readonly, nonatomic, getter=isCellularRoaming) _Bool cellularRoaming;
- (id)formattedPhoneNumber:(id)arg1;	// IMP=0x00000000001f976f
@property(readonly, nonatomic) NSString *countryCode;
- (void)beginObserving;	// IMP=0x00000000001f968e
- (void)dealloc;	// IMP=0x00000000001f95b3
- (id)initWithAppContext:(id)arg1;	// IMP=0x00000000001f9554

@end

