//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString, SecDbKeychainSerializedMetadata, _SFAuthenticatedCiphertext;

@interface SecDbKeychainMetadata : NSObject
{
    SecDbKeychainSerializedMetadata *_serializedHolder;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000013ed3f
@property(readonly) NSString *tamperCheck;
@property(readonly) _SFAuthenticatedCiphertext *wrappedKey;
@property(readonly) _SFAuthenticatedCiphertext *ciphertext;
@property(readonly) NSData *serializedRepresentation;
- (id)initWithData:(id)arg1;	// IMP=0x001000000013e990
- (id)initWithCiphertext:(id)arg1 wrappedKey:(id)arg2 tamperCheck:(id)arg3 error:(id *)arg4;	// IMP=0x001000000013e78d

@end
