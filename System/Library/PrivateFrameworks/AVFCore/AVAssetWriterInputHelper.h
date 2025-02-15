//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAssetWriterInputConfigurationState, AVAssetWriterInputPassDescription, AVOutputSettings, AVWeakReference, NSArray, NSDictionary, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface AVAssetWriterInputHelper : NSObject
{
    AVAssetWriterInputConfigurationState *_configurationState;	// 8 = 0x8
    AVWeakReference *_weakReferenceToAssetWriterInput;	// 16 = 0x10
}

@property(retain) AVWeakReference *weakReferenceToAssetWriterInput; // @synthesize weakReferenceToAssetWriterInput=_weakReferenceToAssetWriterInput;
@property(readonly, nonatomic) AVAssetWriterInputConfigurationState *configurationState; // @synthesize configurationState=_configurationState;
- (id)associatedInputsWithTrackAssociationType:(id)arg1;	// IMP=0x00000000000cd816
- (id)availableTrackAssociationTypes;	// IMP=0x00000000000cd7df
- (void)addTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2;	// IMP=0x00000000000cd75f
- (_Bool)canAddTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2;	// IMP=0x00000000000cd757
@property(readonly, nonatomic) struct __CVPixelBufferPool *pixelBufferPool;
@property(copy, nonatomic) NSDictionary *sourcePixelBufferAttributes;
- (void)markCurrentPassAsFinished;	// IMP=0x00000000000cd639
- (void)markAsFinished;	// IMP=0x00000000000cd5b9
- (_Bool)prepareToFinishWritingReturningError:(id *)arg1;	// IMP=0x00000000000cd5b1
- (void)prepareToEndSession;	// IMP=0x00000000000cd5ab
- (void)didStartInitialSession;	// IMP=0x00000000000cd5a5
- (long long)appendCaptionGroup:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000cd515
- (long long)appendCaption:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000cd485
- (_Bool)appendTaggedPixelBufferGroup:(struct OpaqueCMTaggedBufferGroup *)arg1 withPresentationTime:(CDStruct_1b6d18a9)arg2;	// IMP=0x00000000000cd405
- (_Bool)appendPixelBuffer:(struct __CVBuffer *)arg1 withPresentationTime:(CDStruct_1b6d18a9)arg2;	// IMP=0x00000000000cd385
- (long long)appendSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 error:(id *)arg2;	// IMP=0x00000000000cd2f5
- (void)stopRequestingMediaData;	// IMP=0x00000000000cd275
- (void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000cd1f5
@property(copy, nonatomic) NSURL *sampleReferenceBaseURL;
@property(copy, nonatomic) NSString *mediaDataLocation;
@property(nonatomic) long long preferredMediaChunkSize;
@property(nonatomic) long long preferredMediaChunkAlignment;
@property(nonatomic) CDStruct_1b6d18a9 preferredMediaChunkDuration;
@property(readonly, nonatomic) _Bool shouldRespondToInitialPassDescription;
- (_Bool)canStartRespondingToEachPassDescriptionReturningReason:(id *)arg1;	// IMP=0x00000000000cce6c
@property(readonly, nonatomic) AVAssetWriterInputPassDescription *currentPassDescription;
@property(readonly, nonatomic) _Bool canPerformMultiplePasses;
@property(nonatomic) _Bool performsMultiPassEncodingIfSupported;
@property(readonly, nonatomic) NSDictionary *trackReferences;
@property(nonatomic) short provisionalAlternateGroupID;
@property(nonatomic) short alternateGroupID;
@property(nonatomic) long long layer;
@property(nonatomic) float preferredVolume;
@property(nonatomic) _Bool marksOutputTrackAsEnabled;
@property(copy, nonatomic) NSString *extendedLanguageTag;
@property(copy, nonatomic) NSString *languageCode;
@property(nonatomic) struct CGSize naturalSize;
@property(nonatomic) _Bool maximizePowerEfficiency;
@property(nonatomic) _Bool expectsMediaDataInRealTime;
@property(readonly, nonatomic, getter=isReadyForMoreMediaData) _Bool readyForMoreMediaData;
@property(nonatomic) int mediaTimeScale;
@property(copy, nonatomic) NSArray *metadata;
@property(nonatomic) struct CGAffineTransform transform;
@property(readonly, nonatomic) struct opaqueCMFormatDescription *sourceFormatHint;
@property(readonly, nonatomic) AVOutputSettings *outputSettings;
@property(readonly, nonatomic) NSString *mediaType;
@property(readonly, nonatomic) int trackID;
- (void)transitionAssetWriterAndAllInputsToFailedStatusWithError:(id)arg1;	// IMP=0x00000000000cc3c3
- (id)transitionToAndReturnTerminalHelperWithTerminalStatus:(long long)arg1;	// IMP=0x00000000000cc336
@property(readonly, nonatomic) long long status;
- (id)description;	// IMP=0x00000000000cc2a5
- (void)dealloc;	// IMP=0x00000000000cc25b
- (id)initWithConfigurationState:(id)arg1;	// IMP=0x00000000000cc18c

@end

