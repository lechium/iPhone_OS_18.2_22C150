//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAssetInspector, AVAssetInspectorLoader, AVDispatchOnce, NSDictionary, NSMutableArray;

__attribute__((visibility("hidden")))
@interface AVCompositionInternal : NSObject
{
    struct OpaqueFigMutableComposition *mutableComposition;	// 8 = 0x8
    AVDispatchOnce *formatReaderInitializationOnce;	// 16 = 0x10
    AVDispatchOnce *assetInspectorInitializationOnce;	// 24 = 0x18
    AVDispatchOnce *tracksInitializationOnce;	// 32 = 0x20
    struct OpaqueFigFormatReader *formatReader;	// 40 = 0x28
    AVAssetInspectorLoader *assetInspectorLoader;	// 48 = 0x30
    AVAssetInspector *assetInspector;	// 56 = 0x38
    struct CGSize naturalSize;	// 64 = 0x40
    NSDictionary *URLAssetInitializationOptions;	// 80 = 0x50
    NSMutableArray *tracks;	// 88 = 0x58
    AVDispatchOnce *figAssetInitializationOnce;	// 96 = 0x60
    struct OpaqueFigAsset *figAsset;	// 104 = 0x68
}

@end

