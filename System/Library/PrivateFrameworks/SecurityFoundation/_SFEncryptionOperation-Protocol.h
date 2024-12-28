//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SecurityFoundation/NSCopying-Protocol.h>
#import <SecurityFoundation/NSObject-Protocol.h>
#import <SecurityFoundation/NSSecureCoding-Protocol.h>

@class NSData, _SFCiphertext, _SFKey, _SFKeySpecifier;

@protocol _SFEncryptionOperation <NSObject, NSCopying, NSSecureCoding>
@property(readonly, copy, nonatomic) _SFKeySpecifier *encryptionKeySpecifier;
- (NSData *)decrypt:(_SFCiphertext *)arg1 withKey:(_SFKey *)arg2 error:(id *)arg3;
- (_SFCiphertext *)encrypt:(NSData *)arg1 withKey:(_SFKey *)arg2 error:(id *)arg3;
@end
