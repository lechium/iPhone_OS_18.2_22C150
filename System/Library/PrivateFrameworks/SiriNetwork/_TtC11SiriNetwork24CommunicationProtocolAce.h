//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE;

@interface _TtC11SiriNetwork24CommunicationProtocolAce : _TtCs12_SwiftObject
{
    MISSING_TYPE *delegate;	// 16 = 0x10
    MISSING_TYPE *queue;	// 32 = 0x20
    MISSING_TYPE *bufferedInputData;	// 40 = 0x28
    MISSING_TYPE *bufferedProviderHeaderOutputData;	// 56 = 0x38
    MISSING_TYPE *bufferedGeneralOutputData;	// 72 = 0x48
    MISSING_TYPE *bufferedUncompressedData;	// 88 = 0x58
    MISSING_TYPE *httpResponseHeader;	// 104 = 0x68
    MISSING_TYPE *inputDecompressor;	// 112 = 0x70
    MISSING_TYPE *outputCompressor;	// 152 = 0x98
    MISSING_TYPE *aceHeaderTimerSource;	// 192 = 0xc0
    MISSING_TYPE *aceHeaderTimerFireCount;	// 200 = 0xc8
    MISSING_TYPE *outstandingBarriers;	// 208 = 0xd0
    MISSING_TYPE *currentBarrierIndex;	// 216 = 0xd8
    MISSING_TYPE *pingTimerSource;	// 224 = 0xe0
    MISSING_TYPE *currentPingIndex;	// 232 = 0xe8
    MISSING_TYPE *pingInfo;	// 240 = 0xf0
    MISSING_TYPE *sendPings;	// 248 = 0xf8
    MISSING_TYPE *lastInputData;	// 256 = 0x100
    MISSING_TYPE *lastInputDataPointer;	// 272 = 0x110
    MISSING_TYPE *lastInputLength;	// 280 = 0x118
    MISSING_TYPE *inputLengthUnchangedCounter;	// 288 = 0x120
    MISSING_TYPE *lastOutputDataPointer;	// 296 = 0x128
    MISSING_TYPE *lastOutputLength;	// 304 = 0x130
    MISSING_TYPE *outputLengthUnchangedCounter;	// 312 = 0x138
    MISSING_TYPE *safetyNetBuffer;	// 320 = 0x140
}

@end
