//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModelAssetResourceFactory, MLModelStructure;

__attribute__((visibility("hidden")))
@interface MLModelAssetModelStructureVendor : NSObject
{
    MLModelAssetResourceFactory *_resourceFactory;	// 8 = 0x8
    MLModelStructure *_modelStructure;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002c238d
@property(retain) MLModelStructure *modelStructure; // @synthesize modelStructure=_modelStructure;
@property(readonly, nonatomic) MLModelAssetResourceFactory *resourceFactory; // @synthesize resourceFactory=_resourceFactory;
- (void)modelStructureWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000002c22b3
- (void)_modelStructureWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000002c2185
- (id)initWithResourceFactory:(id)arg1;	// IMP=0x00000000002c2106

@end
