//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VCVideoHardwareDumpWriter;

__attribute__((visibility("hidden")))
@interface VCVideoHardwareDumpCollector : NSObject
{
    struct __CFDictionary *_txFrameData;	// 8 = 0x8
    struct __CFDictionary *_rxFrameData;	// 16 = 0x10
    struct __CFDictionary *_captureFrameData;	// 24 = 0x18
    struct __CFArray *_txDumpHeaders;	// 32 = 0x20
    struct __CFArray *_rxDumpHeaders;	// 40 = 0x28
    struct __CFArray *_captureDumpHeaders;	// 48 = 0x30
    VCVideoHardwareDumpWriter *_writer;	// 56 = 0x38
}

- (void)dealloc;	// IMP=0x0000000000313db7
- (void)invalidate;	// IMP=0x0000000000313da6
- (id)init;	// IMP=0x00000000003137c2

@end

