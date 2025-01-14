//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAsset, AVContentKeyRequest, AVContentKeySession, AVWeakReference, NSArray, NSError, NSMutableArray, NSMutableDictionary;
@protocol AVStreamDataParserOutputHandling, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVStreamDataParserInternal : NSObject
{
    id <AVStreamDataParserOutputHandling> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_threadSafetyQ;	// 16 = 0x10
    long long _status;	// 24 = 0x18
    NSError *_error;	// 32 = 0x20
    AVAsset *_asset;	// 40 = 0x28
    NSMutableArray *_trackIDsNotProvidingMedia;	// 48 = 0x30
    NSArray *_allowableMIMETypes;	// 56 = 0x38
    struct OpaqueFigManifold *_figManifold;	// 64 = 0x40
    unsigned long long _typeIdOfInitialFigManifold;	// 72 = 0x48
    struct OpaqueCMBlockBuffer *_accumulatedInitializationData;	// 80 = 0x50
    _Bool _encounteredStreamDiscontinuity;	// 88 = 0x58
    AVWeakReference *_legacyStreamSession;	// 96 = 0x60
    AVContentKeySession *_defaultContentKeySession;	// 104 = 0x68
    AVWeakReference *_contentKeySession;	// 112 = 0x70
    AVContentKeyRequest *_sessionKeyRequest;	// 120 = 0x78
    _Bool _startedUsingInternalContentKeySession;	// 128 = 0x80
    int _currentTrackID;	// 132 = 0x84
    NSMutableDictionary *_tracksBecomingReadyByTrackID;	// 136 = 0x88
    NSMutableArray *_samplesBeforeReady;	// 144 = 0x90
    unsigned long long _samplesBeforeReadyTotalSize;	// 152 = 0x98
    CDStruct_1b6d18a9 _samplesBeforeReadyTotalDuration;	// 160 = 0xa0
    NSMutableDictionary *_trackDecryptorsByTrackID;	// 184 = 0xb8
    NSMutableDictionary *_trackFormatDescriptionsByTrackID;	// 192 = 0xc0
    _Bool _preferSandboxedParsing;	// 200 = 0xc8
}

@end

