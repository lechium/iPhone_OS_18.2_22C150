//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SSDownload.h"

@class ASDJob;

__attribute__((visibility("hidden")))
@interface SSSoftwareDownload : SSDownload
{
    ASDJob *_job;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000194447
@property(readonly, nonatomic) ASDJob *job; // @synthesize job=_job;
- (void)setValuesWithStoreDownloadMetadata:(id)arg1;	// IMP=0x0000000000194287
- (void)setDownloadPolicy:(id)arg1;	// IMP=0x00000000001940d8
- (void)setDownloadHandler:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000193f29
- (void)setBackgroundNetworkingUserInitiated:(_Bool)arg1;	// IMP=0x0000000000193d7a
- (void)setBackgroundNetworkingJobGroupName:(id)arg1;	// IMP=0x0000000000193bcb
- (void)restart;	// IMP=0x0000000000193a1c
- (void)resume;	// IMP=0x000000000019386d
- (_Bool)removeAsset:(id)arg1;	// IMP=0x00000000001936bc
- (void)prioritizeAboveDownload:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000019350d
- (void)pause;	// IMP=0x000000000019335e
- (_Bool)isEligibleForRestore:(id *)arg1;	// IMP=0x00000000001931ad
- (_Bool)isBackgroundNetworkingUserInitiated;	// IMP=0x0000000000192ffc
- (double)estimatedSecondsRemaining;	// IMP=0x0000000000192e45
- (long long)downloadSizeLimit;	// IMP=0x0000000000192c94
- (id)downloadPolicy;	// IMP=0x0000000000192ae3
- (long long)bytesTotal;	// IMP=0x0000000000192932
- (long long)bytesDownloaded;	// IMP=0x0000000000192781
- (id)backgroundNetworkingJobGroupName;	// IMP=0x00000000001925d0
- (_Bool)addAsset:(id)arg1 forType:(id)arg2;	// IMP=0x000000000019241f
- (id)assetsForType:(id)arg1;	// IMP=0x000000000019226e
- (id)status;	// IMP=0x00000000001920bd
- (void)setStatus:(id)arg1;	// IMP=0x0000000000191f0e
- (void)setNetworkConstraints:(id)arg1;	// IMP=0x0000000000191d5f
- (void)setMetadata:(id)arg1;	// IMP=0x0000000000191bb0
- (id)networkConstraints;	// IMP=0x00000000001919ff
- (id)metadata;	// IMP=0x000000000019184e
- (id)valueForProperty:(id)arg1;	// IMP=0x00000000001916ee
- (void)_becomeManagedOnConnection:(id)arg1;	// IMP=0x00000000001916e8
- (double)percentComplete;	// IMP=0x00000000001916cb
- (id)failureError;	// IMP=0x00000000001916ae
- (id)downloadPhaseIdentifier;	// IMP=0x000000000019166f
- (_Bool)isCancelable;	// IMP=0x000000000019163d
- (id)initWithPersistentIdentifier:(long long)arg1;	// IMP=0x000000000019147b
- (id)initWithJob:(id)arg1;	// IMP=0x00000000001913fa

@end

