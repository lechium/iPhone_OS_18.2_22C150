//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVMediaFileType, AVWeakReference, NSOperationQueue, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVFigAssetWriterTrack : NSObject
{
    AVWeakReference *_weakReference;	// 8 = 0x8
    struct OpaqueFigAssetWriter *_figAssetWriter;	// 16 = 0x10
    int _trackID;	// 24 = 0x18
    NSString *_mediaType;	// 32 = 0x20
    AVMediaFileType *_mediaFileType;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_aboveHighWaterLevelQueue;	// 48 = 0x30
    _Bool _aboveHighWaterLevel;	// 56 = 0x38
    CDStruct_1b6d18a9 _sampleBufferCoalescingInterval;	// 60 = 0x3c
    NSOperationQueue *_operationQueue;	// 88 = 0x58
}

+ (id)assetWriterTrackWithFigAssetWriter:(struct OpaqueFigAssetWriter *)arg1 mediaType:(id)arg2 mediaFileType:(id)arg3 formatSpecification:(id)arg4 sourcePixelBufferAttributes:(id)arg5 multiPass:(_Bool)arg6 attachedAdaptor:(id)arg7 error:(id *)arg8;	// IMP=0x00600000000ce1f7
@property(readonly, nonatomic) AVMediaFileType *mediaFileType; // @synthesize mediaFileType=_mediaFileType;
@property(readonly, nonatomic) NSString *mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, nonatomic) int trackID; // @synthesize trackID=_trackID;
@property(readonly, nonatomic) struct OpaqueFigAssetWriter *figAssetWriter; // @synthesize figAssetWriter=_figAssetWriter;
@property(nonatomic) CDStruct_1b6d18a9 sampleBufferCoalescingInterval; // @synthesize sampleBufferCoalescingInterval=_sampleBufferCoalescingInterval;
- (int)_attachToFigAssetWriterUsingFormatSpecification:(id)arg1 sourcePixelBufferAttributes:(id)arg2 multiPass:(_Bool)arg3 error:(id *)arg4;	// IMP=0x00000000000cfb46
- (void)setFormatDescriptions:(id)arg1;	// IMP=0x00000000000cfad6
- (void)setSampleReferenceBaseURL:(id)arg1;	// IMP=0x00000000000cfa66
- (void)setMediaDataLocation:(id)arg1;	// IMP=0x00000000000cf866
- (void)setPreferredChunkSize:(long long)arg1;	// IMP=0x00000000000cf7df
- (void)setPreferredChunkAlignment:(long long)arg1;	// IMP=0x00000000000cf758
- (void)setPreferredChunkDuration:(CDStruct_1b6d18a9)arg1;	// IMP=0x00000000000cf6ac
- (void)setExcludeFromAutoSelection:(_Bool)arg1;	// IMP=0x00000000000cf629
- (void)setProvisionalAlternateGroupID:(short)arg1;	// IMP=0x00000000000cf5a2
- (void)setAlternateGroupID:(short)arg1;	// IMP=0x00000000000cf51b
- (void)setLayer:(long long)arg1;	// IMP=0x00000000000cf497
- (void)setTrackVolume:(float)arg1;	// IMP=0x00000000000cf3fb
- (void)setMarksOutputTrackAsEnabled:(_Bool)arg1;	// IMP=0x00000000000cf378
- (void)setExtendedLanguageTag:(id)arg1;	// IMP=0x00000000000cf308
- (void)setLanguageCode:(id)arg1;	// IMP=0x00000000000cf298
- (void)setFigDimensions:(id)arg1;	// IMP=0x00000000000cf228
- (void)setMediaTimeScale:(int)arg1;	// IMP=0x00000000000cf1a1
- (void)setFigTrackMatrix:(id)arg1;	// IMP=0x00000000000cf131
- (void)setFigMetadata:(id)arg1;	// IMP=0x00000000000cf0c1
- (_Bool)markEndOfDataReturningError:(id *)arg1;	// IMP=0x00000000000cf036
- (void)prepareToEndSession;	// IMP=0x00000000000cf030
- (void)endPassWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ceedd
- (_Bool)addTaggedPixelBufferGroup:(struct OpaqueCMTaggedBufferGroup *)arg1 atPresentationTime:(CDStruct_1b6d18a9)arg2 error:(id *)arg3;	// IMP=0x00000000000cedbe
- (_Bool)addPixelBuffer:(struct __CVBuffer *)arg1 atPresentationTime:(CDStruct_1b6d18a9)arg2 error:(id *)arg3;	// IMP=0x00000000000ceca2
- (_Bool)addSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 error:(id *)arg2;	// IMP=0x00000000000ceb49
- (_Bool)beginPassReturningError:(id *)arg1;	// IMP=0x00000000000ceac1
@property(readonly, getter=isAboveHighWaterLevel) _Bool aboveHighWaterLevel;
@property(readonly, nonatomic) _Bool encoderSupportsMultiPass;
- (void)_refreshAboveHighWaterLevel;	// IMP=0x00000000000ce81a
- (void)_figAssetWriterDidDropBelowLowWaterLevelForTrackID:(int)arg1;	// IMP=0x00000000000ce7e2
@property(readonly, nonatomic) struct __CVPixelBufferPool *pixelBufferPool;
- (void)dealloc;	// IMP=0x00000000000ce68a
- (id)initWithFigAssetWriter:(struct OpaqueFigAssetWriter *)arg1 mediaType:(id)arg2 mediaFileType:(id)arg3 formatSpecification:(id)arg4 sourcePixelBufferAttributes:(id)arg5 multiPass:(_Bool)arg6 error:(id *)arg7;	// IMP=0x00000000000ce346
- (id)init;	// IMP=0x00000000000ce31b

@end
