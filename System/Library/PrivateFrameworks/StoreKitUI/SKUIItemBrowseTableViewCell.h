//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIItemTableViewCell.h"

@class SKUIItemBrowseCellLayout;

__attribute__((visibility("hidden")))
@interface SKUIItemBrowseTableViewCell : SKUIItemTableViewCell
{
    SKUIItemBrowseCellLayout *_layout;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000002e4f2b
@property(readonly, nonatomic) SKUIItemBrowseCellLayout *layout; // @synthesize layout=_layout;
- (void)configureForItem:(id)arg1 clientContext:(id)arg2 rowIndex:(long long)arg3;	// IMP=0x00000000002e4c65
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000002e4b8c

@end

