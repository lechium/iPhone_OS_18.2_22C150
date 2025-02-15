//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FCAsyncOnceOperation;

@interface FRFlintDataLoadingGroup : NSObject
{
    FCAsyncOnceOperation *_loadJSONOnce;	// 8 = 0x8
    FCAsyncOnceOperation *_loadFontsOnce;	// 16 = 0x10
    FCAsyncOnceOperation *_loadAssetURLsOnce;	// 24 = 0x18
    FCAsyncOnceOperation *_loadAssetsOnce;	// 32 = 0x20
    FCAsyncOnceOperation *_loadLinkedContentOnce;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000005465d
@property(readonly, nonatomic) FCAsyncOnceOperation *loadLinkedContentOnce; // @synthesize loadLinkedContentOnce=_loadLinkedContentOnce;
@property(readonly, nonatomic) FCAsyncOnceOperation *loadAssetsOnce; // @synthesize loadAssetsOnce=_loadAssetsOnce;
@property(readonly, nonatomic) FCAsyncOnceOperation *loadAssetURLsOnce; // @synthesize loadAssetURLsOnce=_loadAssetURLsOnce;
@property(readonly, nonatomic) FCAsyncOnceOperation *loadFontsOnce; // @synthesize loadFontsOnce=_loadFontsOnce;
@property(readonly, nonatomic) FCAsyncOnceOperation *loadJSONOnce; // @synthesize loadJSONOnce=_loadJSONOnce;
- (id)initWithLoadJSONOnce:(id)arg1 loadFontsOnce:(id)arg2 loadAssetURLsOnce:(id)arg3 loadAssetsOnce:(id)arg4 loadLinkedContentOnce:(id)arg5;	// IMP=0x0010000000054524

@end

