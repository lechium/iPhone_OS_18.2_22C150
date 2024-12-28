//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPModelLibraryTransientStateController;

__attribute__((visibility("hidden")))
@interface MusicKit_SoftLinking_MPModelLibraryTransientStateController : NSObject
{
    MPModelLibraryTransientStateController *_underlyingLibraryTransientStateController;	// 8 = 0x8
}

+ (id)didChangeNotificationName;	// IMP=0x0040000000007a2e
+ (id)sharedLibraryTransientStateController;	// IMP=0x00400000000069cc
- (void).cxx_destruct;	// IMP=0x0000000000007adc
- (void)_handleLibraryTransientStateControllerDidChangeNotification:(id)arg1;	// IMP=0x0000000000007a3b
- (long long)_underlyingLibraryTransientFavoriteState:(long long)arg1;	// IMP=0x0000000000007a1a
- (long long)_libraryTransientFavoriteState:(long long)arg1;	// IMP=0x0000000000007a06
- (void)performOperation:(id)arg1;	// IMP=0x00000000000079f0
- (void)performFavoriteStateChangeRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000007975
- (void)performLibraryKeepLocalChangeWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000007846
- (void)performLibraryImportChangeWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000076b2
- (void)performDeleteEntityWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000074cf
- (void)performAddToPlaylistWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000006d83
- (long long)transientFavoriteStateForModelObject:(id)arg1;	// IMP=0x0000000000006d1c
- (void)dealloc;	// IMP=0x0000000000006c82
- (id)_initWithUnderlyingLibraryTransientStateController:(id)arg1;	// IMP=0x0000000000006b05

@end
