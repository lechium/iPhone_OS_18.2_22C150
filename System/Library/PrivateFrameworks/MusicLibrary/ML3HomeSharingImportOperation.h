//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface ML3HomeSharingImportOperation
{
    int _playlistNameOrder;	// 8 = 0x8
}

- (void)updateImportProgress:(float)arg1;	// IMP=0x00000000000c8511
- (shared_ptr_9dbb0ac9)containerImportItemFromDAAPElement:(shared_ptr_37fa1f3d)arg1 withTrackIds:(vector_1ee95920)arg2 trackPersonIdentifiers:(vector_c589d274)arg3;	// IMP=0x00000000000c8193
- (shared_ptr_9dbb0ac9)importItemFromDAAPElement:(shared_ptr_37fa1f3d)arg1;	// IMP=0x00000000000c80aa
- (_Bool)_performHomeSharingImportWithTransaction:(id)arg1;	// IMP=0x00000000000c7f7a
- (void)main;	// IMP=0x00000000000c7d90
- (unsigned long long)importSource;	// IMP=0x00000000000c7d85

@end

