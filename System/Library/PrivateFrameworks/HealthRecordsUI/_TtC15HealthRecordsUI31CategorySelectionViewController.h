//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewController.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC15HealthRecordsUI31CategorySelectionViewController : UITableViewController
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *allCategories;	// 24 = 0x18
    MISSING_TYPE *selectedCategories;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000657b0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000065750
- (id)initWithStyle:(long long)arg1;	// IMP=0x0000000000065720
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000065510
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x0000000000065260
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000000651b0
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000064a00
- (void)viewDidLoad;	// IMP=0x00000000000649d0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000647a0

@end
