//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SKUIMediaLibraryInterface : NSObject
{
}

- (id)_storePlatformKindForMediaItem:(id)arg1;	// IMP=0x0000000000107546
- (void)_restrictQueryToLocalContent:(id)arg1;	// IMP=0x00000000001074a0
- (id)_newDefaultQuery;	// IMP=0x00000000001073a9
- (unsigned long long)_AVTypesForMediaItem:(id)arg1;	// IMP=0x0000000000107381
- (long long)_availabilityForMediaItem:(id)arg1;	// IMP=0x0000000000107159
- (void)removeMediaItemsForLibraryItems:(id)arg1;	// IMP=0x0000000000106d90
- (id)stateForLibraryItem:(id)arg1;	// IMP=0x00000000001069d3
- (_Bool)isItemLocalAudiobook:(id)arg1;	// IMP=0x0000000000106838
- (_Bool)performActionForLibraryItem:(id)arg1;	// IMP=0x0000000000106029
- (id)exposedPlatformItemKinds;	// IMP=0x0000000000105f83
- (void)enumerateStatesForLibraryItems:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000105944

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

