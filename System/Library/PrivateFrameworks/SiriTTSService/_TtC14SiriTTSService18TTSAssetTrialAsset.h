//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TTSAsset.h"

@class MISSING_TYPE, NSArray, NSBundle, NSNumber, NSString, TTSAssetSource;

@interface _TtC14SiriTTSService18TTSAssetTrialAsset : TTSAsset
{
    MISSING_TYPE *factorName;	// 8 = 0x8
    MISSING_TYPE *assetAttr;	// 24 = 0x18
    MISSING_TYPE *path;	// 32 = 0x20
    MISSING_TYPE *isDownloading;	// 48 = 0x30
    MISSING_TYPE *downloadToken;	// 56 = 0x38
    MISSING_TYPE *progressQueue;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000042e6a
- (id)init;	// IMP=0x0000000000042e50
@property(nonatomic, readonly) long long purgeCondition;
- (void)setPurgeCondition:(long long)arg1;	// IMP=0x0000000000042c9e
- (void)purgeImmediately:(_Bool)arg1;	// IMP=0x0000000000042b13
- (void)purge;	// IMP=0x000000000004263b
- (void)cancelDownloadingThen:(CDUnknownBlockType)arg1;	// IMP=0x0000000000042171
- (void)downloadWithReservation:(id)arg1 useBattery:(_Bool)arg2 progress:(CDUnknownBlockType)arg3 then:(CDUnknownBlockType)arg4;	// IMP=0x0000000000041a5c
@property(nonatomic, readonly) _Bool locallyAvailable;
@property(nonatomic, readonly) _Bool purgeable;
@property(nonatomic, readonly) _Bool downloading;
@property(nonatomic, readonly) NSBundle *bundle;
@property(nonatomic, readonly) NSArray *supportedLanguages;
@property(nonatomic, readonly) NSNumber *diskSize;
@property(nonatomic, readonly) NSNumber *downloadSize;
@property(nonatomic, readonly) NSString *versionDescription;
@property(nonatomic, readonly) long long versionNumber;
@property(nonatomic, readonly) TTSAssetSource *assetSource;

@end
