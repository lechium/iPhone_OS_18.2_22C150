//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface SFUnifiedTabBarItemViewRegistration : NSObject
{
    CDUnknownBlockType _configurationHandler;	// 8 = 0x8
    CDUnknownBlockType _viewProvider;	// 16 = 0x10
    NSMutableArray *_viewReuseStack;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000368de
- (void)configureView:(id)arg1 forItem:(id)arg2 inArrangement:(id)arg3 isPreview:(_Bool)arg4;	// IMP=0x000000000003679d
- (void)enqueueItemView:(id)arg1;	// IMP=0x0000000000036787
- (id)createItemView;	// IMP=0x000000000003677b
- (id)dequeueOrCreateViewForItem:(id)arg1 isPreview:(_Bool)arg2;	// IMP=0x0000000000036668
- (id)initWithViewProvider:(CDUnknownBlockType)arg1 configurationHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000003658e

@end
