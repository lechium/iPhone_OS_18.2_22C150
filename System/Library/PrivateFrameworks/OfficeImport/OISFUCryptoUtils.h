//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OISFUCryptoUtils : NSObject
{
}

+ (id)sha1HashFromStorage:(id)arg1;	// IMP=0x008000000028bf09
+ (id)sha256HashFromString:(id)arg1;	// IMP=0x008000000028becd
+ (id)sha256HashFromStorage:(id)arg1;	// IMP=0x008000000028bdd3
+ (id)sha256HashFromData:(id)arg1;	// IMP=0x008000000028bc66
+ (id)decodePassphraseHint:(id)arg1;	// IMP=0x008000000028bbe9
+ (id)encodePassphraseHint:(id)arg1;	// IMP=0x008000000028bbcf
+ (id)newBufferedInputStreamForDecryptingZippedBundle:(id)arg1 key:(id)arg2 zipArchive:(id)arg3 isDeflated:(_Bool)arg4 zipStream:(id *)arg5;	// IMP=0x008000000028bae1
+ (id)newBufferedInputStreamForDecryptingFile:(id)arg1 key:(id)arg2 isDeflated:(_Bool)arg3 zipStream:(id *)arg4;	// IMP=0x008000000028b9e9
+ (_Bool)isEncryptionVersionAndFormatSupportedInPassphraseVerifier:(id)arg1;	// IMP=0x008000000028b990
+ (_Bool)checkKey:(id)arg1 againstPassphraseVerifier:(id)arg2;	// IMP=0x008000000028b624
+ (id)saltForSageFiles;	// IMP=0x008000000028b5ef
+ (id)saltFromVerifier:(id)arg1 saltLength:(unsigned long long)arg2;	// IMP=0x008000000028b481
+ (unsigned int)iterationCountFromPassphraseVerifier:(id)arg1;	// IMP=0x008000000028b3c8
+ (id)generatePassphraseVerifierForKey:(id)arg1 verifierVersion:(unsigned short)arg2;	// IMP=0x008000000028aec3
+ (unsigned int)ivLengthForKey:(id)arg1;	// IMP=0x008000000028aea1
+ (id)hashForPassphrase:(id)arg1 withSalt:(id)arg2;	// IMP=0x008000000028ae29
+ (id)generateRandomSaltWithLength:(unsigned long long)arg1;	// IMP=0x008000000028ada6
+ (id)generateRandomSalt;	// IMP=0x008000000028ad87
+ (_Bool)generateRandomDataInBuffer:(char *)arg1 length:(unsigned long long)arg2;	// IMP=0x008000000028ad29

@end

