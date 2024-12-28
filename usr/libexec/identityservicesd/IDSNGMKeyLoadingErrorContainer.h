//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSNumber;

@interface IDSNGMKeyLoadingErrorContainer : NSObject
{
    _Bool _hasRegisteredContainer;	// 8 = 0x8
    _Bool _hasUnregisteredContainer;	// 9 = 0x9
    NSError *_registeredKeychainError;	// 16 = 0x10
    NSError *_unregisteredKeychainError;	// 24 = 0x18
    NSError *_registeredDeserializationError;	// 32 = 0x20
    NSError *_unregisteredDeserializationError;	// 40 = 0x28
    NSError *_generationError;	// 48 = 0x30
    NSError *_rollingError;	// 56 = 0x38
    NSError *_identityToRegisterError;	// 64 = 0x40
    NSNumber *_shouldHaveRegisteredIdentity;	// 72 = 0x48
    NSNumber *_shouldHaveUnregisteredIdentity;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00200000003477a8
@property(nonatomic) _Bool hasUnregisteredContainer; // @synthesize hasUnregisteredContainer=_hasUnregisteredContainer;
@property(nonatomic) _Bool hasRegisteredContainer; // @synthesize hasRegisteredContainer=_hasRegisteredContainer;
@property(retain, nonatomic) NSNumber *shouldHaveUnregisteredIdentity; // @synthesize shouldHaveUnregisteredIdentity=_shouldHaveUnregisteredIdentity;
@property(retain, nonatomic) NSNumber *shouldHaveRegisteredIdentity; // @synthesize shouldHaveRegisteredIdentity=_shouldHaveRegisteredIdentity;
@property(retain, nonatomic) NSError *identityToRegisterError; // @synthesize identityToRegisterError=_identityToRegisterError;
@property(retain, nonatomic) NSError *rollingError; // @synthesize rollingError=_rollingError;
@property(retain, nonatomic) NSError *generationError; // @synthesize generationError=_generationError;
@property(retain, nonatomic) NSError *unregisteredDeserializationError; // @synthesize unregisteredDeserializationError=_unregisteredDeserializationError;
@property(retain, nonatomic) NSError *registeredDeserializationError; // @synthesize registeredDeserializationError=_registeredDeserializationError;
@property(retain, nonatomic) NSError *unregisteredKeychainError; // @synthesize unregisteredKeychainError=_unregisteredKeychainError;
@property(retain, nonatomic) NSError *registeredKeychainError; // @synthesize registeredKeychainError=_registeredKeychainError;

@end
