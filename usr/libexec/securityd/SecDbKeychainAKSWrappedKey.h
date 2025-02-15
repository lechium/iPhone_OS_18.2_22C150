//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, SecDbKeychainSerializedAKSWrappedKey;

@interface SecDbKeychainAKSWrappedKey : NSObject
{
    SecDbKeychainSerializedAKSWrappedKey *_serializedHolder;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000013e77d
@property(readonly) unsigned int type;
@property(readonly) NSData *refKeyBlob;
@property(readonly) NSData *wrappedKey;
@property(readonly) NSData *serializedRepresentation;
- (id)initWithData:(id)arg1;	// IMP=0x001000000013e613
- (id)initRefKeyWrappedKeyWithData:(id)arg1 refKeyBlob:(id)arg2;	// IMP=0x001000000013e546
- (id)initRegularWrappedKeyWithData:(id)arg1;	// IMP=0x001000000013e4ab

@end

