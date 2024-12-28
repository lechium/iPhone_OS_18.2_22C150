//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UISearchController.h>

@class NSMutableString, SUUISearchBar, UILabel;
@protocol SUUISearchControllerDelegate;

__attribute__((visibility("hidden")))
@interface SUUISearchController : UISearchController
{
    UILabel *_suffixLabel;	// 8 = 0x8
    NSMutableString *_paddingString;	// 16 = 0x10
    SUUISearchBar *_searchBar;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000093289
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000000000931d7
@property(readonly, nonatomic) SUUISearchBar *searchBar;
- (void)setActive:(_Bool)arg1;	// IMP=0x0000000000092f07
- (void)_setSuffix:(id)arg1;	// IMP=0x00000000000925b2

// Remaining properties
@property(nonatomic) __weak id <SUUISearchControllerDelegate> delegate; // @dynamic delegate;

@end
