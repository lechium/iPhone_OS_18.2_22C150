//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "DDPreviewAction.h"

@class DDParsecCollectionViewController;

__attribute__((visibility("hidden")))
@interface DDParsecAction : DDPreviewAction
{
    DDParsecCollectionViewController *_parsecViewController;	// 88 = 0x58
    _Bool _previewMode;	// 96 = 0x60
}

+ (_Bool)isAvailable;	// IMP=0x0010000000036547
- (void).cxx_destruct;	// IMP=0x0000000000036685
- (void)interactionDidFinishAndRequiresDismissal:(_Bool)arg1;	// IMP=0x0000000000036636
- (id)createViewController;	// IMP=0x0000000000036583
- (int)interactionType;	// IMP=0x0000000000036578
- (id)localizedName;	// IMP=0x0000000000036560

@end

