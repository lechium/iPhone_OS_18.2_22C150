//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface NSEncodingDetector : NSObject
{
    CDUnknownFunctionPointerType _recognizeFunc;	// 8 = 0x8
    unsigned long long _nsEncoding;	// 16 = 0x10
    unsigned int _cfEncoding;	// 24 = 0x18
    unsigned long long _givenNumBytes;	// 32 = 0x20
    unsigned long long _numChars;	// 40 = 0x28
    unsigned long long _numMultiByteChars;	// 48 = 0x30
    unsigned long long _numSingleBytechars;	// 56 = 0x38
    unsigned long long _skipBytes;	// 64 = 0x40
    unsigned long long _numZeroBytes;	// 72 = 0x48
    unsigned long long _mostFrqChars;	// 80 = 0x50
    unsigned long long _numBigrams;	// 88 = 0x58
    unsigned long long _numRep;	// 96 = 0x60
    unsigned long long _numDirect;	// 104 = 0x68
    unsigned long long _numBase64;	// 112 = 0x70
    unsigned long long _numSeq;	// 120 = 0x78
    unsigned long long _numTrigram;	// 128 = 0x80
    unsigned long long _numLower;	// 136 = 0x88
    unsigned long long _numHigher;	// 144 = 0x90
    double _weight;	// 152 = 0x98
    _Bool _hasBase64;	// 160 = 0xa0
    _Bool _isBigEndian;	// 161 = 0xa1
    _Bool _hasBOM;	// 162 = 0xa2
    unsigned int _tag;	// 164 = 0xa4
}

+ (CDUnknownFunctionPointerType)recognizeFuncForCFStringEncoding:(unsigned int)arg1;	// IMP=0x0060000000814dfe
+ (id)detectorForCFStringEncoding:(unsigned int)arg1 allowBackupDetectors:(_Bool)arg2;	// IMP=0x0060000000814d67
@property(readonly) unsigned int cfEncoding; // @synthesize cfEncoding=_cfEncoding;
@property(readonly) unsigned long long nsEncoding; // @synthesize nsEncoding=_nsEncoding;
- (unsigned long long)recognizeString:(const char *)arg1 withDataLength:(unsigned long long)arg2 intoBuffer:(id)arg3;	// IMP=0x0000000000814dea
- (double)multiBytesRatio;	// IMP=0x0000000000814ce3
- (double)_singleByte_confidence;	// IMP=0x0000000000814c07
- (double)_ASCII_confidence;	// IMP=0x0000000000814b7b
- (double)confidenceWith2Chars;	// IMP=0x0000000000814ad0
- (double)confidence;	// IMP=0x00000000008149af
- (id)initWithNSStringEncoding:(unsigned long long)arg1 CFStringEncoding:(unsigned int)arg2 recognizeFunc:(CDUnknownFunctionPointerType)arg3;	// IMP=0x0000000000814920
- (unsigned long long)maxSkipBytes;	// IMP=0x00000000008148db
- (double)bytesRatio;	// IMP=0x000000000081488e
- (void)softReset;	// IMP=0x0000000000814842
- (void)reset;	// IMP=0x00000000008147e4

@end
