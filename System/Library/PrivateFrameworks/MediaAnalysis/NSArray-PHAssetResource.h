//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@interface NSArray (PHAssetResource)
- (id)vcp_highResImageResourcesForAsset:(id)arg1;	// IMP=0x00900000000195b3
- (float)vcp_getFpsRate;	// IMP=0x0090000000019493
- (id)vcp_avAsset:(_Bool)arg1;	// IMP=0x00900000000192b9
- (id)vcp_movieResourcesSorted:(_Bool)arg1;	// IMP=0x00900000000190b2
- (id)vcp_localMovieResourcesSorted:(_Bool)arg1;	// IMP=0x0090000000018e89
- (id)vcp_photoResourcesSorted:(_Bool)arg1;	// IMP=0x0090000000018c82
- (id)vcp_localPhotoResourcesSorted:(_Bool)arg1;	// IMP=0x0090000000018a59
- (id)mad_computeSyncResource;	// IMP=0x00900000000188f1
- (id)vcp_adjustmentsResource;	// IMP=0x0090000000018789
- (id)vcp_originalVideoResource;	// IMP=0x0090000000018604
- (id)vcp_originalResource;	// IMP=0x009000000001847f
- (id)vcp_smallMovieDerivativeResource;	// IMP=0x0090000000018400
- (id)vcp_smallResourceMeetingCriteria:(CDUnknownBlockType)arg1;	// IMP=0x00900000000181a2
- (id)vcp_thumbnailResource;	// IMP=0x009000000001818b
- (_Bool)vcp_hasLocalSlowmo:(_Bool)arg1;	// IMP=0x009000000001812f
- (_Bool)vcp_hasLocalAdjustments;	// IMP=0x0090000000017fc3
- (_Bool)vcp_hasLocalMovie:(_Bool)arg1;	// IMP=0x0090000000017e12
- (_Bool)vcp_hasLocalPhoto:(_Bool)arg1;	// IMP=0x0090000000017c61
- (_Bool)vcp_isOriginalLocal;	// IMP=0x0090000000017c09
- (id)vcp_resourceWithType:(unsigned long long)arg1;	// IMP=0x0090000000017a96
- (void)persistenceDelegate_enumerateInChunksOfSize:(unsigned long long)arg1 withOverageAllowance:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x009000000019ad5c
@end
