//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAssetReaderTrackOutput, AVWeakReference, NSMutableArray;

__attribute__((visibility("hidden")))
@interface AVAssetReaderOutputCaptionAdaptorInternal : NSObject
{
    AVAssetReaderTrackOutput *trackOutput;	// 8 = 0x8
    NSMutableArray *avCaptionGroupOutputQueue;	// 16 = 0x10
    struct __CFDictionary *figCaptionToAVCaptionMapping;	// 24 = 0x18
    struct OpaqueFigCaptionTimelineGenerator *sbufToCaptionGroupConverter;	// 32 = 0x20
    _Bool endOfStream;	// 40 = 0x28
    AVWeakReference *validationDelegate;	// 48 = 0x30
}

@end
