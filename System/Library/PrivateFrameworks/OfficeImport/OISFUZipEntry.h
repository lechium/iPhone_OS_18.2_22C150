//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class OISFUCryptoKey, OISFUDataRepresentation;
@protocol SFUZipArchiveDataRepresentation;

__attribute__((visibility("hidden")))
@interface OISFUZipEntry
{
    OISFUDataRepresentation<SFUZipArchiveDataRepresentation> *mArchiveDataRepresentation;	// 32 = 0x20
    int mCompressionMethod;	// 40 = 0x28
    unsigned long long mCompressedSize;	// 48 = 0x30
    unsigned long long mUncompressedSize;	// 56 = 0x38
    unsigned long long mOffset;	// 64 = 0x40
    unsigned int mCrc;	// 72 = 0x48
    unsigned long long mDataOffset;	// 80 = 0x50
    _Bool mHasDataOffset;	// 88 = 0x58
    unsigned long long mEncodedLength;	// 96 = 0x60
    _Bool mHasEncodedLength;	// 104 = 0x68
    OISFUCryptoKey *mCryptoKey;	// 112 = 0x70
}

- (void)setDataLength:(long long)arg1;	// IMP=0x0000000000297bcd
- (void)setCryptoKey:(id)arg1;	// IMP=0x0000000000297b94
- (void)setCompressionFlags:(unsigned short)arg1;	// IMP=0x0000000000297b28
- (void)readZip64ExtraField:(const char *)arg1 size:(unsigned long long)arg2;	// IMP=0x0000000000297a1a
- (unsigned int)crc;	// IMP=0x0000000000297a0a
- (unsigned long long)backingFileDataOffset;	// IMP=0x0000000000297942
- (id)backingFilePath;	// IMP=0x0000000000297872
- (_Bool)isBackedByFile;	// IMP=0x0000000000297841
- (_Bool)isEncrypted;	// IMP=0x000000000029782c
- (_Bool)isCompressed;	// IMP=0x0000000000297818
- (void)copyToFile:(id)arg1;	// IMP=0x00000000002976ed
- (id)data;	// IMP=0x00000000002975d5
- (id)inputStream;	// IMP=0x000000000029731d
- (long long)encodedLength;	// IMP=0x000000000029730b
- (long long)dataLength;	// IMP=0x00000000002972fa
- (_Bool)isReadable;	// IMP=0x00000000002972b4
- (void)dealloc;	// IMP=0x000000000029725c
- (id)initWithDataRepresentation:(id)arg1 compressionMethod:(int)arg2 compressedSize:(unsigned long long)arg3 uncompressedSize:(unsigned long long)arg4 offset:(unsigned long long)arg5 crc:(unsigned int)arg6;	// IMP=0x00000000002971c9
- (id)initFromCentralFileHeader:(const char *)arg1 dataRepresentation:(id)arg2;	// IMP=0x00000000002970a3
- (unsigned long long)calculateEncodedLength;	// IMP=0x0000000000297df8
- (unsigned long long)dataOffset;	// IMP=0x0000000000297c95

@end
