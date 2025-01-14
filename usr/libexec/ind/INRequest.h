//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleAccount/AARequest.h>

@class AADeviceInfo, ACAccount, NSData, NSDictionary;

@interface INRequest : AARequest
{
    ACAccount *_account;	// 8 = 0x8
    NSData *_pushToken;	// 16 = 0x10
    NSDictionary *_parameters;	// 24 = 0x18
    AADeviceInfo *_deviceInfoProvider;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000001ad9b
@property(readonly, nonatomic) ACAccount *account; // @synthesize account=_account;
- (id)urlRequest;	// IMP=0x001000000001a8ff
- (id)addBodyParameters:(id)arg1;	// IMP=0x001000000001a8e9
@property(readonly, nonatomic) NSDictionary *parameters;
@property(readonly, nonatomic) AADeviceInfo *deviceInfoProvider;
- (id)_basicBodyParameters;	// IMP=0x001000000001a54f
- (id)initWithAccount:(id)arg1 pushToken:(id)arg2;	// IMP=0x001000000001a3fb

@end

