//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LPFetcherGroup, LPSpecializationMetadata, LPiTunesMediaLookupTask, MPStoreLyricsSnippetURLComponents, NSString;
@protocol LPiTunesMediaUnresolvedMetadata;

__attribute__((visibility("hidden")))
@interface LPiTunesMediaMetadataProviderSpecialization
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_storefrontCountryCode;	// 16 = 0x10
    _Bool _canceled;	// 24 = 0x18
    LPiTunesMediaLookupTask *_lookupTask;	// 32 = 0x20
    LPSpecializationMetadata *_resolvedMetadata;	// 40 = 0x28
    id <LPiTunesMediaUnresolvedMetadata> _unresolvedMetadata;	// 48 = 0x30
    MPStoreLyricsSnippetURLComponents *_lyricComponents;	// 56 = 0x38
    LPFetcherGroup *_fetcherGroup;	// 64 = 0x40
}

+ (void)requestSourceApplicationMetadataForBundleIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x006000000005b5c7
+ (id)extractOffers:(id)arg1;	// IMP=0x0060000000054d1b
+ (id)assetFromVideoPreviewDictionary:(id)arg1 usingPreferredPlatformArray:(id)arg2;	// IMP=0x0060000000054a08
+ (id)assetArrayFromScreenshotDictionary:(id)arg1 usingPreferredPlatformArray:(id)arg2;	// IMP=0x006000000005478d
+ (id)assetArrayFromScreenshotArray:(id)arg1;	// IMP=0x006000000005460c
+ (id)assetArrayScreenshotArray:(id)arg1;	// IMP=0x0060000000054226
+ (long long)determineOrientationOfScreenshotsInArray:(id)arg1;	// IMP=0x006000000005409c
+ (id)specializedMetadataProviderForMetadata:(id)arg1 withContext:(id)arg2;	// IMP=0x0060000000053d0b
+ (id)specializedMetadataProviderForURLWithContext:(id)arg1;	// IMP=0x00600000000539be
+ (unsigned long long)specialization;	// IMP=0x00600000000539b3
- (void).cxx_destruct;	// IMP=0x000000000005c73e
- (void)_internalPostProcessResolvedMetadataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000005c69a
- (void)done;	// IMP=0x000000000005c5ea
- (void)fail;	// IMP=0x000000000005c57d
- (void)cancel;	// IMP=0x000000000005c555
- (void)completed;	// IMP=0x000000000005c538
- (void)start;	// IMP=0x000000000005b2e5
- (void)resolve;	// IMP=0x000000000005a97e
- (id)processResponseDictionary:(id)arg1 withStorefrontIdentifier:(id)arg2;	// IMP=0x000000000005a13c
- (id)schema;	// IMP=0x0000000000054f8c
- (id)initWithLyricComponents:(id)arg1 withContext:(id)arg2;	// IMP=0x0000000000053f64
- (id)initWithIdentifier:(id)arg1 storefrontCountryCode:(id)arg2 withContext:(id)arg3;	// IMP=0x0000000000053e8f

@end

