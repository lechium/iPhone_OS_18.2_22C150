//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TLKStackView.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface TLKContentsContainerView : TLKStackView
{
    NSMutableArray *_contentsViews;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000002b9ed
@property(retain, nonatomic) NSMutableArray *contentsViews; // @synthesize contentsViews=_contentsViews;
- (void)updateWithContents:(id)arg1;	// IMP=0x000000000002b5a3
- (id)init;	// IMP=0x000000000002b509

@end
