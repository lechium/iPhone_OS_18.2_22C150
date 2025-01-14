//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSString;

@interface CARCarPlayServiceMessageIdentification : NSObject
{
    _Bool _supportsWiredCarPlay;	// 8 = 0x8
    _Bool _supportsWiredToWirelessPairing;	// 9 = 0x9
    _Bool _supportsEnhancedIntegration;	// 10 = 0xa
    _Bool _supportsThemeAssets;	// 11 = 0xb
    NSString *_displayName;	// 16 = 0x10
    NSString *_modelName;	// 24 = 0x18
    NSString *_PPID;	// 32 = 0x20
    NSData *_authenticationSerialNumber;	// 40 = 0x28
    NSArray *_accessoryProtocols;	// 48 = 0x30
}

+ (unsigned long long)identifier;	// IMP=0x0020000000038e5b
- (void).cxx_destruct;	// IMP=0x0020000000039a28
@property(readonly, nonatomic) _Bool supportsThemeAssets; // @synthesize supportsThemeAssets=_supportsThemeAssets;
@property(readonly, nonatomic) _Bool supportsEnhancedIntegration; // @synthesize supportsEnhancedIntegration=_supportsEnhancedIntegration;
@property(readonly, nonatomic) _Bool supportsWiredToWirelessPairing; // @synthesize supportsWiredToWirelessPairing=_supportsWiredToWirelessPairing;
@property(readonly, nonatomic) _Bool supportsWiredCarPlay; // @synthesize supportsWiredCarPlay=_supportsWiredCarPlay;
@property(readonly, copy, nonatomic) NSArray *accessoryProtocols; // @synthesize accessoryProtocols=_accessoryProtocols;
@property(readonly, copy, nonatomic) NSData *authenticationSerialNumber; // @synthesize authenticationSerialNumber=_authenticationSerialNumber;
// Error: Property attributes should begin with the type ('T') attribute, property name: PPID
// Property attributes: (null)

@property(readonly, copy, nonatomic) NSString *modelName; // @synthesize modelName=_modelName;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (id)dictionaryRepresentation;	// IMP=0x0010000000039742
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x0010000000038e66
@property(readonly, copy) NSString *description;
- (id)initWithDisplayName:(id)arg1 modelName:(id)arg2 PPID:(id)arg3 authenticationSerialNumber:(id)arg4 accessoryProtocols:(id)arg5 supportsWiredCarPlay:(_Bool)arg6 supportsWiredToWirelessPairing:(_Bool)arg7 supportsEnhancedIntegration:(_Bool)arg8 supportsThemeAssets:(_Bool)arg9;	// IMP=0x0010000000038b62

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

