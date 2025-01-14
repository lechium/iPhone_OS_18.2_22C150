//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UISearchBar.h>

@protocol SearchBarHeightObserver;

@interface MainWindowSearchBar : UISearchBar
{
    id <SearchBarHeightObserver> _heightObserver;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000028eab
@property(nonatomic) __weak id <SearchBarHeightObserver> heightObserver; // @synthesize heightObserver=_heightObserver;
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0010000000028dca

@end

