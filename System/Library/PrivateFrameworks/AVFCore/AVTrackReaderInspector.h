//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVDispatchOnce, AVWeakReference;

__attribute__((visibility("hidden")))
@interface AVTrackReaderInspector
{
    struct OpaqueFigFormatReader *_formatReader;	// 32 = 0x20
    struct OpaqueFigTrackReader *_trackReader;	// 40 = 0x28
    AVDispatchOnce *_copySampleCursorServiceOnce;	// 48 = 0x30
    struct OpaqueFigSampleCursorService *_figSampleCursorService;	// 56 = 0x38
    _Bool _sampleCursorTimeAccuracyIsExact;	// 64 = 0x40
    int _trackID;	// 68 = 0x44
    unsigned int _mediaType;	// 72 = 0x48
    AVWeakReference *_weakReferenceToAsset;	// 80 = 0x50
    _Bool _prefersNominalDurations;	// 88 = 0x58
}

- (unsigned long long)hash;	// IMP=0x0000000000129d62
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000129ce8
- (_Bool)isExcludedFromAutoselectionInTrackGroup;	// IMP=0x0000000000129cc6
- (id)_trackReferences;	// IMP=0x0000000000129a1d
- (_Bool)hasSeamSamples;	// IMP=0x00000000001299fb
- (long long)provisionalAlternateGroupID;	// IMP=0x00000000001299da
- (long long)defaultAlternateGroupID;	// IMP=0x00000000001299b9
- (long long)alternateGroupID;	// IMP=0x0000000000129998
- (id)metadataForFormat:(id)arg1;	// IMP=0x00000000001297e1
- (id)availableMetadataFormats;	// IMP=0x0000000000129618
- (id)commonMetadata;	// IMP=0x0000000000129451
- (CDStruct_1b6d18a9)latentBaseDecodeTimeStampOfFirstTrackFragment;	// IMP=0x00000000001293a2
- (id)segmentsAsPresented;	// IMP=0x000000000012938e
- (id)segments;	// IMP=0x0000000000129371
- (id)_segmentsPreferringNominalDurations:(_Bool)arg1;	// IMP=0x0000000000129305
- (CDStruct_1b6d18a9)minSampleDuration;	// IMP=0x000000000012929a
- (float)nominalFrameRate;	// IMP=0x000000000012927e
- (id)loudnessInfo;	// IMP=0x00000000001291fb
- (float)preferredVolume;	// IMP=0x0000000000129170
- (long long)layer;	// IMP=0x000000000012914f
- (struct CGAffineTransform)preferredTransform;	// IMP=0x000000000012910e
- (struct CGSize)dimensions;	// IMP=0x00000000001290f2
- (struct CGSize)naturalSize;	// IMP=0x0000000000129087
- (id)extendedLanguageTag;	// IMP=0x000000000012906b
- (id)mediaCharacteristics;	// IMP=0x000000000012901f
- (id)languageCode;	// IMP=0x0000000000129003
- (float)peakDataRate;	// IMP=0x0000000000128fde
- (float)estimatedDataRate;	// IMP=0x0000000000128fb9
- (int)naturalTimeScale;	// IMP=0x0000000000128f9d
- (_Bool)hasAudioSampleDependencies;	// IMP=0x0000000000128f1b
- (_Bool)requiresFrameReordering;	// IMP=0x0000000000128ef9
- (CDStruct_1b6d18a9)uneditedDuration;	// IMP=0x0000000000128eb8
- (CDStruct_e83c9415)timeRange;	// IMP=0x0000000000128bf6
- (long long)totalSampleDataLength;	// IMP=0x0000000000128bda
- (int)decodabilityValidationResult;	// IMP=0x0000000000128b7b
- (_Bool)isDecodable;	// IMP=0x0000000000128b63
- (int)playabilityValidationResult;	// IMP=0x0000000000128b04
- (_Bool)isPlayable;	// IMP=0x0000000000128aec
- (_Bool)isSelfContained;	// IMP=0x0000000000128aca
- (_Bool)isEnabled;	// IMP=0x0000000000128aa8
- (id)formatDescriptions;	// IMP=0x0000000000128a8c
- (void *)_valueAsCFTypeForProperty:(struct __CFString *)arg1;	// IMP=0x0000000000128a1a
- (struct OpaqueFigSampleCursorService *)_getFigSampleCursorServiceReportingTimeAccuracy:(_Bool *)arg1;	// IMP=0x00000000001288c8
- (struct OpaqueFigFormatReader *)_figFormatReader;	// IMP=0x00000000001288b7
- (struct OpaqueFigTrackReader *)_figTrackReader;	// IMP=0x00000000001288a6
- (id)mediaType;	// IMP=0x0000000000128854
- (unsigned int)_figMediaType;	// IMP=0x0000000000128844
- (int)trackID;	// IMP=0x0000000000128834
- (id)asset;	// IMP=0x0000000000128817
- (void)dealloc;	// IMP=0x0000000000128785
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3;	// IMP=0x00000000001285ef

@end

