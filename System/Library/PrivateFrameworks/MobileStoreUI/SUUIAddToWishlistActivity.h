//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIActivity.h>

@class SUUIClientContext, SUUIProductPageItem;

__attribute__((visibility("hidden")))
@interface SUUIAddToWishlistActivity : UIActivity
{
    SUUIClientContext *_clientContext;	// 8 = 0x8
    SUUIProductPageItem *_item;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000023a0f0
- (void)performActivity;	// IMP=0x000000000023a076
- (_Bool)canPerformWithActivityItems:(id)arg1;	// IMP=0x000000000023a06e
- (id)_beforeActivity;	// IMP=0x000000000023a05a
- (id)activityType;	// IMP=0x000000000023a04d
- (id)activityTitle;	// IMP=0x0000000000239fed
- (id)activityImage;	// IMP=0x0000000000239f76
- (id)initWithItem:(id)arg1 clientContext:(id)arg2;	// IMP=0x0000000000239ed4

@end

