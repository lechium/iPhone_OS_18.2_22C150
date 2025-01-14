//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CSSearchableItemAttributeSet, MADManagedSpotlightEntry;

@interface MADSpotlightImageAssetEntry
{
    long long _sandboxHandle;	// 8 = 0x8
    CSSearchableItemAttributeSet *_attributeSet;	// 16 = 0x10
    int _previousStatus;	// 24 = 0x18
    MADManagedSpotlightEntry *_asset;	// 32 = 0x20
}

+ (id)entryWithAsset:(id)arg1;	// IMP=0x004000000017bcae
- (void).cxx_destruct;	// IMP=0x002000000017ca93
@property(nonatomic) int previousStatus; // @synthesize previousStatus=_previousStatus;
@property(readonly, nonatomic) MADManagedSpotlightEntry *asset; // @synthesize asset=_asset;
@property(readonly, nonatomic) CSSearchableItemAttributeSet *attributeSet;
- (struct __CVBuffer *)decodeImageAtVideoURL:(id)arg1;	// IMP=0x001000000017c099
- (struct __CVBuffer *)decodeImageAtImageURL:(id)arg1;	// IMP=0x001000000017bfac
- (void)dealloc;	// IMP=0x001000000017bf31
- (_Bool)isMovieAsset;	// IMP=0x001000000017bf0d
- (id)uniqueIdentifier;	// IMP=0x001000000017bef0
- (id)filePath;	// IMP=0x001000000017bd45
- (id)logPrefix;	// IMP=0x001000000017bd38
- (_Bool)needsEmbeddingProcessing;	// IMP=0x001000000017bd23
- (_Bool)needsOCRProcessing;	// IMP=0x001000000017bd1b
- (_Bool)needsSceneProcessing;	// IMP=0x001000000017bd13
- (id)initWithAsset:(id)arg1;	// IMP=0x001000000017bbee

@end

