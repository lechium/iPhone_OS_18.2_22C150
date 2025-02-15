//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache, NSMapTable, NSMutableDictionary, NSString;

@interface POISearchManager : NSObject
{
    NSCache *_poiCache;	// 8 = 0x8
    NSMapTable *_completionHandlers;	// 16 = 0x10
    NSMutableDictionary *_canShowActivityIndicatorForBusinessIDs;	// 24 = 0x18
    NSMutableDictionary *_loadingForBusinessIDs;	// 32 = 0x20
    NSMutableDictionary *_loadingTokensForBusinessIDs;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000007da80d
- (void)didReceiveRAPNotification;	// IMP=0x00100000007da7f7
- (void)searchForIdentifier:(id)arg1 allowExpired:(_Bool)arg2 traits:(id)arg3 completionHandler:(CDUnknownBlockType)arg4 callbackQueue:(id)arg5;	// IMP=0x00100000007da7db
- (void)searchForIdentifier:(id)arg1 allowExpired:(_Bool)arg2 traits:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000007da7ba
- (void)searchForIdentifier:(id)arg1 allowExpired:(_Bool)arg2 traits:(id)arg3 completionHandler:(CDUnknownBlockType)arg4 searchResultType:(unsigned int)arg5 callbackQueue:(id)arg6;	// IMP=0x00100000007da26d
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;	// IMP=0x00100000007da257
- (void)_cacheAndHandleSearchResult:(id)arg1 identifier:(id)arg2 completionHandlers:(id)arg3;	// IMP=0x00100000007da01e
- (id)searchResultForIdentifier:(id)arg1;	// IMP=0x00100000007d9fcd
- (void)_setLoading:(_Bool)arg1 forIdentifier:(id)arg2;	// IMP=0x00100000007d9f0d
- (void)setCanShowActivityIndicator:(_Bool)arg1 forIdentifier:(id)arg2;	// IMP=0x00100000007d9d1c
- (void)_updateActivityIndicatorForIdentifier:(id)arg1;	// IMP=0x00100000007d9b94
- (id)init;	// IMP=0x00100000007d9b12

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

