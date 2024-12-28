//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_data;

__attribute__((visibility("hidden")))
@interface HMDDataStreamFrameReader : NSObject
{
    NSObject<OS_dispatch_data> *_partialFrame;	// 8 = 0x8
    _Bool _headerInfoRead;	// 16 = 0x10
    _Bool _streamFailed;	// 17 = 0x11
    unsigned char _currentframeType;	// 18 = 0x12
    unsigned long long _payloadLength;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x006000000035380f
- (void).cxx_destruct;	// IMP=0x00000000003537ff
- (id)popRawFrame;	// IMP=0x0000000000353746
- (void)reset;	// IMP=0x000000000035371e
- (void)_readFrameHeaderIfPossible;	// IMP=0x000000000035368c
- (void)pushFrameData:(id)arg1;	// IMP=0x000000000035361b
- (unsigned long long)bytesNeededForCurrentFrame;	// IMP=0x00000000003535b6
- (unsigned long long)_getCurrentFrameSize;	// IMP=0x0000000000353591
- (_Bool)hasPartialData;	// IMP=0x000000000035356d
- (_Bool)hasCompleteFrame;	// IMP=0x0000000000353532
- (_Bool)hasFailed;	// IMP=0x0000000000353529
- (id)init;	// IMP=0x00000000003534e3

@end
