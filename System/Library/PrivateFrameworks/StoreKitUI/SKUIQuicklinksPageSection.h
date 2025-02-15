//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIStorePageSection.h"

@class NSString, SKUIQuicklinksPageComponent, SKUIQuicklinksViewController;

__attribute__((visibility("hidden")))
@interface SKUIQuicklinksPageSection : SKUIStorePageSection
{
    SKUIQuicklinksViewController *_quicklinksViewController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000039c036
- (id)_quicklinksViewController;	// IMP=0x000000000039be91
- (void)willTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000000039be01
- (void)quicklinksViewController:(id)arg1 didSelectLink:(id)arg2 atIndex:(long long)arg3;	// IMP=0x000000000039bcb1
- (long long)numberOfCells;	// IMP=0x000000000039bca6
- (struct CGSize)cellSizeForIndexPath:(id)arg1;	// IMP=0x000000000039bb89
- (id)cellForIndexPath:(id)arg1;	// IMP=0x000000000039ba3d
- (void)willAppearInContext:(id)arg1;	// IMP=0x000000000039b92d
- (void)dealloc;	// IMP=0x000000000039b8e2
- (id)initWithPageComponent:(id)arg1;	// IMP=0x000000000039b84c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) SKUIQuicklinksPageComponent *pageComponent; // @dynamic pageComponent;
@property(readonly) Class superclass;

@end

