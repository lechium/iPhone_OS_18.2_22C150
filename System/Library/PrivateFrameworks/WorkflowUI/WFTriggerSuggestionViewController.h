//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class MISSING_TYPE;
@protocol WFTriggerSuggestionViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface WFTriggerSuggestionViewController : UIViewController
{
    MISSING_TYPE *trigger;	// 8 = 0x8
    MISSING_TYPE *delegate;	// 16 = 0x10
    MISSING_TYPE *hostingController;	// 24 = 0x18
    MISSING_TYPE *searchController;	// 32 = 0x20
    MISSING_TYPE *dataSource;	// 40 = 0x28
    MISSING_TYPE *selectedEntryMetadataData;	// 48 = 0x30
    MISSING_TYPE *selectedReference;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000171878
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000171827
- (id)contentScrollViewForEdge:(unsigned long long)arg1;	// IMP=0x00000000001717d2
- (void)updateSearchResultsForSearchController:(id)arg1;	// IMP=0x0000000000171755
- (void)viewDidLoad;	// IMP=0x0000000000170488
- (void)loadView;	// IMP=0x00000000001701cb
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000016f76e
- (id)initWithTrigger:(id)arg1 selectedEntryMetadataData:(id)arg2 selectedReference:(id)arg3;	// IMP=0x000000000016f626
@property(nonatomic) __weak id <WFTriggerSuggestionViewControllerDelegate> delegate; // @synthesize delegate;

@end
